use std::fmt::{Display, Formatter};
use std::ops::Deref;
use std::rc::Rc;
use std::sync::Mutex;

use parser::{Expression, Identifier};

use crate::scope::Scope;
use crate::Interpreter;

#[derive(Clone)]
pub struct RcValue(Rc<Mutex<Value>>);

impl Deref for RcValue {
    type Target = Mutex<Value>;

    fn deref(&self) -> &Self::Target {
        &self.0
    }
}

impl RcValue {
    pub fn new(value: Value) -> Self {
        Self(Rc::new(Mutex::new(value)))
    }

    pub fn nil() -> Self {
        Self::new(Value::Nil)
    }

    pub fn number(value: i64) -> Self {
        Self::new(Value::Number(value))
    }

    pub fn string(value: String) -> Self {
        Self::new(Value::String(value))
    }

    pub fn list(value: Vec<RcValue>) -> Self {
        Self::new(Value::List(value))
    }

    pub fn boolean(value: bool) -> Self {
        Self::new(Value::Boolean(value))
    }

    pub fn builtin(value: Rc<dyn Fn(&mut Interpreter, Vec<RcValue>) -> Option<RcValue>>) -> Self {
        Self::new(Value::Builtin(value))
    }

    pub fn lambda(value: Lambda) -> Self {
        Self::new(Value::Lambda(value))
    }

    pub fn clone_deep(&self) -> Self {
        Self::new(self.clone_inner())
    }

    pub fn clone_inner(&self) -> Value {
        self.0.lock().unwrap().clone()
    }
}

impl From<Value> for RcValue {
    fn from(value: Value) -> Self {
        Self::new(value)
    }
}

#[derive(Clone)]
pub enum Value {
    Nil,
    Number(i64),
    String(String),
    List(Vec<RcValue>),
    Boolean(bool),
    Builtin(Rc<dyn Fn(&mut Interpreter, Vec<RcValue>) -> Option<RcValue>>),
    Lambda(Lambda),
}

#[derive(Clone)]
pub struct Lambda {
    pub by_reference: bool,
    pub captured_environment: Scope,
    pub args: Vec<Identifier>,
    pub body: Expression,
}

impl PartialEq for Value {
    fn eq(&self, other: &Self) -> bool {
        match self {
            Value::Nil => other.nil().is_some(),
            Value::Number(v) => other.number().map(|o| v == &o).unwrap_or(false),
            Value::String(v) => other.string().map(|o| v == o).unwrap_or(false),
            Value::List(v) => other
                .list()
                .map(|o| {
                    o.len() == v.len()
                        && o.iter()
                            .zip(v.iter())
                            .all(|(a, b)| a.lock().unwrap().eq(&b.lock().unwrap()))
                })
                .unwrap_or(false),
            Value::Boolean(v) => other.boolean().map(|o| v == &o).unwrap_or(false),
            Value::Builtin(_) => false,
            Value::Lambda(_) => false,
        }
    }
}

impl Value {
    pub fn nil(&self) -> Option<()> {
        match self {
            Value::Nil => Some(()),
            _ => None,
        }
    }

    pub fn boolean(&self) -> Option<bool> {
        match self {
            Value::Boolean(v) => Some(*v),
            _ => None,
        }
    }

    pub fn number(&self) -> Option<i64> {
        match self {
            Value::Number(v) => Some(*v),
            _ => None,
        }
    }

    pub fn string(&self) -> Option<&String> {
        match self {
            Value::String(v) => Some(v),
            _ => None,
        }
    }

    pub fn list(&self) -> Option<&Vec<RcValue>> {
        match self {
            Value::List(v) => Some(v),
            _ => None,
        }
    }

    pub fn list_mut(&mut self) -> Option<&mut Vec<RcValue>> {
        match self {
            Value::List(v) => Some(v),
            _ => None,
        }
    }

    pub fn builtin(
        &self,
    ) -> Option<&Rc<dyn Fn(&mut Interpreter, Vec<RcValue>) -> Option<RcValue>>> {
        match self {
            Value::Builtin(v) => Some(v),
            _ => None,
        }
    }

    pub fn lambda(&self) -> Option<&Lambda> {
        match self {
            Value::Lambda(v) => Some(v),
            _ => None,
        }
    }
}

impl Display for Value {
    fn fmt(&self, f: &mut Formatter<'_>) -> std::fmt::Result {
        match self {
            Value::Nil => write!(f, "nil"),
            Value::Number(v) => write!(f, "{}", v),
            Value::String(v) => write!(f, "{}", v),
            Value::List(v) => {
                write!(f, "[")?;
                for (i, item) in v.iter().enumerate() {
                    if i != 0 {
                        write!(f, ", ")?;
                    }
                    write!(f, "{}", item.lock().unwrap())?;
                }
                write!(f, "]")
            }
            Value::Boolean(v) => write!(f, "{}", v),
            Value::Builtin(_) => write!(f, "<builtin>"),
            Value::Lambda(_) => write!(f, "<lambda>"),
        }
    }
}
