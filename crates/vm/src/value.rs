use std::fmt::{Display, Formatter};
use std::rc::Rc;
use std::sync::Mutex;

use parser::{Expression, Identifier};

use crate::scope::Scope;
use crate::Vm;

#[derive(Clone)]
pub enum Value {
    Nil,
    Number(i64),
    String(String),
    List(Vec<Rc<Mutex<Value>>>),
    Boolean(bool),
    Builtin(Rc<dyn Fn(&mut Vm, Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>>>),
    Lambda(Lambda),
}

#[derive(Clone)]
pub struct Lambda {
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

    pub fn list(&self) -> Option<&Vec<Rc<Mutex<Value>>>> {
        match self {
            Value::List(v) => Some(v),
            _ => None,
        }
    }

    pub fn list_mut(&mut self) -> Option<&mut Vec<Rc<Mutex<Value>>>> {
        match self {
            Value::List(v) => Some(v),
            _ => None,
        }
    }

    pub fn builtin(
        &self,
    ) -> Option<&Rc<dyn Fn(&mut Vm, Vec<Rc<Mutex<Value>>>) -> Option<Rc<Mutex<Value>>>>> {
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
