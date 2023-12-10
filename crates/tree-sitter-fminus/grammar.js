module.exports = grammar({
    name: 'fminus',

    precedences: $ => [
        ['function_call', 'expression'],
        ['function_call', 'block'],
        ['prefix_function_call', 'infix_function_call', 'lambda'],
        ['lambda', 'expression'],
        ['source_file', 'expression'],
        // ['statement', 'expression'],
        ['expression', 'statement'],
    ],

    rules: {
        source_file: $ => prec('source_file', seq(
            repeat($.statement),
            optional($.expression),
        )),

        block: $ => prec('block', seq(
            '(',
            repeat($.statement),
            optional($.expression),
            ')'
        )),

        statement: $ => prec('statement', seq(
            choice(
                $.expression,
                $.declaration,
            ),
            ';',
        )),

        if_statement: $ => seq(
            'if',
            '(',
            $.expression,
            ')',
            $.block,
            repeat(seq(
                'else',
                'if',
                '(',
                $.expression,
                ')',
                $.block,
            )),
            optional(seq(
                'else',
                $.block,
            )),
        ),

        declaration: $ => seq(
            $.identifier,
            ':=',
            $.expression,
        ),

        assignment: $ => prec.right(seq(
            $.expression,
            '=',
            $.expression,
        )),

        expression: $ => prec.left('expression', choice(
            $.identifier,
            $.number_literal,
            $.string_literal,
            $.list_literal,
            $.boolean_literal,
            $.function_call,
            $.infix_function_call,
            $.prefix_unary_function_call,
            $.block,
            $.lambda,
            $.assignment,
            $.if_statement,
        )),

        lambda: $ => prec.right('lambda', seq(
            '\\',
            optional(
                seq(
                    $.identifier,
                    optional(repeat(seq(',', $.identifier))),
                    optional(','),
                ),
            ),
            '->',
            $.expression,
        )),

        function_call: $ => prec('function_call', seq(
            choice(
                $.identifier,
                $.block,
            ),
            '(',
            optional(
                seq(
                    $.expression,
                    optional(repeat(seq(',', $.expression))),
                    optional(','),
                ),
            ),
            ')',
        )),

        prefix_unary_function_call: $ => prec.right('prefix_function_call', seq(
            $.identifier,
            $.expression,
        )),

        infix_function_call: $ => prec.left('infix_function_call', seq(
            $.expression,
            $.identifier,
            $.expression,
        )),

        identifier: $ => /[a-zA-Z_!*=+\-/$.&|]+/,

        number_literal: $ => /\d+/,

        string_literal: $ => /'([^']|\\')*'/,

        list_literal: $ => seq(
            '[',
            optional(
                seq(
                    $.expression,
                    optional(repeat(seq(',', $.expression))),
                    optional(','),
                ),
            ),
            ']',
        ),

        boolean_literal: $ => choice('true', 'false'),
    }
});