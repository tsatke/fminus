use tree_sitter::{Node, Parser};

pub use ast::*;

mod ast;

pub fn parse(content: impl AsRef<str>) -> SourceFile {
    let mut parser = Parser::new();
    parser
        .set_language(tree_sitter_fminus::language())
        .expect("error loading fminus language");

    let content = content.as_ref();
    let tree = parser.parse(content, None).unwrap();
    if tree.root_node().has_error() {
        tree.root_node()
            .children(&mut tree.root_node().walk())
            .filter(|n| n.has_error())
            .for_each(|node| {
                println!(
                    "error in {}: {}",
                    node.kind(),
                    node.utf8_text(&content.as_bytes()).unwrap(),
                );
            });
        panic!("errors while parsing");
    }

    let root_node = tree.root_node();
    let source_file = parse_source_file(content.as_bytes(), &root_node);
    source_file
}

fn parse_source_file(source: &[u8], node: &Node) -> SourceFile {
    // this works since `parse_block` only considers named
    // children (so it doesn't matter whether the `(` and `)`
    // are in the node, as they are not named)
    SourceFile::new(parse_block(source, node))
}

fn parse_statement(source: &[u8], node: &Node) -> Statement {
    let cursor = &mut node.walk();
    let mut children = node.named_children(cursor);
    // a statement only has one named child, either a declaration, an expression, or an if statement
    let child = children.next().unwrap();

    match child.kind() {
        "declaration" => parse_declaration(source, &child).into_statement(),
        "expression" => parse_expression(source, &child).into_statement(),
        _ => unreachable!(),
    }
}

fn parse_declaration(source: &[u8], node: &Node) -> Declaration {
    let cursor = &mut node.walk();
    let mut children = node.named_children(cursor);
    let identifier = children.next().unwrap();
    let expression = children.next().unwrap();

    Declaration::new(
        parse_identifier(source, &identifier),
        parse_expression(source, &expression),
    )
}

fn parse_expression(source: &[u8], node: &Node) -> Expression {
    // expression has exactly one named child
    let child = node.named_child(0).unwrap();
    match child.kind() {
        "identifier" => parse_identifier(source, &child).into_expression(),
        "number_literal" => parse_number_literal(source, &child).into_expression(),
        "string_literal" => parse_string_literal(source, &child).into_expression(),
        "list_literal" => parse_list_literal(source, &child).into_expression(),
        "boolean_literal" => parse_boolean_literal(source, &child).into_expression(),
        "function_call" => parse_function_call(source, &child).into_expression(),
        "infix_function_call" => parse_infix_function_call(source, &child).into_expression(),
        "prefix_unary_function_call" => {
            parse_prefix_unary_function_call(source, &child).into_expression()
        }
        "block" => parse_block(source, &child).into_expression(),
        "lambda" => parse_lambda(source, &child).into_expression(),
        "assignment" => parse_assignment(source, &child).into_expression(),
        "if_statement" => parse_if(source, &child).into_expression(),
        _ => unreachable!("unknown expression kind: {}", child.kind()),
    }
}

fn parse_function_call(source: &[u8], node: &Node) -> FunctionCall {
    // can either be an identifier or a block
    let mut cursor = node.walk();
    let mut children = node.named_children(&mut cursor);

    let left = children.next().unwrap();
    let left = match left.kind() {
        "identifier" => parse_identifier(source, &left).into_expression(),
        "block" => parse_block(source, &left).into_expression(),
        _ => unreachable!("unknown function call left: {}", left.kind()),
    };

    let arguments = children
        .map(|child| parse_expression(source, &child))
        .collect();

    FunctionCall::new(left, arguments)
}

fn parse_infix_function_call(source: &[u8], node: &Node) -> FunctionCall {
    // infix function calls have exactly three named children, the left expression, the function identifier, and the right expression
    let left = node
        .named_child(0)
        .map(|n| parse_expression(source, &n))
        .unwrap();
    let ident = node
        .named_child(1)
        .map(|n| parse_identifier(source, &n))
        .unwrap();
    let right = node
        .named_child(2)
        .map(|n| parse_expression(source, &n))
        .unwrap();
    FunctionCall::new(ident.into_expression(), vec![left, right])
}

fn parse_prefix_unary_function_call(source: &[u8], node: &Node) -> FunctionCall {
    // prefix function calls have exactly two named children, the left identifier and the right expression
    let ident = node
        .named_child(0)
        .map(|n| parse_identifier(source, &n))
        .unwrap();
    let expr = node
        .named_child(1)
        .map(|n| parse_expression(source, &n))
        .unwrap();

    if ident.0 == "-" {
        // `-1` is syntactic sugar for `0-1`
        return FunctionCall::new(
            ident.into_expression(),
            vec![Expression::NumberLiteral(NumberLiteral(0)), expr],
        );
    }
    FunctionCall::new(ident.into_expression(), vec![expr])
}

fn parse_block(source: &[u8], node: &Node) -> Block {
    let cursor = &mut node.walk();
    let children = node.named_children(cursor);

    // take from children while the node kind is 'statement', and then take the last one
    let mut statements = Vec::with_capacity(children.len());
    let mut expression: Option<Expression> = None;
    for child in children {
        debug_assert!(
            expression.is_none(),
            "got expression after already having one, did you change the grammar?"
        );
        if child.kind() == "statement" {
            statements.push(parse_statement(source, &child));
        } else {
            expression = Some(parse_expression(source, &child));
        }
    }

    Block::new(statements, expression)
}

fn parse_lambda(source: &[u8], node: &Node) -> Lambda {
    let ref_indicator = node.child(0).unwrap();
    let by_reference = ref_indicator.utf8_text(source).unwrap() == "\\ref";

    let cursor = &mut node.walk();
    let children = node.named_children(cursor);

    let mut parameters = Vec::with_capacity(children.len());
    for child in children {
        if child.kind() == "identifier" {
            parameters.push(parse_identifier(source, &child));
        } else {
            return Lambda::new(by_reference, parameters, parse_expression(source, &child));
        }
    }

    unreachable!("no expression in/as lambda body")
}

fn parse_assignment(source: &[u8], node: &Node) -> Assignment {
    // an assignment contains exactly two named children, the left expression and the right expression
    let left = node
        .named_child(0)
        .map(|n| parse_expression(source, &n))
        .unwrap();
    let right = node
        .named_child(1)
        .map(|n| parse_expression(source, &n))
        .unwrap();

    Assignment::new(left, right)
}

fn parse_if(source: &[u8], node: &Node) -> If {
    /*
    an if statement consists of:
    expression block else_if_statement* else_statement?
     */
    let cursor = &mut node.walk();
    let mut children = node.named_children(cursor);

    let mut the_if: Option<ConditionAndBlock> = None;
    let mut else_if: Vec<ConditionAndBlock> = Vec::new();

    loop {
        let cond_or_block = children.next();
        if cond_or_block.is_none() {
            break; // we're at the end
        }
        let cond_or_block = cond_or_block.unwrap();
        if cond_or_block.kind() == "block" {
            // we have the 'else' block
            let else_block = parse_block(source, &cond_or_block);
            return If::new(
                the_if.expect("no if in if statement"),
                else_if,
                Some(else_block),
            );
        }
        debug_assert_eq!(cond_or_block.kind(), "expression");
        let condition = parse_expression(source, &cond_or_block);
        let block = parse_block(source, &children.next().unwrap());
        let cond_and_block = ConditionAndBlock::new(condition, block);
        if the_if.is_none() {
            the_if = Some(cond_and_block);
        } else {
            else_if.push(cond_and_block);
        }
    }

    If::new(the_if.expect("no if in if statement"), else_if, None)
}

fn parse_identifier(source: &[u8], node: &Node) -> Identifier {
    node.utf8_text(source)
        .unwrap()
        .to_string()
        .into_identifier()
}

fn parse_number_literal(source: &[u8], node: &Node) -> NumberLiteral {
    NumberLiteral::new(
        node.utf8_text(source)
            .unwrap()
            .parse::<u64>()
            .expect("error parsing number literal"),
    )
}

fn parse_string_literal(source: &[u8], node: &Node) -> StringLiteral {
    let text = node.utf8_text(source).unwrap();
    let text = &text[1..text.len() - 1]; // remove quotes
    let text = text.replace("\\'", "'"); // unescape single quotes
    StringLiteral::new(text)
}

fn parse_list_literal(source: &[u8], node: &Node) -> ListLiteral {
    // list literals have only expressions as named children, every expression is an element in the list
    let cursor = &mut node.walk();
    let children = node.named_children(cursor);
    let elements = children
        .map(|child| parse_expression(source, &child))
        .collect();
    ListLiteral::new(elements)
}

fn parse_boolean_literal(source: &[u8], node: &Node) -> BooleanLiteral {
    // a boolean literal has one (unnamed) child, 'true' or 'false'
    let child = node.child(0).unwrap();
    match child.utf8_text(source).unwrap() {
        "true" => BooleanLiteral::new(true),
        "false" => BooleanLiteral::new(false),
        _ => unreachable!("invalid boolead literal: {}", child.kind()),
    }
}
