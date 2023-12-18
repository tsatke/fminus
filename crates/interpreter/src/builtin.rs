use std::fs::read_to_string;
use std::rc::Rc;

use parser::Identifier;

use crate::eval::SeparateScope;
use crate::scope::Scope;
use crate::{Interpreter, RcValue};

impl Interpreter {
    pub fn register_builtins(&mut self) {
        self.register_builtin("append", Self::builtin_append);
        self.register_builtin("builtin", Self::builtin_builtin);
        self.register_builtin("chars", Self::builtin_chars);
        self.register_builtin("each", Self::builtin_each);
        self.register_builtin("echo", Self::builtin_echo);
        self.register_builtin("error", Self::builtin_error);
        self.register_builtin("print", Self::builtin_print);
        self.register_builtin("read_file", Self::builtin_read_file);
        self.register_builtin("search", Self::builtin_search);
        self.register_builtin("source", Self::builtin_source);
        self.register_builtin("tail", Self::builtin_tail);
        self.register_builtin("+", create_builtin_binary_arith_op(|a, b| a + b));
        self.register_builtin("-", create_builtin_binary_arith_op(|a, b| a - b));
        self.register_builtin("*", create_builtin_binary_arith_op(|a, b| a * b));
        self.register_builtin("/", create_builtin_binary_arith_op(|a, b| a / b));
        self.register_builtin("$", Self::builtin_concat);
        self.register_builtin("==", Self::builtin_equals);
        self.register_builtin("..", Self::builtin_range);
    }

    pub fn register_builtin(
        &mut self,
        name: impl Into<String>,
        func: impl Fn(&mut Interpreter, Vec<RcValue>) -> Option<RcValue> + 'static,
    ) {
        self.current_scope().declare_variable(
            Identifier(name.into()),
            RcValue::builtin(Rc::new(move |interpreter, args| func(interpreter, args))),
        );
    }

    pub fn builtin_append(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        must_n_args(2, &args);
        let list = args[0].clone_deep();
        list.lock()
            .unwrap()
            .list_mut()
            .expect("left arg must be list")
            .push(args[1].clone_deep());
        Some(list)
    }

    pub fn builtin_builtin(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        must_n_args(1, &args);
        if args[0].lock().unwrap().builtin().is_none() {
            panic!("expected builtin");
        }
        None
    }

    pub fn builtin_chars(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        must_n_args(1, &args);

        let res = args[0]
            .lock()
            .unwrap()
            .string()
            .expect("arg must be a string")
            .chars()
            .map(|c| RcValue::string(c.to_string()))
            .collect::<Vec<_>>();
        Some(RcValue::list(res))
    }

    pub fn builtin_each(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        must_n_args(2, &args);
        let list = args[0].lock().unwrap();
        let list = list.list().expect("left arg must be list");

        let function = args[1].lock().unwrap();
        for arg in list {
            let args = vec![arg.clone()];
            if let Some(builtin) = function.builtin() {
                self.with_scope(Scope::new_unnamed(), |interpreter| {
                    builtin(interpreter, args);
                });
            } else if let Some(lambda) = function.lambda().cloned() {
                // captured environment
                self.with_scope(lambda.captured_environment, |interpreter| {
                    // arguments
                    interpreter.with_scope(Scope::new_unnamed(), |interpreter| {
                        for (name, value) in lambda.args.into_iter().zip(args) {
                            interpreter.current_scope().declare_variable(name, value);
                        }
                        interpreter.eval_expression(lambda.body);
                    });
                });
            } else {
                panic!("expected function or lambda");
            }
        }
        None
    }

    pub fn builtin_echo(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        let res = format!(
            "{}",
            args.iter()
                .map(|arg| format!("{}", arg.lock().unwrap()))
                .collect::<Vec<_>>()
                .join(" ")
        );
        Some(RcValue::string(res))
    }

    pub fn builtin_concat(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        must_n_args(2, &args);

        let left = args[0].lock().unwrap();
        let right = args[1].lock().unwrap();

        let left = left.string().expect("left arg must be string");
        let right = right.string().expect("right arg must be string");

        let res = format!("{}{}", left, right);

        Some(RcValue::string(res))
    }

    pub fn builtin_equals(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        must_n_args(2, &args);
        let left = args[0].lock().unwrap();
        let right = args[1].lock().unwrap();
        Some(RcValue::boolean(left.eq(&right)))
    }

    pub fn builtin_error(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        panic!(
            "error:\n\t{}\nbacktrace:\n{}",
            self.builtin_echo(args)
                .unwrap()
                .lock()
                .unwrap()
                .string()
                .unwrap(),
            self.scopes
                .iter()
                .rev()
                .filter(|scope| scope.is_named())
                .map(|scope| format!("\t{}(...)", scope.name().unwrap()))
                .collect::<Vec<_>>()
                .join("\n")
        );
    }

    pub fn builtin_print(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
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

    pub fn builtin_read_file(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        must_n_args(1, &args);
        let guard = args[0].lock().unwrap();
        let path = guard.string().expect("arg must be string");
        let content = read_to_string(path).unwrap();
        Some(RcValue::string(content))
    }

    pub fn builtin_range(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        must_n_args(2, &args);
        let left = args[0].lock().unwrap();
        let right = args[1].lock().unwrap();
        match (left.number(), right.number()) {
            (Some(left), Some(right)) => Some(RcValue::list(
                (left..right).map(|i| RcValue::number(i)).collect(),
            )),
            _ => panic!("expected numbers"),
        }
    }

    fn builtin_search(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        must_n_args(2, &args);

        // search takes two strings, the first is the string to search in, the second is the regexp
        // to search for

        let haystack = args[0].lock().unwrap();
        let needle = args[1].lock().unwrap();

        let haystack = haystack.string().expect("left arg must be string");
        let needle = needle.string().expect("right arg must be string");

        let list: Vec<_> = regex::Regex::new(needle)
            .unwrap()
            .captures_iter(haystack)
            .flat_map(|captures| {
                captures
                    .iter()
                    .skip(1)
                    .filter_map(|capture| capture.map(|c| c.as_str().to_string()))
                    .collect::<Vec<_>>()
            })
            .map(|capture| RcValue::string(capture))
            .collect();

        Some(RcValue::list(list))
    }

    fn builtin_source(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
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

    pub fn builtin_tail(&mut self, args: Vec<RcValue>) -> Option<RcValue> {
        must_n_args(1, &args);

        let arg = args[0].clone_deep();
        let list = arg.lock().unwrap();
        let mut list = list.list().expect("left arg must be list").clone();
        let first = list.remove(0);
        Some(RcValue::list(vec![first, RcValue::list(list)]))
    }
}

fn must_n_args(n: usize, args: &[RcValue]) {
    if args.len() != n {
        panic!("expected {} arguments, got {}", n, args.len());
    }
}

fn create_builtin_binary_arith_op(
    op: impl Fn(i64, i64) -> i64 + 'static,
) -> impl Fn(&mut Interpreter, Vec<RcValue>) -> Option<RcValue> + 'static {
    move |_: &mut Interpreter, args: Vec<RcValue>| -> Option<RcValue> {
        must_n_args(2, &args);
        let left = args[0].lock().unwrap();
        let right = args[1].lock().unwrap();
        match (left.number(), right.number()) {
            (Some(left), Some(right)) => Some(RcValue::number(op(left, right))),
            _ => panic!("expected numbers"),
        }
    }
}
