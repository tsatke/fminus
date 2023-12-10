use std::fmt::Debug;

use crate::{Declaration, Expression};

pub trait IntoStatement {
    fn into_statement(self) -> Statement;
}

impl<T> IntoStatement for T
where
    T: Into<Statement>,
{
    fn into_statement(self) -> Statement {
        self.into()
    }
}

#[derive(Clone, Eq, PartialEq, Hash)]
pub enum Statement {
    Expression(Expression),
    Declaration(Declaration),
}

impl Debug for Statement {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Statement::Expression(e) => e.fmt(f),
            Statement::Declaration(d) => d.fmt(f),
        }
    }
}

macro_rules! from_into_statement {
    ($t:ident) => {
        impl From<$t> for Statement {
            fn from(t: $t) -> Self {
                Self::$t(t)
            }
        }
    };
}

from_into_statement!(Expression);
from_into_statement!(Declaration);
