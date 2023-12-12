use std::path::Path;

use interpreter::{Value, Interpreter};

const STDLIB: &str = include_str!("../fmlib/std.fm");

pub fn eval_file(file: impl AsRef<Path>) -> Option<Value> {
    let mut interpreter = Interpreter::default();
    interpreter.eval(STDLIB);
    let res = interpreter.eval_file(file);
    res
}

pub fn eval_str(s: &str) -> Option<Value> {
    let mut interpreter = Interpreter::default();
    interpreter.eval(STDLIB);
    let res = interpreter.eval(s);
    res
}
