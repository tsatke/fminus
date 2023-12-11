#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 27
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
  anon_sym_BSLASHref = 9,
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
  [anon_sym_BSLASHref] = "\\ref",
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
  [anon_sym_BSLASHref] = anon_sym_BSLASHref,
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
  [anon_sym_BSLASHref] = {
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
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 7,
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
  [37] = 33,
  [38] = 31,
  [39] = 39,
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
  [68] = 66,
  [69] = 64,
  [70] = 70,
  [71] = 71,
  [72] = 72,
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
      if (eof) ADVANCE(11);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('&' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 7:
      if (eof) ADVANCE(11);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('&' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(35);
      END_STATE();
    case 8:
      if (eof) ADVANCE(11);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(35);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == ']') ADVANCE(40);
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
          lookahead == '|') ADVANCE(35);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(35);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BSLASHref);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(22);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(30);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(35);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(16);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(15);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(32);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(33);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(34);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(25);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(27);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(26);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
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
    [anon_sym_BSLASHref] = ACTIONS(1),
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
    [sym_source_file] = STATE(91),
    [sym_block] = STATE(36),
    [sym_statement] = STATE(5),
    [sym_if_statement] = STATE(43),
    [sym_declaration] = STATE(90),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(70),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [2] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(55),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_COLON_EQ] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(21),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [3] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(55),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(21),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [4] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(4),
    [sym_if_statement] = STATE(43),
    [sym_declaration] = STATE(90),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(80),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(34),
    [anon_sym_BSLASH] = ACTIONS(37),
    [anon_sym_BSLASHref] = ACTIONS(40),
    [sym_identifier] = ACTIONS(43),
    [sym_number_literal] = ACTIONS(46),
    [sym_string_literal] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
  },
  [5] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(4),
    [sym_if_statement] = STATE(43),
    [sym_declaration] = STATE(90),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(67),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [6] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(10),
    [sym_if_statement] = STATE(43),
    [sym_declaration] = STATE(90),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(64),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [7] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(4),
    [sym_if_statement] = STATE(43),
    [sym_declaration] = STATE(90),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(68),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [8] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(7),
    [sym_if_statement] = STATE(43),
    [sym_declaration] = STATE(90),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(69),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [9] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(10),
    [sym_if_statement] = STATE(43),
    [sym_declaration] = STATE(90),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(60),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [10] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(4),
    [sym_if_statement] = STATE(43),
    [sym_declaration] = STATE(90),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(66),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [11] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(61),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [12] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(62),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [13] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(62),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [14] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(62),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [15] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(62),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [16] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(63),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [17] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(79),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [18] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(47),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [19] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(72),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [20] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(58),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [21] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(48),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [22] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(54),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [23] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(75),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [24] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(41),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [25] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(62),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
  [26] = {
    [sym_block] = STATE(36),
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(53),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASHref] = ACTIONS(11),
    [sym_identifier] = ACTIONS(67),
    [sym_number_literal] = ACTIONS(15),
    [sym_string_literal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(83), 5,
      anon_sym_if,
      anon_sym_BSLASH,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASHref,
      sym_number_literal,
      sym_string_literal,
      anon_sym_LBRACK,
  [17] = 4,
    ACTIONS(87), 1,
      anon_sym_else,
    STATE(29), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(89), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [35] = 4,
    ACTIONS(93), 1,
      anon_sym_else,
    STATE(30), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(95), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [53] = 4,
    ACTIONS(99), 1,
      anon_sym_else,
    STATE(30), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(102), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [71] = 2,
    ACTIONS(106), 3,
      anon_sym_else,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [84] = 2,
    ACTIONS(110), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [97] = 2,
    ACTIONS(114), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [110] = 2,
    ACTIONS(118), 3,
      anon_sym_else,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [123] = 3,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [138] = 3,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [153] = 2,
    ACTIONS(114), 3,
      anon_sym_else,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [166] = 2,
    ACTIONS(106), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [179] = 3,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [194] = 2,
    ACTIONS(110), 3,
      anon_sym_else,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [207] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [221] = 2,
    ACTIONS(138), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [233] = 2,
    ACTIONS(27), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [245] = 2,
    ACTIONS(142), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [257] = 2,
    ACTIONS(146), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [269] = 2,
    ACTIONS(128), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [281] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [295] = 2,
    ACTIONS(152), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [307] = 2,
    ACTIONS(156), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [319] = 2,
    ACTIONS(160), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [331] = 2,
    ACTIONS(164), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [343] = 2,
    ACTIONS(168), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [355] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(170), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [369] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(172), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [383] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [397] = 2,
    ACTIONS(180), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [409] = 2,
    ACTIONS(122), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [421] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [435] = 2,
    ACTIONS(186), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [447] = 6,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_function_call_repeat1,
  [466] = 5,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_function_call_repeat1,
  [482] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(198), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [494] = 5,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_function_call_repeat1,
  [510] = 4,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [523] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(198), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [534] = 4,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
  [547] = 4,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [560] = 4,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
  [573] = 4,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [586] = 4,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [599] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_if,
    STATE(49), 1,
      sym_block,
  [609] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
  [619] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_if,
    STATE(51), 1,
      sym_block,
  [629] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_DASH_GT,
    STATE(74), 1,
      aux_sym_lambda_repeat1,
  [639] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_SEMI,
  [649] = 3,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_DASH_GT,
    STATE(74), 1,
      aux_sym_lambda_repeat1,
  [659] = 3,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_lambda_repeat1,
  [669] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_function_call_repeat1,
  [679] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
  [689] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [699] = 3,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_function_call_repeat1,
  [709] = 2,
    ACTIONS(224), 1,
      anon_sym_DASH_GT,
    ACTIONS(236), 1,
      sym_identifier,
  [716] = 2,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_DASH_GT,
  [723] = 1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [728] = 2,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_block,
  [735] = 2,
    ACTIONS(242), 1,
      anon_sym_DASH_GT,
    ACTIONS(244), 1,
      sym_identifier,
  [742] = 2,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_block,
  [749] = 1,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
  [753] = 1,
    ACTIONS(248), 1,
      sym_identifier,
  [757] = 1,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [761] = 1,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
  [765] = 1,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
  [769] = 1,
    ACTIONS(211), 1,
      anon_sym_if,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 17,
  [SMALL_STATE(29)] = 35,
  [SMALL_STATE(30)] = 53,
  [SMALL_STATE(31)] = 71,
  [SMALL_STATE(32)] = 84,
  [SMALL_STATE(33)] = 97,
  [SMALL_STATE(34)] = 110,
  [SMALL_STATE(35)] = 123,
  [SMALL_STATE(36)] = 138,
  [SMALL_STATE(37)] = 153,
  [SMALL_STATE(38)] = 166,
  [SMALL_STATE(39)] = 179,
  [SMALL_STATE(40)] = 194,
  [SMALL_STATE(41)] = 207,
  [SMALL_STATE(42)] = 221,
  [SMALL_STATE(43)] = 233,
  [SMALL_STATE(44)] = 245,
  [SMALL_STATE(45)] = 257,
  [SMALL_STATE(46)] = 269,
  [SMALL_STATE(47)] = 281,
  [SMALL_STATE(48)] = 295,
  [SMALL_STATE(49)] = 307,
  [SMALL_STATE(50)] = 319,
  [SMALL_STATE(51)] = 331,
  [SMALL_STATE(52)] = 343,
  [SMALL_STATE(53)] = 355,
  [SMALL_STATE(54)] = 369,
  [SMALL_STATE(55)] = 383,
  [SMALL_STATE(56)] = 397,
  [SMALL_STATE(57)] = 409,
  [SMALL_STATE(58)] = 421,
  [SMALL_STATE(59)] = 435,
  [SMALL_STATE(60)] = 447,
  [SMALL_STATE(61)] = 466,
  [SMALL_STATE(62)] = 482,
  [SMALL_STATE(63)] = 494,
  [SMALL_STATE(64)] = 510,
  [SMALL_STATE(65)] = 523,
  [SMALL_STATE(66)] = 534,
  [SMALL_STATE(67)] = 547,
  [SMALL_STATE(68)] = 560,
  [SMALL_STATE(69)] = 573,
  [SMALL_STATE(70)] = 586,
  [SMALL_STATE(71)] = 599,
  [SMALL_STATE(72)] = 609,
  [SMALL_STATE(73)] = 619,
  [SMALL_STATE(74)] = 629,
  [SMALL_STATE(75)] = 639,
  [SMALL_STATE(76)] = 649,
  [SMALL_STATE(77)] = 659,
  [SMALL_STATE(78)] = 669,
  [SMALL_STATE(79)] = 679,
  [SMALL_STATE(80)] = 689,
  [SMALL_STATE(81)] = 699,
  [SMALL_STATE(82)] = 709,
  [SMALL_STATE(83)] = 716,
  [SMALL_STATE(84)] = 723,
  [SMALL_STATE(85)] = 728,
  [SMALL_STATE(86)] = 735,
  [SMALL_STATE(87)] = 742,
  [SMALL_STATE(88)] = 749,
  [SMALL_STATE(89)] = 753,
  [SMALL_STATE(90)] = 757,
  [SMALL_STATE(91)] = 761,
  [SMALL_STATE(92)] = 765,
  [SMALL_STATE(93)] = 769,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(93),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 6),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_function_call, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_function_call, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_unary_function_call, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_unary_function_call, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(25),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(89),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [250] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
