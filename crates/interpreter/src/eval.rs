use std::iter::once;
use std::rc::Rc;
use std::sync::Mutex;

use parser::{
    Assignment, Block, Declaration, Expression, FunctionCall, If, Lambda, SourceFile, Statement,
};

use crate::builtin::copy_inner;
use crate::scope::Scope;
use crate::value::Value;
use crate::{value, Interpreter};

#[derive(Eq, PartialEq, Copy, Clone)]
pub enum SeparateScope {
    Yes,
    No,
}

impl Interpreter {
    pub fn eval_source_file(&mut self, source_file: SourceFile) -> Option<Value> {
        self.eval_block(source_file.block, SeparateScope::No)
            .map(|value| value.lock().unwrap().clone())
    }

    pub fn with_scope<T>(&mut self, scope: Scope, f: impl FnOnce(&mut Self) -> T) -> T {
        self.scopes.push(scope);
        let res = f(self);
        self.scopes.pop();
        res
    }

    pub fn eval_block(
        &mut self,
        block: Block,
        separate_scope: SeparateScope,
    ) -> Option<Rc<Mutex<Value>>> {
        if separate_scope == SeparateScope::Yes {
            self.with_scope(Scope::default(), |interpreter| {
                for statement in block.statements {
                    interpreter.eval_statement(statement);
                }

                block.value.map(|expression| interpreter.eval_expression(expression))
            })
        } else {
            for statement in block.statements {
                self.eval_statement(statement);
            }

            block
                .value
                .map(|expression| self.eval_expression(expression))
        }
    }

    pub fn eval_expression(&mut self, expression: Expression) -> Rc<Mutex<Value>> {
        match expression {
            Expression::Identifier(v) => {
                for scope in self.scopes_mut() {
                    if let Some(value) = scope.get_variable(v.clone()) {
                        return value;
                    }
                }
                panic!("variable '{}' not found", v.0);
            }
            Expression::NumberLiteral(v) => Rc::new(Mutex::new(Value::Number(
                TryInto::<i64>::try_into(v.0).expect("number literal out of range fo i64"),
            ))),
            Expression::StringLiteral(v) => Rc::new(Mutex::new(Value::String(v.0))),
            Expression::ListLiteral(v) => Rc::new(Mutex::new(Value::List(
                v.0.into_iter()
                    .map(|expression| self.eval_expression(expression))
                    .collect(),
            ))),
            Expression::BooleanLiteral(v) => Rc::new(Mutex::new(Value::Boolean(v.0))),
            Expression::FunctionCall(v) => self.eval_function_call(*v),
            Expression::Block(b) => self
                .eval_block(*b, SeparateScope::Yes)
                .unwrap_or(Rc::new(Mutex::new(Value::Nil))),
            Expression::Lambda(v) => self.eval_lambda(*v),
            Expression::Assignment(v) => self.eval_assignment(*v),
            Expression::If(v) => self.eval_if(*v),
        }
    }

    pub fn eval_lambda(&mut self, lambda: Lambda) -> Rc<Mutex<Value>> {
        let captured_environment = self.scopes.iter().fold(Scope::default(), |mut acc, scope| {
            acc.merge(scope);
            acc
        });
        Rc::new(Mutex::new(Value::Lambda(value::Lambda {
            by_reference: lambda.by_reference,
            captured_environment,
            args: lambda.parameters,
            body: lambda.body,
        })))
    }

    pub fn eval_function_call(&mut self, function_call: FunctionCall) -> Rc<Mutex<Value>> {
        let function = self.eval_expression(function_call.function);
        let function = function.lock().unwrap().clone();
        if let Some(builtin) = function.builtin() {
            let args = function_call
                .arguments
                .into_iter()
                .map(|v| self.eval_expression(v))
                .collect();
            self.with_scope(Scope::default(), |interpreter| {
                builtin(interpreter, args).unwrap_or(Rc::new(Mutex::new(Value::Nil)))
            })
        } else if let Some(lambda) = function.lambda().cloned() {
            let args: Vec<_> = function_call
                .arguments
                .into_iter()
                .map(|v| self.eval_expression(v))
                .map(|v| if lambda.by_reference { v } else { copy_inner(v) })
                .collect();
            // captured environment
            self.with_scope(lambda.captured_environment, |interpreter| {
                // arguments
                interpreter.with_scope(Scope::default(), |interpreter| {
                    for (name, value) in lambda.args.into_iter().zip(args) {
                        interpreter.current_scope().declare_variable(name, value);
                    }
                    interpreter.eval_expression(lambda.body)
                })
            })
        } else if let Some(list) = function.list() {
            // this is our indexing, clean solution, ey?
            if function_call.arguments.len() != 1 {
                panic!("expected exactly one argument to list indexing");
            }
            let index = self.eval_expression(function_call.arguments.into_iter().next().unwrap());
            let index = index.lock().unwrap().number().unwrap();
            if index < 0 {
                panic!("index must be positive, got {}", index);
            }
            let index = index as usize;
            list[index].clone()
        } else {
            panic!("expected function or lambda");
        }
    }

    pub fn eval_if(&mut self, if_expression: If) -> Rc<Mutex<Value>> {
        for cond_and_block in once(if_expression.the_if).chain(if_expression.else_if) {
            let (cond, then) = (cond_and_block.condition, cond_and_block.then);
            let cond_evaluated = self.eval_expression(cond);
            if Some(true) == cond_evaluated.lock().unwrap().boolean() {
                return self
                    .eval_block(then, SeparateScope::Yes)
                    .unwrap_or(Rc::new(Mutex::new(Value::Nil)));
            }
        }

        // all ifs and if-elses evaluated to false

        if_expression
            .otherwise
            .map(|otherwise| self.eval_block(otherwise, SeparateScope::Yes))
            .unwrap_or(Some(Rc::new(Mutex::new(Value::Nil))))
            .unwrap_or(Rc::new(Mutex::new(Value::Nil)))
    }

    pub fn eval_assignment(&mut self, assignment: Assignment) -> Rc<Mutex<Value>> {
        let lvalue = self.eval_expression(assignment.lvalue);
        let rvalue = self
            .eval_expression(assignment.rvalue)
            .lock()
            .unwrap()
            .clone();
        *lvalue.lock().unwrap() = rvalue.clone();
        Rc::new(Mutex::new(rvalue))
    }

    pub fn eval_statement(&mut self, statement: Statement) {
        match statement {
            Statement::Declaration(v) => {
                self.eval_declaration(v);
            }
            Statement::Expression(v) => {
                self.eval_expression(v);
            }
        }
    }

    pub fn eval_declaration(&mut self, declaration: Declaration) {
        let name = declaration.name;
        let value = self.eval_expression(declaration.value);
        self.current_scope().declare_variable(name, value);
    }

    pub fn scopes_mut(&mut self) -> impl Iterator<Item = &mut Scope> {
        self.scopes.iter_mut().rev()
    }

    pub fn current_scope(&mut self) -> &mut Scope {
        self.scopes_mut()
            .next()
            .expect("ran out of scopes, this shouldn't happen")
    }
}
