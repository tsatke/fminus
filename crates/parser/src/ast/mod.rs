use derive_more::Constructor;

pub use expression::*;
pub use statement::*;

mod expression;
mod statement;

#[derive(Constructor, Debug, Clone, Eq, PartialEq, Hash)]
pub struct SourceFile {
    pub block: Block,
}

#[derive(Constructor, Debug, Clone, Eq, PartialEq, Hash)]
pub struct Block {
    pub statements: Vec<Statement>,
    pub value: Option<Expression>,
}

#[derive(Constructor, Debug, Clone, Eq, PartialEq, Hash)]
pub struct If {
    pub the_if: ConditionAndBlock,
    pub else_if: Vec<ConditionAndBlock>,
    pub otherwise: Option<Block>,
}

#[derive(Constructor, Debug, Clone, Eq, PartialEq, Hash)]
pub struct ConditionAndBlock {
    pub condition: Expression,
    pub then: Block,
}

#[derive(Constructor, Debug, Clone, Eq, PartialEq, Hash)]
pub struct Declaration {
    pub name: Identifier,
    pub value: Expression,
}

#[derive(Constructor, Debug, Clone, Eq, PartialEq, Hash)]
pub struct Assignment {
    pub lvalue: Expression,
    pub rvalue: Expression,
}

#[derive(Constructor, Debug, Clone, Eq, PartialEq, Hash)]
pub struct FunctionCall {
    pub function: Expression,
    pub arguments: Vec<Expression>,
}

#[derive(Constructor, Debug, Clone, Eq, PartialEq, Hash)]
pub struct Lambda {
    pub parameters: Vec<Identifier>,
    pub body: Expression,
}

macro_rules! wrapped {
    ($t:ident, $wrapped:ty, $into_trait_name:ident, $into_name:ident) => {
        #[derive(Constructor, Clone, Eq, PartialEq, Hash)]
        pub struct $t(pub $wrapped);

        impl From<$wrapped> for $t {
            fn from(wrapped: $wrapped) -> Self {
                Self(wrapped)
            }
        }

        pub trait $into_trait_name {
            fn $into_name(self) -> $t;
        }

        impl<T> $into_trait_name for T
        where
            T: Into<$t>,
        {
            fn $into_name(self) -> $t {
                self.into()
            }
        }

        impl std::fmt::Debug for $t {
            fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
                write!(f, "{}({:?})", stringify!($t), self.0)
            }
        }
    };
}

wrapped!(Identifier, String, IntoIdentifier, into_identifier);
wrapped!(NumberLiteral, u64, IntoNumberLiteral, into_number_literal);
wrapped!(
    StringLiteral,
    String,
    IntoStringLiteral,
    into_string_literal
);
wrapped!(
    ListLiteral,
    Vec<Expression>,
    IntoListLiteral,
    into_list_literal
);
wrapped!(
    BooleanLiteral,
    bool,
    IntoBooleanLiteral,
    into_boolean_literal
);
