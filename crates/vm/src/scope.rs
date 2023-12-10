use std::collections::HashMap;
use std::rc::Rc;
use std::sync::Mutex;

use parser::Identifier;

use crate::value::Value;

#[derive(Default, Clone)]
pub struct Scope {
    variables: HashMap<Identifier, Rc<Mutex<Value>>>,
}

impl Scope {
    pub fn merge(&mut self, other: &Self) {
        for (name, value) in &other.variables {
            self.variables.insert(name.clone(), value.clone());
        }
    }

    pub fn declare_variable(&mut self, name: Identifier, value: Rc<Mutex<Value>>) {
        if self.variables.contains_key(&name) {
            panic!("variable '{}' already declared", name.0);
        }
        self.variables.insert(name, value);
    }

    pub fn get_variable(&self, name: Identifier) -> Option<Rc<Mutex<Value>>> {
        self.variables.get(&name).cloned()
    }
}
