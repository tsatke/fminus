use std::path::PathBuf;

use clap::Parser;
use clap_derive::Parser;

#[derive(Parser)]
pub struct Args {
    #[arg(index = 1)]
    pub file: PathBuf,
}

fn main() {
    let args = Args::parse();

    let file = &args.file;
    let res = fminus::eval_file(file);
    if let Some(res) = res {
        println!("> {}", res);
    }
}
