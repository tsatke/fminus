use std::path::PathBuf;
use clap::Parser;
use clap_derive::Parser;
use vm::Vm;

const STDLIB: &str = include_str!("../fmlib/std.fm");

#[derive(Parser)]
pub struct Args {
    #[arg(index = 1)]
    pub file: PathBuf,
}

fn main() {
    let args = Args::parse();

    let mut vm = Vm::default();
    vm.eval(STDLIB);
    let res = vm.eval_file(&args.file);
    if let Some(res) = res {
        println!("> {}", res);
    }
}
