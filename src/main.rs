use std::path::PathBuf;

use clap::Parser;
use clap_derive::Parser;

#[derive(Parser)]
pub struct Args {
    #[arg(index = 1)]
    pub file: PathBuf,
    #[arg(
        long,
        help = "Interpret the file rather than compiling and running it. This is slower, but more likely to be correct."
    )]
    pub interpret: bool,
}

fn main() {
    let args = Args::parse();

    let file = &args.file;

    let res = if args.interpret {
        fminus::interpret_file(file)
    } else {
        fminus::compile_and_run_file(file)
    };
    if let Some(res) = res {
        println!("> {}", res);
    }
}
