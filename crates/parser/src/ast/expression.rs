use std::fmt::{Debug, Formatter};

use crate::{
    Assignment, Block, BooleanLiteral, FunctionCall, Identifier, If, Lambda, ListLiteral,
    NumberLiteral, StringLiteral,
};

pub trait IntoExpression {
    fn into_expression(self) -> Expression;
}

impl<T> IntoExpression for T
where
    T: Into<Expression>,
{
    fn into_expression(self) -> Expression {
        self.into()
    }
}

#[derive(Clone, Eq, PartialEq, Hash)]
pub enum Expression {
    Identifier(Identifier),
    NumberLiteral(NumberLiteral),
    StringLiteral(StringLiteral),
    ListLiteral(ListLiteral),
    BooleanLiteral(BooleanLiteral),
    FunctionCall(Box<FunctionCall>),
    Block(Box<Block>),
    Lambda(Box<Lambda>),
    Assignment(Box<Assignment>),
    If(Box<If>),
}

impl Debug for Expression {
    fn fmt(&self, f: &mut Formatter<'_>) -> std::fmt::Result {
        match self {
            Expression::Identifier(i) => i.fmt(f),
            Expression::NumberLiteral(n) => n.fmt(f),
            Expression::StringLiteral(s) => s.fmt(f),
            Expression::ListLiteral(l) => l.fmt(f),
            Expression::BooleanLiteral(b) => b.fmt(f),
            Expression::FunctionCall(c) => c.fmt(f),
            Expression::Block(b) => b.fmt(f),
            Expression::Lambda(l) => l.fmt(f),
            Expression::Assignment(a) => a.fmt(f),
            Expression::If(i) => i.fmt(f),
        }
    }
}

macro_rules! from_into_expression {
    ($t:ident) => {
        impl From<$t> for Expression {
            fn from(t: $t) -> Self {
                Self::$t(t)
            }
        }
    };
    (boxed $t:ident) => {
        impl From<$t> for Expression {
            fn from(t: $t) -> Self {
                Self::$t(Box::new(t))
            }
        }
    };
}

from_into_expression!(Identifier);
from_into_expression!(NumberLiteral);
from_into_expression!(StringLiteral);
from_into_expression!(ListLiteral);
from_into_expression!(BooleanLiteral);
from_into_expression!(boxed FunctionCall);
from_into_expression!(boxed Block);
from_into_expression!(boxed Lambda);
from_into_expression!(boxed Assignment);
from_into_expression!(boxed If);
