use std::collections::HashMap;

use parser::Identifier;

use crate::RcValue;

#[derive(Clone)]
pub struct Scope {
    name: Option<String>,
    variables: HashMap<Identifier, RcValue>,
}

impl Scope {
    pub fn new(name: impl Into<String>) -> Self {
        Self {
            name: Some(name.into()),
            variables: HashMap::new(),
        }
    }

    pub fn new_unnamed() -> Self {
        Self {
            name: None,
            variables: HashMap::new(),
        }
    }

    pub fn name(&self) -> Option<&str> {
        self.name.as_ref().map(|s| s.as_str())
    }

    pub fn is_named(&self) -> bool {
        self.name.is_some()
    }

    pub fn variables(&self) -> &HashMap<Identifier, RcValue> {
        &self.variables
    }

    pub fn merge(&mut self, other: &Self) {
        self.variables.extend(other.variables.clone());
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
