use std::path::Path;

use interpreter::{Interpreter, Value};

const STDLIB: &str = include_str!("../fmlib/std.fm");

pub fn compile_and_run_file(file: impl AsRef<Path>) -> Option<Value> {
    todo!("compile and run '{}'", file.as_ref().display())
}

pub fn interpret_file(file: impl AsRef<Path>) -> Option<Value> {
    let mut interpreter = Interpreter::default();
    interpreter.eval(STDLIB);
    let res = interpreter.eval_file(file);
    res
}

pub fn interpret_str(s: &str) -> Option<Value> {
    let mut interpreter = Interpreter::default();
    interpreter.eval(STDLIB);
    let res = interpreter.eval(s);
    res
}
