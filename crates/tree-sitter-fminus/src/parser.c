#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  anon_sym_COMMA = 9,
  anon_sym_DASH_GT = 10,
  sym_identifier = 11,
  sym_number_literal = 12,
  sym_string_literal = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  sym_source_file = 18,
  sym_block = 19,
  sym_statement = 20,
  sym_if_statement = 21,
  sym_declaration = 22,
  sym_assignment = 23,
  sym_expression = 24,
  sym_lambda = 25,
  sym_function_call = 26,
  sym_prefix_unary_function_call = 27,
  sym_infix_function_call = 28,
  sym_list_literal = 29,
  sym_boolean_literal = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_if_statement_repeat1 = 32,
  aux_sym_lambda_repeat1 = 33,
  aux_sym_function_call_repeat1 = 34,
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
      if (eof) ADVANCE(9);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('&' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 5:
      if (eof) ADVANCE(9);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('&' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(32);
      END_STATE();
    case 6:
      if (eof) ADVANCE(9);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(32);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(32);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(26);
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
          lookahead == '|') ADVANCE(32);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(19);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(27);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(32);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(14);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(13);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(29);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(30);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(31);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(22);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(24);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(23);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
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
    [sym_identifier] = ACTIONS(11),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
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
    [sym_if_statement] = STATE(43),
    [sym_assignment] = STATE(43),
    [sym_expression] = STATE(55),
    [sym_lambda] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_prefix_unary_function_call] = STATE(43),
    [sym_infix_function_call] = STATE(43),
    [sym_list_literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
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
    [ts_builtin_sym_end] = ACTIONS(50),
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
    [anon_sym_RPAREN] = ACTIONS(60),
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
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
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
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
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
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
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
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
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
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
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
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
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
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
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
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
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
    [sym_identifier] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(13),
    [sym_string_literal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
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
    STATE(29), 1,
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
    ACTIONS(90), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [52] = 4,
    ACTIONS(94), 1,
      anon_sym_else,
    STATE(30), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(97), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(92), 5,
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
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [137] = 3,
    ACTIONS(119), 1,
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
  [152] = 2,
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
  [165] = 2,
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
  [178] = 3,
    ACTIONS(107), 1,
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
  [193] = 2,
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
  [206] = 3,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [220] = 2,
    ACTIONS(133), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [232] = 2,
    ACTIONS(25), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [244] = 2,
    ACTIONS(137), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [256] = 2,
    ACTIONS(141), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(139), 5,
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
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [294] = 2,
    ACTIONS(147), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [306] = 2,
    ACTIONS(151), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [318] = 2,
    ACTIONS(155), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [330] = 2,
    ACTIONS(159), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [342] = 2,
    ACTIONS(163), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [354] = 3,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [368] = 3,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [382] = 3,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [396] = 2,
    ACTIONS(175), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [408] = 2,
    ACTIONS(117), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [420] = 3,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(177), 5,
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
  [446] = 6,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_function_call_repeat1,
  [465] = 5,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_function_call_repeat1,
  [481] = 3,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(193), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [493] = 5,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_function_call_repeat1,
  [509] = 4,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [522] = 3,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(193), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [533] = 4,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
  [546] = 4,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [559] = 4,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
  [572] = 4,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [585] = 4,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [598] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_if,
    STATE(49), 1,
      sym_block,
  [608] = 3,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
  [618] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      anon_sym_if,
    STATE(51), 1,
      sym_block,
  [628] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_DASH_GT,
    STATE(74), 1,
      aux_sym_lambda_repeat1,
  [638] = 3,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_SEMI,
  [648] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_DASH_GT,
    STATE(74), 1,
      aux_sym_lambda_repeat1,
  [658] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_DASH_GT,
    STATE(76), 1,
      aux_sym_lambda_repeat1,
  [668] = 3,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_function_call_repeat1,
  [678] = 3,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
  [688] = 3,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [698] = 3,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_function_call_repeat1,
  [708] = 2,
    ACTIONS(219), 1,
      anon_sym_DASH_GT,
    ACTIONS(231), 1,
      sym_identifier,
  [715] = 2,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_DASH_GT,
  [722] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [727] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_block,
  [734] = 2,
    ACTIONS(237), 1,
      anon_sym_DASH_GT,
    ACTIONS(239), 1,
      sym_identifier,
  [741] = 2,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_block,
  [748] = 1,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
  [752] = 1,
    ACTIONS(243), 1,
      sym_identifier,
  [756] = 1,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [760] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [764] = 1,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
  [768] = 1,
    ACTIONS(206), 1,
      anon_sym_if,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 16,
  [SMALL_STATE(29)] = 34,
  [SMALL_STATE(30)] = 52,
  [SMALL_STATE(31)] = 70,
  [SMALL_STATE(32)] = 83,
  [SMALL_STATE(33)] = 96,
  [SMALL_STATE(34)] = 109,
  [SMALL_STATE(35)] = 122,
  [SMALL_STATE(36)] = 137,
  [SMALL_STATE(37)] = 152,
  [SMALL_STATE(38)] = 165,
  [SMALL_STATE(39)] = 178,
  [SMALL_STATE(40)] = 193,
  [SMALL_STATE(41)] = 206,
  [SMALL_STATE(42)] = 220,
  [SMALL_STATE(43)] = 232,
  [SMALL_STATE(44)] = 244,
  [SMALL_STATE(45)] = 256,
  [SMALL_STATE(46)] = 268,
  [SMALL_STATE(47)] = 280,
  [SMALL_STATE(48)] = 294,
  [SMALL_STATE(49)] = 306,
  [SMALL_STATE(50)] = 318,
  [SMALL_STATE(51)] = 330,
  [SMALL_STATE(52)] = 342,
  [SMALL_STATE(53)] = 354,
  [SMALL_STATE(54)] = 368,
  [SMALL_STATE(55)] = 382,
  [SMALL_STATE(56)] = 396,
  [SMALL_STATE(57)] = 408,
  [SMALL_STATE(58)] = 420,
  [SMALL_STATE(59)] = 434,
  [SMALL_STATE(60)] = 446,
  [SMALL_STATE(61)] = 465,
  [SMALL_STATE(62)] = 481,
  [SMALL_STATE(63)] = 493,
  [SMALL_STATE(64)] = 509,
  [SMALL_STATE(65)] = 522,
  [SMALL_STATE(66)] = 533,
  [SMALL_STATE(67)] = 546,
  [SMALL_STATE(68)] = 559,
  [SMALL_STATE(69)] = 572,
  [SMALL_STATE(70)] = 585,
  [SMALL_STATE(71)] = 598,
  [SMALL_STATE(72)] = 608,
  [SMALL_STATE(73)] = 618,
  [SMALL_STATE(74)] = 628,
  [SMALL_STATE(75)] = 638,
  [SMALL_STATE(76)] = 648,
  [SMALL_STATE(77)] = 658,
  [SMALL_STATE(78)] = 668,
  [SMALL_STATE(79)] = 678,
  [SMALL_STATE(80)] = 688,
  [SMALL_STATE(81)] = 698,
  [SMALL_STATE(82)] = 708,
  [SMALL_STATE(83)] = 715,
  [SMALL_STATE(84)] = 722,
  [SMALL_STATE(85)] = 727,
  [SMALL_STATE(86)] = 734,
  [SMALL_STATE(87)] = 741,
  [SMALL_STATE(88)] = 748,
  [SMALL_STATE(89)] = 752,
  [SMALL_STATE(90)] = 756,
  [SMALL_STATE(91)] = 760,
  [SMALL_STATE(92)] = 764,
  [SMALL_STATE(93)] = 768,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(93),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 6),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 6),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_function_call, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_function_call, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_unary_function_call, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_unary_function_call, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(25),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(89),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [245] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
