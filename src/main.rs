use vm::Vm;

fn main() {
    let mut vm = Vm::default();
    vm.eval_file("fmlib/std.fm");
    let res = vm.eval(
        r#"
        x := [1, 2, 3];
        len(x)
    "#,
    );
    if let Some(res) = res {
        println!("> {}", res);
    }
}
