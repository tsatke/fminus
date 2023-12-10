use std::fs::read_to_string;
use std::rc::Rc;
use std::sync::Mutex;

use parser::Identifier;

use crate::eval::SeparateScope;
use crate::scope::Scope;
use crate::{Value, Vm};

impl Vm {
    pub fn register_builtins(&mut self) {
        self.register_builtin("append", Self::builtin_append);
        self.register_builtin("builtin", Self::builtin_builtin);
        self.register_builtin("each", Self::builtin_each);
        self.register_builtin("echo", Self::builtin_echo);
        self.register_builtin("error", Self::builtin_error);
        self.register_builtin("print", Self::builtin_print);
        self.register_builtin("source", Self::builtin_source);
        self.register_builtin("tail", Self::builtin_tail);
        self.register_builtin("+", create_builtin_binary_arith_op(|a, b| a + b));
        self.register_builtin("-", create_builtin_binary_arith_op(|a, b| a - b));
        self.register_builtin("*", create_builtin_binary_arith_op(|a, b| a * b));
        self.register_builtin("/", create_builtin_binary_arith_op(|a, b| a / b));
        self.register_builtin("==", Self::builtin_equals);
        self.register_builtin("..", Self::builtin_range);
    }

    pub fn register_builtin(
        &mut self,
        name: impl Into<String>,
        func: impl Fn(&mut Vm, Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> + 'static,
    ) {
        self.current_scope().declare_variable(
            Identifier(name.into()),
            Rc::new(Mutex::new(Value::Builtin(Rc::new(move |vm, args| {
                func(vm, args)
            })))),
        );
    }

    pub fn builtin_append(&mut self, args: Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> {
        must_n_args(2, &args);
        let list = copy_inner(args[0].clone());
        list.lock()
            .unwrap()
            .list_mut()
            .expect("left arg must be list")
            .push(copy_inner(args[1].clone()));
        Some(list)
    }

    pub fn builtin_builtin(&mut self, args: Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> {
        must_n_args(1, &args);
        if args[0].lock().unwrap().builtin().is_none() {
            panic!("expected builtin");
        }
        None
    }

    pub fn builtin_each(&mut self, args: Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> {
        must_n_args(2, &args);
        let list = args[0].lock().unwrap();
        let list = list.list().expect("left arg must be list");

        let function = args[1].lock().unwrap();
        for arg in list {
            let args = vec![arg.clone()];
            if let Some(builtin) = function.builtin() {
                self.with_scope(Scope::default(), |vm| {
                    builtin(vm, args);
                });
            } else if let Some(lambda) = function.lambda().cloned() {
                // captured environment
                self.with_scope(lambda.captured_environment, |vm| {
                    // arguments
                    vm.with_scope(Scope::default(), |vm| {
                        for (name, value) in lambda.args.into_iter().zip(args) {
                            vm.current_scope().declare_variable(name, value);
                        }
                        vm.eval_expression(lambda.body);
                    });
                });
            } else {
                panic!("expected function or lambda");
            }
        }
        None
    }

    pub fn builtin_echo(&mut self, args: Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> {
        let res = format!(
            "{}",
            args.iter()
                .map(|arg| format!("{}", arg.lock().unwrap()))
                .collect::<Vec<_>>()
                .join(" ")
        );
        Some(Rc::new(Mutex::new(Value::String(res))))
    }

    pub fn builtin_equals(&mut self, args: Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> {
        must_n_args(2, &args);
        let left = args[0].lock().unwrap();
        let right = args[1].lock().unwrap();
        Some(Rc::new(Mutex::new(Value::Boolean(left.eq(&right)))))
    }

    pub fn builtin_error(&mut self, args: Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> {
        panic!(
            "error: {}",
            self.builtin_echo(args)
                .unwrap()
                .lock()
                .unwrap()
                .string()
                .unwrap()
        );
    }

    pub fn builtin_print(&mut self, args: Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> {
        println!(
            "{}",
            self.builtin_echo(args)
                .unwrap()
                .lock()
                .unwrap()
                .string()
                .unwrap()
        );
        None
    }

    pub fn builtin_range(&mut self, args: Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> {
        must_n_args(2, &args);
        let left = args[0].lock().unwrap();
        let right = args[1].lock().unwrap();
        match (left.number(), right.number()) {
            (Some(left), Some(right)) => Some(Rc::new(Mutex::new(Value::List(
                (left..right)
                    .map(|i| Rc::new(Mutex::new(Value::Number(i))))
                    .collect(),
            )))),
            _ => panic!("expected numbers"),
        }
    }

    fn builtin_source(&mut self, args: Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> {
        must_n_args(1, &args);
        let guard = args[0].lock().unwrap();
        let path = guard.string().expect("arg must be string");
        let content = read_to_string(path).unwrap();
        let block = parser::parse(&content).block;

        // we need to step out one scope to get the scope of the caller, in which we want to evalate
        // the new file
        let our_scope = self.scopes.pop().unwrap();
        let res = self.eval_block(block, SeparateScope::No);
        self.scopes.push(our_scope); // push it back - nothing ever happened
        res
    }

    pub fn builtin_tail(&mut self, args: Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> {
        must_n_args(1, &args);

        let arg = copy_inner(args[0].clone());
        let list = arg.lock().unwrap();
        let mut list = list.list().expect("left arg must be list").clone();
        let first = list.remove(0);
        Some(Rc::new(Mutex::new(Value::List(vec![
            first,
            Rc::new(Mutex::new(Value::List(list))),
        ]))))
    }
}

fn must_n_args(n: usize, args: &[Rc<Mutex<Value>>]) {
    if args.len() != n {
        panic!("expected {} arguments, got {}", n, args.len());
    }
}

pub fn copy_inner(v: Rc<Mutex<Value>>) -> Rc<Mutex<Value>> {
    Rc::new(Mutex::new(v.lock().unwrap().clone()))
}

fn create_builtin_binary_arith_op(
    op: impl Fn(i64, i64) -> i64 + 'static,
) -> impl Fn(&mut Vm, Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>> + 'static {
    move |_: &mut Vm, args: Vec<Rc<Mutex<Value>>>| -> Option<Rc<Mutex<Value>>> {
        must_n_args(2, &args);
        let left = args[0].lock().unwrap();
        let right = args[1].lock().unwrap();
        match (left.number(), right.number()) {
            (Some(left), Some(right)) => Some(Rc::new(Mutex::new(Value::Number(op(left, right))))),
            _ => panic!("expected numbers"),
        }
    }
}
