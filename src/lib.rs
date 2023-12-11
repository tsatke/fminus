use std::path::Path;

use vm::{Value, Vm};

const STDLIB: &str = include_str!("../fmlib/std.fm");

pub fn eval_file(file: impl AsRef<Path>) -> Option<Value> {
    let mut vm = Vm::default();
    vm.eval(STDLIB);
    let res = vm.eval_file(file);
    res
}

pub fn eval_str(s: &str) -> Option<Value> {
    let mut vm = Vm::default();
    vm.eval(STDLIB);
    let res = vm.eval(s);
    res
}
