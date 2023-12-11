#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 28
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_SEMI = 3,
  anon_sym_if = 4,
  anon_sym_else = 5,
  anon_sym_COLON_EQ = 6,
  anon_sym_EQ = 7,
  anon_sym_BSLASH = 8,
  anon_sym_ref = 9,
  anon_sym_COMMA = 10,
  anon_sym_DASH_GT = 11,
  sym_identifier = 12,
  sym_number_literal = 13,
  sym_string_literal = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  sym_source_file = 19,
  sym_block = 20,
  sym_statement = 21,
  sym_if_statement = 22,
  sym_declaration = 23,
  sym_assignment = 24,
  sym_expression = 25,
  sym_lambda = 26,
  sym_function_call = 27,
  sym_prefix_unary_function_call = 28,
  sym_infix_function_call = 29,
  sym_list_literal = 30,
  sym_boolean_literal = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_if_statement_repeat1 = 33,
  aux_sym_lambda_repeat1 = 34,
  aux_sym_function_call_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_EQ] = "=",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_ref] = "ref",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH_GT] = "->",
  [sym_identifier] = "identifier",
  [sym_number_literal] = "number_literal",
  [sym_string_literal] = "string_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_if_statement] = "if_statement",
  [sym_declaration] = "declaration",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym_lambda] = "lambda",
  [sym_function_call] = "function_call",
  [sym_prefix_unary_function_call] = "prefix_unary_function_call",
  [sym_infix_function_call] = "infix_function_call",
  [sym_list_literal] = "list_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_lambda_repeat1] = "lambda_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_identifier] = sym_identifier,
  [sym_number_literal] = sym_number_literal,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_declaration] = sym_declaration,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym_lambda] = sym_lambda,
  [sym_function_call] = sym_function_call,
  [sym_prefix_unary_function_call] = sym_prefix_unary_function_call,
  [sym_infix_function_call] = sym_infix_function_call,
  [sym_list_literal] = sym_list_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_lambda_repeat1] = aux_sym_lambda_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_unary_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lambda_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 33,
  [39] = 34,
  [40] = 32,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 66,
  [71] = 71,
  [72] = 69,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '='
    ? (c < '&'
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '&' || (c < '.'
        ? (c >= '*' && c <= '+')
        : c <= '/')))
    : (c <= '=' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < '='
    ? (c < '&'
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '+' || (c >= '-' && c <= '/')))
    : (c <= '=' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < '='
    ? (c < '&'
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '&' || (c < '-'
        ? (c >= '*' && c <= '+')
        : c <= '/')))
    : (c <= '=' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < '='
    ? (c < '&'
      ? (c < '$'
        ? c == '!'
        : c <= '$')
      : (c <= '&' || (c < '-'
        ? (c >= '*' && c <= '+')
        : c <= '/')))
    : (c <= '=' || (c < 'b'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('&' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 6:
      if (eof) ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('&' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(36);
      END_STATE();
    case 7:
      if (eof) ADVANCE(10);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(36);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(36);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(36);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_ref);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(21);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(31);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(36);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(15);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(14);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(19);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(33);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(34);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(35);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(24);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(26);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(25);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(96),
    [sym_block] = STATE(36),
    [sym_statement] = STATE(10),
    [sym_if_statement] = STATE(51),
    [sym_declaration] = STATE(95),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(71),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [2] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(55),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_COLON_EQ] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(19),
    [sym_identifier] = ACTIONS(25),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [3] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(55),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(19),
    [sym_identifier] = ACTIONS(25),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [4] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(4),
    [sym_if_statement] = STATE(51),
    [sym_declaration] = STATE(95),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(83),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(32),
    [anon_sym_BSLASH] = ACTIONS(35),
    [sym_identifier] = ACTIONS(38),
    [sym_number_literal] = ACTIONS(41),
    [sym_string_literal] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(44),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
  },
  [5] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(9),
    [sym_if_statement] = STATE(51),
    [sym_declaration] = STATE(95),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(69),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [6] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(4),
    [sym_if_statement] = STATE(51),
    [sym_declaration] = STATE(95),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(66),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [7] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(6),
    [sym_if_statement] = STATE(51),
    [sym_declaration] = STATE(95),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(72),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [8] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(9),
    [sym_if_statement] = STATE(51),
    [sym_declaration] = STATE(95),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(62),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [9] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(4),
    [sym_if_statement] = STATE(51),
    [sym_declaration] = STATE(95),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(70),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [10] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(4),
    [sym_if_statement] = STATE(51),
    [sym_declaration] = STATE(95),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(67),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [11] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(64),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [12] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(63),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [13] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(63),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [14] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(63),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [15] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(63),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [16] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(65),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [17] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(85),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [18] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(43),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [19] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(50),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [20] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(58),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [21] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(78),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [22] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(56),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [23] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(61),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [24] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(75),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [25] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(48),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [26] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(63),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [27] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(51),
    [sym_assignment] = STATE(51),
    [sym_expression] = STATE(49),
    [sym_lambda] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_prefix_unary_function_call] = STATE(51),
    [sym_infix_function_call] = STATE(51),
    [sym_list_literal] = STATE(51),
    [sym_boolean_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(78), 4,
      anon_sym_if,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym_number_literal,
      sym_string_literal,
      anon_sym_LBRACK,
  [16] = 4,
    ACTIONS(82), 1,
      anon_sym_else,
    STATE(30), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(84), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [34] = 4,
    ACTIONS(88), 1,
      anon_sym_else,
    STATE(30), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(91), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [52] = 4,
    ACTIONS(95), 1,
      anon_sym_else,
    STATE(29), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(97), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [70] = 2,
    ACTIONS(101), 3,
      anon_sym_else,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [83] = 2,
    ACTIONS(105), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [96] = 2,
    ACTIONS(109), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [109] = 2,
    ACTIONS(113), 3,
      anon_sym_else,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [122] = 3,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [137] = 3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [152] = 2,
    ACTIONS(105), 3,
      anon_sym_else,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [165] = 2,
    ACTIONS(109), 3,
      anon_sym_else,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [178] = 2,
    ACTIONS(101), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [191] = 3,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [206] = 2,
    ACTIONS(127), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [218] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [232] = 2,
    ACTIONS(137), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [244] = 2,
    ACTIONS(141), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [256] = 2,
    ACTIONS(145), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [268] = 2,
    ACTIONS(123), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [280] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [294] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [308] = 2,
    ACTIONS(153), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [320] = 2,
    ACTIONS(25), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [332] = 2,
    ACTIONS(157), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [344] = 2,
    ACTIONS(119), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [356] = 2,
    ACTIONS(161), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [368] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [382] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [396] = 2,
    ACTIONS(171), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [408] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [422] = 2,
    ACTIONS(177), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [434] = 2,
    ACTIONS(181), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [446] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [460] = 6,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_function_call_repeat1,
  [479] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(191), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [491] = 5,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_function_call_repeat1,
  [507] = 5,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_function_call_repeat1,
  [523] = 4,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
  [536] = 4,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [549] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(191), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [560] = 4,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_SEMI,
  [573] = 4,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [586] = 4,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_SEMI,
  [599] = 4,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_SEMI,
  [612] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_if,
    STATE(54), 1,
      sym_block,
  [622] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_DASH_GT,
    STATE(84), 1,
      aux_sym_lambda_repeat1,
  [632] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_SEMI,
  [642] = 3,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_function_call_repeat1,
  [652] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_if,
    STATE(59), 1,
      sym_block,
  [662] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
  [672] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_DASH_GT,
    STATE(74), 1,
      aux_sym_lambda_repeat1,
  [682] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_DASH_GT,
    STATE(86), 1,
      aux_sym_lambda_repeat1,
  [692] = 3,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_function_call_repeat1,
  [702] = 3,
    ACTIONS(230), 1,
      anon_sym_ref,
    ACTIONS(232), 1,
      anon_sym_DASH_GT,
    ACTIONS(234), 1,
      sym_identifier,
  [712] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_SEMI,
  [722] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_DASH_GT,
    STATE(84), 1,
      aux_sym_lambda_repeat1,
  [732] = 3,
    ACTIONS(131), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
  [742] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_DASH_GT,
    STATE(84), 1,
      aux_sym_lambda_repeat1,
  [752] = 1,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [757] = 2,
    ACTIONS(243), 1,
      anon_sym_DASH_GT,
    ACTIONS(245), 1,
      sym_identifier,
  [764] = 2,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_block,
  [771] = 2,
    ACTIONS(212), 1,
      anon_sym_DASH_GT,
    ACTIONS(245), 1,
      sym_identifier,
  [778] = 2,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_block,
  [785] = 2,
    ACTIONS(222), 1,
      anon_sym_DASH_GT,
    ACTIONS(245), 1,
      sym_identifier,
  [792] = 1,
    ACTIONS(208), 1,
      anon_sym_if,
  [796] = 1,
    ACTIONS(249), 1,
      sym_identifier,
  [800] = 1,
    ACTIONS(187), 1,
      anon_sym_SEMI,
  [804] = 1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
  [808] = 1,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
  [812] = 1,
    ACTIONS(255), 1,
      sym_identifier,
  [816] = 1,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(28)] = 0,
  [SMALL_STATE(29)] = 16,
  [SMALL_STATE(30)] = 34,
  [SMALL_STATE(31)] = 52,
  [SMALL_STATE(32)] = 70,
  [SMALL_STATE(33)] = 83,
  [SMALL_STATE(34)] = 96,
  [SMALL_STATE(35)] = 109,
  [SMALL_STATE(36)] = 122,
  [SMALL_STATE(37)] = 137,
  [SMALL_STATE(38)] = 152,
  [SMALL_STATE(39)] = 165,
  [SMALL_STATE(40)] = 178,
  [SMALL_STATE(41)] = 191,
  [SMALL_STATE(42)] = 206,
  [SMALL_STATE(43)] = 218,
  [SMALL_STATE(44)] = 232,
  [SMALL_STATE(45)] = 244,
  [SMALL_STATE(46)] = 256,
  [SMALL_STATE(47)] = 268,
  [SMALL_STATE(48)] = 280,
  [SMALL_STATE(49)] = 294,
  [SMALL_STATE(50)] = 308,
  [SMALL_STATE(51)] = 320,
  [SMALL_STATE(52)] = 332,
  [SMALL_STATE(53)] = 344,
  [SMALL_STATE(54)] = 356,
  [SMALL_STATE(55)] = 368,
  [SMALL_STATE(56)] = 382,
  [SMALL_STATE(57)] = 396,
  [SMALL_STATE(58)] = 408,
  [SMALL_STATE(59)] = 422,
  [SMALL_STATE(60)] = 434,
  [SMALL_STATE(61)] = 446,
  [SMALL_STATE(62)] = 460,
  [SMALL_STATE(63)] = 479,
  [SMALL_STATE(64)] = 491,
  [SMALL_STATE(65)] = 507,
  [SMALL_STATE(66)] = 523,
  [SMALL_STATE(67)] = 536,
  [SMALL_STATE(68)] = 549,
  [SMALL_STATE(69)] = 560,
  [SMALL_STATE(70)] = 573,
  [SMALL_STATE(71)] = 586,
  [SMALL_STATE(72)] = 599,
  [SMALL_STATE(73)] = 612,
  [SMALL_STATE(74)] = 622,
  [SMALL_STATE(75)] = 632,
  [SMALL_STATE(76)] = 642,
  [SMALL_STATE(77)] = 652,
  [SMALL_STATE(78)] = 662,
  [SMALL_STATE(79)] = 672,
  [SMALL_STATE(80)] = 682,
  [SMALL_STATE(81)] = 692,
  [SMALL_STATE(82)] = 702,
  [SMALL_STATE(83)] = 712,
  [SMALL_STATE(84)] = 722,
  [SMALL_STATE(85)] = 732,
  [SMALL_STATE(86)] = 742,
  [SMALL_STATE(87)] = 752,
  [SMALL_STATE(88)] = 757,
  [SMALL_STATE(89)] = 764,
  [SMALL_STATE(90)] = 771,
  [SMALL_STATE(91)] = 778,
  [SMALL_STATE(92)] = 785,
  [SMALL_STATE(93)] = 792,
  [SMALL_STATE(94)] = 796,
  [SMALL_STATE(95)] = 800,
  [SMALL_STATE(96)] = 804,
  [SMALL_STATE(97)] = 808,
  [SMALL_STATE(98)] = 812,
  [SMALL_STATE(99)] = 816,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(93),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 6),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 6),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_function_call, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_function_call, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_unary_function_call, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_unary_function_call, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(26),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(94),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [251] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fminus(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
