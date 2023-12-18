use std::collections::HashMap;

use parser::Identifier;

use crate::RcValue;

#[derive(Default, Clone)]
pub struct Scope {
    variables: HashMap<Identifier, RcValue>,
}

impl Scope {
    pub fn merge(&mut self, other: &Self) {
        for (name, value) in &other.variables {
            self.variables.insert(name.clone(), value.clone());
        }
    }

    pub fn declare_variable(&mut self, name: Identifier, value: RcValue) {
        if self.variables.contains_key(&name) {
            panic!("variable '{}' already declared", name.0);
        }
        self.variables.insert(name, value);
    }

    pub fn get_variable(&self, name: Identifier) -> Option<RcValue> {
        self.variables.get(&name).cloned()
    }
}
