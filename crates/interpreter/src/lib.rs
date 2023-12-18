use std::fs::read_to_string;
use std::path::Path;

use scope::Scope;
pub use value::*;

mod builtin;
mod eval;
mod scope;
mod value;

pub struct Interpreter {
    scopes: Vec<Scope>,
}

impl Default for Interpreter {
    fn default() -> Self {
        let mut res = Self {
            scopes: vec![Scope::new("<global>")],
        };
        res.register_builtins();
        res
    }
}

impl Interpreter {
    pub fn eval_file(&mut self, p: impl AsRef<Path>) -> Option<Value> {
        let content = read_to_string(p).unwrap();
        self.eval(content)
    }

    pub fn eval(&mut self, content: impl AsRef<str>) -> Option<Value> {
        self.eval_source_file(parser::parse(content))
    }

    pub fn error(&mut self, msg: &str) -> ! {
        panic!(
            "error:\n\t{}\nbacktrace:\n{}",
            msg,
            self.scopes
                .iter()
                .rev()
                .filter(|scope| scope.is_named())
                .enumerate()
                .map(|(i, scope)| format!("\t#{i}: {}(...)", scope.name().unwrap()))
                .collect::<Vec<_>>()
                .join("\n")
        );
    }
}
