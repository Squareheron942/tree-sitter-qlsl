#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
<<<<<<< HEAD
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
=======
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
>>>>>>> 535f5ea (Initial commit)
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_combinefunc = 2,
  anon_sym_COMMA = 3,
  sym_identifier = 4,
  sym_input = 5,
  sym_texture = 6,
  sym_gpu_input = 7,
  sym_line_comment = 8,
  sym_float = 9,
  sym_int = 10,
<<<<<<< HEAD
  anon_sym_alphatest = 11,
  anon_sym_constant = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_cull = 15,
  sym_cullface = 16,
  sym_hexcode = 17,
  sym_testfunc = 18,
  sym_writemask = 19,
  anon_sym_write = 20,
  anon_sym_depthtest = 21,
  anon_sym_normal = 22,
  sym_normalselector = 23,
  anon_sym_DOTversion = 24,
  sym_picaasm = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  aux_sym_picainclude_token1 = 28,
  sym_tcblock = 29,
  sym_program = 30,
  sym__item = 31,
  sym_tevsrc = 32,
  sym_combineinstr = 33,
  sym_instr = 34,
  sym_declaration = 35,
  sym_selectorinstr = 36,
  sym_number = 37,
  sym_alphatest = 38,
  sym_constant = 39,
  sym_color = 40,
  sym_cull = 41,
  sym_write = 42,
  sym_depthtest = 43,
  sym_normal = 44,
  sym_version = 45,
  sym_picablock = 46,
  sym_picainclude = 47,
  sym_section = 48,
  aux_sym_program_repeat1 = 49,
  aux_sym_program_repeat2 = 50,
  aux_sym_program_repeat3 = 51,
  aux_sym_combineinstr_repeat1 = 52,
  aux_sym_color_repeat1 = 53,
=======
  anon_sym_alpha = 11,
  anon_sym_constant = 12,
  aux_sym_color_token1 = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  sym_testfunc = 16,
  sym_writemask = 17,
  anon_sym_write = 18,
  anon_sym_depthtest = 19,
  anon_sym_normal = 20,
  sym_normalselector = 21,
  anon_sym_DOTversion = 22,
  sym_program = 23,
  sym__item = 24,
  sym_tevsrc = 25,
  sym_combineinstr = 26,
  sym_instr = 27,
  sym_declaration = 28,
  sym_selectorinstr = 29,
  sym_number = 30,
  sym_alphatest = 31,
  sym_constant = 32,
  sym_color = 33,
  sym_write = 34,
  sym_depthtest = 35,
  sym_normal = 36,
  sym_version = 37,
  aux_sym_program_repeat1 = 38,
  aux_sym_program_repeat2 = 39,
  aux_sym_combineinstr_repeat1 = 40,
  aux_sym_color_repeat1 = 41,
>>>>>>> 535f5ea (Initial commit)
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_combinefunc] = "combinefunc",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_input] = "input",
  [sym_texture] = "texture",
  [sym_gpu_input] = "gpu_input",
  [sym_line_comment] = "line_comment",
  [sym_float] = "float",
  [sym_int] = "int",
<<<<<<< HEAD
  [anon_sym_alphatest] = "alphatest",
  [anon_sym_constant] = "constant",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_cull] = "cull",
  [sym_cullface] = "cullface",
  [sym_hexcode] = "hexcode",
=======
  [anon_sym_alpha] = "alpha",
  [anon_sym_constant] = "constant",
  [aux_sym_color_token1] = "color_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
>>>>>>> 535f5ea (Initial commit)
  [sym_testfunc] = "testfunc",
  [sym_writemask] = "writemask",
  [anon_sym_write] = "write",
  [anon_sym_depthtest] = "depthtest",
  [anon_sym_normal] = "normal",
  [sym_normalselector] = "normalselector",
  [anon_sym_DOTversion] = ".version",
<<<<<<< HEAD
  [sym_picaasm] = "picaasm",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_picainclude_token1] = "picainclude_token1",
  [sym_tcblock] = "tcblock",
=======
>>>>>>> 535f5ea (Initial commit)
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_tevsrc] = "tevsrc",
  [sym_combineinstr] = "combineinstr",
  [sym_instr] = "instr",
  [sym_declaration] = "declaration",
  [sym_selectorinstr] = "selectorinstr",
  [sym_number] = "number",
  [sym_alphatest] = "alphatest",
  [sym_constant] = "constant",
  [sym_color] = "color",
<<<<<<< HEAD
  [sym_cull] = "cull",
=======
>>>>>>> 535f5ea (Initial commit)
  [sym_write] = "write",
  [sym_depthtest] = "depthtest",
  [sym_normal] = "normal",
  [sym_version] = "version",
<<<<<<< HEAD
  [sym_picablock] = "picablock",
  [sym_picainclude] = "picainclude",
  [sym_section] = "section",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_program_repeat3] = "program_repeat3",
=======
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
>>>>>>> 535f5ea (Initial commit)
  [aux_sym_combineinstr_repeat1] = "combineinstr_repeat1",
  [aux_sym_color_repeat1] = "color_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_combinefunc] = sym_combinefunc,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [sym_input] = sym_input,
  [sym_texture] = sym_texture,
  [sym_gpu_input] = sym_gpu_input,
  [sym_line_comment] = sym_line_comment,
  [sym_float] = sym_float,
  [sym_int] = sym_int,
<<<<<<< HEAD
  [anon_sym_alphatest] = anon_sym_alphatest,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_cull] = anon_sym_cull,
  [sym_cullface] = sym_cullface,
  [sym_hexcode] = sym_hexcode,
=======
  [anon_sym_alpha] = anon_sym_alpha,
  [anon_sym_constant] = anon_sym_constant,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
>>>>>>> 535f5ea (Initial commit)
  [sym_testfunc] = sym_testfunc,
  [sym_writemask] = sym_writemask,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_depthtest] = anon_sym_depthtest,
  [anon_sym_normal] = anon_sym_normal,
  [sym_normalselector] = sym_normalselector,
  [anon_sym_DOTversion] = anon_sym_DOTversion,
<<<<<<< HEAD
  [sym_picaasm] = sym_picaasm,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_picainclude_token1] = aux_sym_picainclude_token1,
  [sym_tcblock] = sym_tcblock,
=======
>>>>>>> 535f5ea (Initial commit)
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_tevsrc] = sym_tevsrc,
  [sym_combineinstr] = sym_combineinstr,
  [sym_instr] = sym_instr,
  [sym_declaration] = sym_declaration,
  [sym_selectorinstr] = sym_selectorinstr,
  [sym_number] = sym_number,
  [sym_alphatest] = sym_alphatest,
  [sym_constant] = sym_constant,
  [sym_color] = sym_color,
<<<<<<< HEAD
  [sym_cull] = sym_cull,
=======
>>>>>>> 535f5ea (Initial commit)
  [sym_write] = sym_write,
  [sym_depthtest] = sym_depthtest,
  [sym_normal] = sym_normal,
  [sym_version] = sym_version,
<<<<<<< HEAD
  [sym_picablock] = sym_picablock,
  [sym_picainclude] = sym_picainclude,
  [sym_section] = sym_section,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_program_repeat3] = aux_sym_program_repeat3,
=======
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
>>>>>>> 535f5ea (Initial commit)
  [aux_sym_combineinstr_repeat1] = aux_sym_combineinstr_repeat1,
  [aux_sym_color_repeat1] = aux_sym_color_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_combinefunc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
    .named = true,
  },
  [sym_texture] = {
    .visible = true,
    .named = true,
  },
  [sym_gpu_input] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
<<<<<<< HEAD
  [anon_sym_alphatest] = {
=======
  [anon_sym_alpha] = {
>>>>>>> 535f5ea (Initial commit)
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
    .visible = true,
    .named = false,
  },
<<<<<<< HEAD
=======
  [aux_sym_color_token1] = {
    .visible = false,
    .named = false,
  },
>>>>>>> 535f5ea (Initial commit)
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
<<<<<<< HEAD
  [anon_sym_cull] = {
    .visible = true,
    .named = false,
  },
  [sym_cullface] = {
    .visible = true,
    .named = true,
  },
  [sym_hexcode] = {
    .visible = true,
    .named = true,
  },
=======
>>>>>>> 535f5ea (Initial commit)
  [sym_testfunc] = {
    .visible = true,
    .named = true,
  },
  [sym_writemask] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_depthtest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_normal] = {
    .visible = true,
    .named = false,
  },
  [sym_normalselector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTversion] = {
    .visible = true,
    .named = false,
  },
<<<<<<< HEAD
  [sym_picaasm] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_picainclude_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_tcblock] = {
    .visible = true,
    .named = true,
  },
=======
>>>>>>> 535f5ea (Initial commit)
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_tevsrc] = {
    .visible = true,
    .named = true,
  },
  [sym_combineinstr] = {
    .visible = true,
    .named = true,
  },
  [sym_instr] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_selectorinstr] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_alphatest] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
<<<<<<< HEAD
  [sym_cull] = {
    .visible = true,
    .named = true,
  },
=======
>>>>>>> 535f5ea (Initial commit)
  [sym_write] = {
    .visible = true,
    .named = true,
  },
  [sym_depthtest] = {
    .visible = true,
    .named = true,
  },
  [sym_normal] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
<<<<<<< HEAD
  [sym_picablock] = {
    .visible = true,
    .named = true,
  },
  [sym_picainclude] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
=======
>>>>>>> 535f5ea (Initial commit)
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
<<<<<<< HEAD
  [aux_sym_program_repeat3] = {
    .visible = false,
    .named = false,
  },
=======
>>>>>>> 535f5ea (Initial commit)
  [aux_sym_combineinstr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_kind = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
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
  [8] = 8,
  [9] = 9,
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
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
<<<<<<< HEAD
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
=======
>>>>>>> 535f5ea (Initial commit)
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
<<<<<<< HEAD
      if (eof) ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(260);
      if (lookahead == ',') ADVANCE(234);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'g') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(153);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead == '}') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 1:
      if (lookahead == '3') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(146);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(231);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(233);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(172);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(278);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(268);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 92:
      if (lookahead == 'k') ADVANCE(262);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(187);
=======
      if (eof) ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(245);
      if (lookahead == ',') ADVANCE(222);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'g') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '3') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(144);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(159);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(220);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'q') ADVANCE(194);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G')) ADVANCE(241);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(135);
>>>>>>> 535f5ea (Initial commit)
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 143:
<<<<<<< HEAD
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 150:
      if (lookahead == 'q') ADVANCE(204);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 209:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 210:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 212:
      if (lookahead == 'x') ADVANCE(221);
      END_STATE();
    case 213:
      if (lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(243);
      END_STATE();
    case 215:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 216:
      if (lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 217:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(154);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(173);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 218:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(218)
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 219:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(242);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 227:
      if (eof) ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(154);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 228:
      if (eof) ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(228)
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'g') ADVANCE(167);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_combinefunc);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_combinefunc);
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_combinefunc);
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(238);
=======
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 147:
      if (lookahead == 'q') ADVANCE(194);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 198:
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 199:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 200:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 201:
      if (lookahead == 'x') ADVANCE(209);
      END_STATE();
    case 202:
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 203:
      if (lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 204:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 206:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(245);
      if (lookahead == ',') ADVANCE(222);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'g') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 207:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead == ';') ADVANCE(233);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(230);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G')) ADVANCE(241);
      END_STATE();
    case 214:
      if (eof) ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(214)
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 215:
      if (eof) ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(215)
      if (lookahead == '\n') ADVANCE(217);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'g') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_combinefunc);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_combinefunc);
      if (lookahead == '_') ADVANCE(113);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_combinefunc);
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(226);
>>>>>>> 535f5ea (Initial commit)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
<<<<<<< HEAD
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
=======
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(225);
>>>>>>> 535f5ea (Initial commit)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
<<<<<<< HEAD
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(238);
=======
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(226);
>>>>>>> 535f5ea (Initial commit)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
<<<<<<< HEAD
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 239:
=======
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 227:
>>>>>>> 535f5ea (Initial commit)
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
<<<<<<< HEAD
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_input);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_input);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_texture);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_gpu_input);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_gpu_input);
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(275);
      if (!eof && (0 <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 127) ADVANCE(245);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'h') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_alphatest);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_cull);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_cullface);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_hexcode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_testfunc);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_testfunc);
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_writemask);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_writemask);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_writemask);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_depthtest);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_normalselector);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DOTversion);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_picaasm);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == ';') ADVANCE(245);
      if (!eof && (0 <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 127) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_picaasm);
      if (!eof && (0 <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 127) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_picainclude_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_tcblock);
      END_STATE();
=======
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_input);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_input);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_texture);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_gpu_input);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_gpu_input);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_alpha);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'G')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_testfunc);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_testfunc);
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_writemask);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_writemask);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_depthtest);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_normalselector);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DOTversion);
      END_STATE();
>>>>>>> 535f5ea (Initial commit)
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
<<<<<<< HEAD
  [1] = {.lex_state = 227},
  [2] = {.lex_state = 227},
  [3] = {.lex_state = 227},
  [4] = {.lex_state = 227},
  [5] = {.lex_state = 227},
  [6] = {.lex_state = 227},
  [7] = {.lex_state = 227},
  [8] = {.lex_state = 227},
  [9] = {.lex_state = 227},
  [10] = {.lex_state = 227},
  [11] = {.lex_state = 227},
  [12] = {.lex_state = 227},
  [13] = {.lex_state = 227},
  [14] = {.lex_state = 227},
  [15] = {.lex_state = 227},
  [16] = {.lex_state = 227},
  [17] = {.lex_state = 227},
  [18] = {.lex_state = 227},
  [19] = {.lex_state = 227},
  [20] = {.lex_state = 227},
  [21] = {.lex_state = 227},
  [22] = {.lex_state = 227},
  [23] = {.lex_state = 227},
  [24] = {.lex_state = 227},
  [25] = {.lex_state = 227},
  [26] = {.lex_state = 227},
  [27] = {.lex_state = 227},
  [28] = {.lex_state = 227},
  [29] = {.lex_state = 227},
  [30] = {.lex_state = 227},
  [31] = {.lex_state = 227},
  [32] = {.lex_state = 228},
  [33] = {.lex_state = 228},
  [34] = {.lex_state = 228},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 228},
  [56] = {.lex_state = 218},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 220},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 228},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 274},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 228},
  [92] = {.lex_state = 0},
=======
  [1] = {.lex_state = 214},
  [2] = {.lex_state = 214},
  [3] = {.lex_state = 214},
  [4] = {.lex_state = 214},
  [5] = {.lex_state = 214},
  [6] = {.lex_state = 215},
  [7] = {.lex_state = 215},
  [8] = {.lex_state = 215},
  [9] = {.lex_state = 214},
  [10] = {.lex_state = 214},
  [11] = {.lex_state = 214},
  [12] = {.lex_state = 214},
  [13] = {.lex_state = 214},
  [14] = {.lex_state = 214},
  [15] = {.lex_state = 214},
  [16] = {.lex_state = 214},
  [17] = {.lex_state = 214},
  [18] = {.lex_state = 214},
  [19] = {.lex_state = 215},
  [20] = {.lex_state = 214},
  [21] = {.lex_state = 214},
  [22] = {.lex_state = 214},
  [23] = {.lex_state = 214},
  [24] = {.lex_state = 214},
  [25] = {.lex_state = 214},
  [26] = {.lex_state = 214},
  [27] = {.lex_state = 214},
  [28] = {.lex_state = 214},
  [29] = {.lex_state = 214},
  [30] = {.lex_state = 214},
  [31] = {.lex_state = 214},
  [32] = {.lex_state = 214},
  [33] = {.lex_state = 214},
  [34] = {.lex_state = 214},
  [35] = {.lex_state = 214},
  [36] = {.lex_state = 214},
  [37] = {.lex_state = 214},
  [38] = {.lex_state = 214},
  [39] = {.lex_state = 214},
  [40] = {.lex_state = 214},
  [41] = {.lex_state = 208},
  [42] = {.lex_state = 214},
  [43] = {.lex_state = 214},
  [44] = {.lex_state = 214},
  [45] = {.lex_state = 214},
  [46] = {.lex_state = 214},
  [47] = {.lex_state = 214},
  [48] = {.lex_state = 214},
  [49] = {.lex_state = 214},
  [50] = {.lex_state = 214},
  [51] = {.lex_state = 214},
  [52] = {.lex_state = 215},
>>>>>>> 535f5ea (Initial commit)
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_combinefunc] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
<<<<<<< HEAD
=======
    [sym_input] = ACTIONS(1),
>>>>>>> 535f5ea (Initial commit)
    [sym_texture] = ACTIONS(1),
    [sym_gpu_input] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
<<<<<<< HEAD
    [anon_sym_alphatest] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_cull] = ACTIONS(1),
    [sym_cullface] = ACTIONS(1),
    [sym_hexcode] = ACTIONS(1),
=======
    [anon_sym_alpha] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
>>>>>>> 535f5ea (Initial commit)
    [sym_testfunc] = ACTIONS(1),
    [sym_writemask] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_depthtest] = ACTIONS(1),
    [anon_sym_normal] = ACTIONS(1),
    [sym_normalselector] = ACTIONS(1),
    [anon_sym_DOTversion] = ACTIONS(1),
<<<<<<< HEAD
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(92),
    [sym__item] = STATE(42),
    [sym_combineinstr] = STATE(68),
    [sym_instr] = STATE(42),
    [sym_declaration] = STATE(42),
    [sym_selectorinstr] = STATE(68),
    [sym_alphatest] = STATE(71),
    [sym_constant] = STATE(72),
    [sym_cull] = STATE(71),
    [sym_write] = STATE(71),
    [sym_depthtest] = STATE(71),
    [sym_normal] = STATE(71),
    [sym_version] = STATE(7),
    [sym_picainclude] = STATE(29),
    [sym_section] = STATE(12),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_combinefunc] = ACTIONS(9),
    [sym_texture] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_alphatest] = ACTIONS(13),
    [anon_sym_constant] = ACTIONS(15),
    [anon_sym_cull] = ACTIONS(17),
    [anon_sym_write] = ACTIONS(19),
    [anon_sym_depthtest] = ACTIONS(21),
    [anon_sym_normal] = ACTIONS(23),
    [anon_sym_DOTversion] = ACTIONS(25),
    [aux_sym_picainclude_token1] = ACTIONS(27),
    [sym_tcblock] = ACTIONS(29),
=======
  },
  [1] = {
    [sym_program] = STATE(47),
    [sym__item] = STATE(10),
    [sym_combineinstr] = STATE(43),
    [sym_instr] = STATE(10),
    [sym_declaration] = STATE(10),
    [sym_selectorinstr] = STATE(43),
    [sym_alphatest] = STATE(28),
    [sym_constant] = STATE(29),
    [sym_write] = STATE(28),
    [sym_depthtest] = STATE(28),
    [sym_normal] = STATE(28),
    [sym_version] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_combinefunc] = ACTIONS(7),
    [sym_texture] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(11),
    [anon_sym_alpha] = ACTIONS(13),
    [anon_sym_constant] = ACTIONS(15),
    [anon_sym_write] = ACTIONS(17),
    [anon_sym_depthtest] = ACTIONS(19),
    [anon_sym_normal] = ACTIONS(21),
    [anon_sym_DOTversion] = ACTIONS(23),
  },
  [2] = {
    [sym__item] = STATE(34),
    [sym_combineinstr] = STATE(43),
    [sym_instr] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym_selectorinstr] = STATE(43),
    [sym_alphatest] = STATE(28),
    [sym_constant] = STATE(29),
    [sym_write] = STATE(28),
    [sym_depthtest] = STATE(28),
    [sym_normal] = STATE(28),
    [sym_version] = STATE(34),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [sym_combinefunc] = ACTIONS(7),
    [sym_texture] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(11),
    [anon_sym_alpha] = ACTIONS(13),
    [anon_sym_constant] = ACTIONS(15),
    [anon_sym_write] = ACTIONS(17),
    [anon_sym_depthtest] = ACTIONS(19),
    [anon_sym_normal] = ACTIONS(21),
    [anon_sym_DOTversion] = ACTIONS(23),
  },
  [3] = {
    [sym__item] = STATE(34),
    [sym_combineinstr] = STATE(43),
    [sym_instr] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym_selectorinstr] = STATE(43),
    [sym_alphatest] = STATE(28),
    [sym_constant] = STATE(29),
    [sym_write] = STATE(28),
    [sym_depthtest] = STATE(28),
    [sym_normal] = STATE(28),
    [sym_version] = STATE(34),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(27),
    [sym_combinefunc] = ACTIONS(7),
    [sym_texture] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(11),
    [anon_sym_alpha] = ACTIONS(13),
    [anon_sym_constant] = ACTIONS(15),
    [anon_sym_write] = ACTIONS(17),
    [anon_sym_depthtest] = ACTIONS(19),
    [anon_sym_normal] = ACTIONS(21),
    [anon_sym_DOTversion] = ACTIONS(23),
  },
  [4] = {
    [sym__item] = STATE(34),
    [sym_combineinstr] = STATE(43),
    [sym_instr] = STATE(34),
    [sym_declaration] = STATE(34),
    [sym_selectorinstr] = STATE(43),
    [sym_alphatest] = STATE(28),
    [sym_constant] = STATE(29),
    [sym_write] = STATE(28),
    [sym_depthtest] = STATE(28),
    [sym_normal] = STATE(28),
    [sym_version] = STATE(34),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(27),
    [sym_combinefunc] = ACTIONS(7),
    [sym_texture] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(11),
    [anon_sym_alpha] = ACTIONS(13),
    [anon_sym_constant] = ACTIONS(15),
    [anon_sym_write] = ACTIONS(17),
    [anon_sym_depthtest] = ACTIONS(19),
    [anon_sym_normal] = ACTIONS(21),
    [anon_sym_DOTversion] = ACTIONS(23),
>>>>>>> 535f5ea (Initial commit)
  },
};

static const uint16_t ts_small_parse_table[] = {
<<<<<<< HEAD
  [0] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(27), 1,
      aux_sym_picainclude_token1,
    ACTIONS(29), 1,
      sym_tcblock,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(26), 1,
      sym_section,
    STATE(29), 1,
      sym_picainclude,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(43), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [68] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(27), 1,
      aux_sym_picainclude_token1,
    ACTIONS(29), 1,
      sym_tcblock,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(26), 1,
      sym_section,
    STATE(29), 1,
      sym_picainclude,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(52), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [136] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(27), 1,
      aux_sym_picainclude_token1,
    ACTIONS(29), 1,
      sym_tcblock,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(26), 1,
      sym_section,
    STATE(29), 1,
      sym_picainclude,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(50), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [204] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(27), 1,
      aux_sym_picainclude_token1,
    ACTIONS(29), 1,
      sym_tcblock,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_section,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(29), 1,
      sym_picainclude,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(45), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [272] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(27), 1,
      aux_sym_picainclude_token1,
    ACTIONS(29), 1,
      sym_tcblock,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(26), 1,
      sym_section,
    STATE(29), 1,
      sym_picainclude,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(40), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [340] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(27), 1,
      aux_sym_picainclude_token1,
    ACTIONS(29), 1,
      sym_tcblock,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(9), 1,
      sym_section,
    STATE(29), 1,
      sym_picainclude,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(45), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [408] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(27), 1,
      aux_sym_picainclude_token1,
    ACTIONS(29), 1,
      sym_tcblock,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_section,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(29), 1,
      sym_picainclude,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(52), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [476] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      aux_sym_program_repeat2,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(52), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [535] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(24), 1,
      aux_sym_program_repeat2,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(43), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [594] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(24), 1,
      aux_sym_program_repeat2,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(52), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [653] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(11), 1,
      aux_sym_program_repeat2,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(45), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [712] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(10), 1,
      aux_sym_program_repeat2,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(50), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [771] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(24), 1,
      aux_sym_program_repeat2,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(50), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [830] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(79), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [886] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(79), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [942] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(79), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [998] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(79), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [1054] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(79), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [1110] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(79), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [1166] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(33), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(79), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [1222] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_constant,
    ACTIONS(17), 1,
      anon_sym_cull,
    ACTIONS(19), 1,
      anon_sym_write,
    ACTIONS(21), 1,
      anon_sym_depthtest,
    ACTIONS(23), 1,
      anon_sym_normal,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(72), 1,
      sym_constant,
    STATE(68), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(79), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(71), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [1275] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    ACTIONS(64), 2,
      aux_sym_picainclude_token1,
      sym_tcblock,
    ACTIONS(59), 9,
      ts_builtin_sym_end,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_constant,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1300] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(68), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_program_repeat2,
    STATE(31), 1,
      aux_sym_program_repeat1,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_constant,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1324] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 2,
      aux_sym_picainclude_token1,
      sym_tcblock,
    ACTIONS(71), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_constant,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_constant,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1360] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_constant,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1376] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_constant,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_constant,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_constant,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1424] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      aux_sym_picainclude_token1,
    ACTIONS(29), 1,
      sym_tcblock,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(26), 1,
      sym_section,
    STATE(29), 1,
      sym_picainclude,
  [1446] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(49), 1,
      sym_tevsrc,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(83), 2,
      sym_texture,
      sym_gpu_input,
  [1461] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(61), 1,
      sym_tevsrc,
    ACTIONS(83), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1476] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(61), 1,
      sym_tevsrc,
    ACTIONS(83), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1491] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1501] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      sym_float,
    ACTIONS(93), 1,
      sym_int,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_number,
  [1517] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      sym_float,
    ACTIONS(93), 1,
      sym_int,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_number,
  [1533] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1549] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1563] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_program_repeat1,
    STATE(38), 1,
      aux_sym_program_repeat3,
  [1579] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1595] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym_program_repeat1,
    STATE(44), 1,
      aux_sym_program_repeat3,
  [1611] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_program_repeat1,
    STATE(41), 1,
      aux_sym_program_repeat3,
  [1627] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_LF,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1643] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_LF,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(54), 1,
      aux_sym_program_repeat3,
  [1659] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1673] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1689] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1705] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1719] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_program_repeat1,
    STATE(47), 1,
      aux_sym_program_repeat3,
  [1735] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      sym_float,
    ACTIONS(93), 1,
      sym_int,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_number,
  [1751] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_program_repeat1,
    STATE(48), 1,
      aux_sym_program_repeat3,
  [1767] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1783] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1799] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(61), 1,
      sym_tevsrc,
    ACTIONS(83), 2,
      sym_texture,
      sym_gpu_input,
  [1810] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_picablock,
  [1823] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_color_repeat1,
  [1836] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_color_repeat1,
  [1849] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1858] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_color_repeat1,
  [1871] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1880] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      sym_float,
    ACTIONS(93), 1,
      sym_int,
    STATE(66), 1,
      sym_number,
  [1893] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_hexcode,
    STATE(70), 1,
      sym_color,
  [1906] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      sym_float,
    ACTIONS(93), 1,
      sym_int,
    STATE(76), 1,
      sym_number,
  [1919] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1927] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1935] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1943] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1951] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1959] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1975] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1983] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1999] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2015] = 3,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_input,
    ACTIONS(178), 1,
      sym_line_comment,
  [2025] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2033] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2041] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2049] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2057] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2065] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      sym_normalselector,
  [2072] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 1,
      sym_writemask,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_testfunc,
  [2086] = 2,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(194), 1,
      sym_picaasm,
  [2093] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_cullface,
  [2100] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_COMMA,
  [2107] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
  [2114] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 1,
      sym_texture,
  [2121] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      sym_int,
  [2128] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 272,
  [SMALL_STATE(7)] = 340,
  [SMALL_STATE(8)] = 408,
  [SMALL_STATE(9)] = 476,
  [SMALL_STATE(10)] = 535,
  [SMALL_STATE(11)] = 594,
  [SMALL_STATE(12)] = 653,
  [SMALL_STATE(13)] = 712,
  [SMALL_STATE(14)] = 771,
  [SMALL_STATE(15)] = 830,
  [SMALL_STATE(16)] = 886,
  [SMALL_STATE(17)] = 942,
  [SMALL_STATE(18)] = 998,
  [SMALL_STATE(19)] = 1054,
  [SMALL_STATE(20)] = 1110,
  [SMALL_STATE(21)] = 1166,
  [SMALL_STATE(22)] = 1222,
  [SMALL_STATE(23)] = 1275,
  [SMALL_STATE(24)] = 1300,
  [SMALL_STATE(25)] = 1324,
  [SMALL_STATE(26)] = 1344,
  [SMALL_STATE(27)] = 1360,
  [SMALL_STATE(28)] = 1376,
  [SMALL_STATE(29)] = 1392,
  [SMALL_STATE(30)] = 1408,
  [SMALL_STATE(31)] = 1424,
  [SMALL_STATE(32)] = 1446,
  [SMALL_STATE(33)] = 1461,
  [SMALL_STATE(34)] = 1476,
  [SMALL_STATE(35)] = 1491,
  [SMALL_STATE(36)] = 1501,
  [SMALL_STATE(37)] = 1517,
  [SMALL_STATE(38)] = 1533,
  [SMALL_STATE(39)] = 1549,
  [SMALL_STATE(40)] = 1563,
  [SMALL_STATE(41)] = 1579,
  [SMALL_STATE(42)] = 1595,
  [SMALL_STATE(43)] = 1611,
  [SMALL_STATE(44)] = 1627,
  [SMALL_STATE(45)] = 1643,
  [SMALL_STATE(46)] = 1659,
  [SMALL_STATE(47)] = 1673,
  [SMALL_STATE(48)] = 1689,
  [SMALL_STATE(49)] = 1705,
  [SMALL_STATE(50)] = 1719,
  [SMALL_STATE(51)] = 1735,
  [SMALL_STATE(52)] = 1751,
  [SMALL_STATE(53)] = 1767,
  [SMALL_STATE(54)] = 1783,
  [SMALL_STATE(55)] = 1799,
  [SMALL_STATE(56)] = 1810,
  [SMALL_STATE(57)] = 1823,
  [SMALL_STATE(58)] = 1836,
  [SMALL_STATE(59)] = 1849,
  [SMALL_STATE(60)] = 1858,
  [SMALL_STATE(61)] = 1871,
  [SMALL_STATE(62)] = 1880,
  [SMALL_STATE(63)] = 1893,
  [SMALL_STATE(64)] = 1906,
  [SMALL_STATE(65)] = 1919,
  [SMALL_STATE(66)] = 1927,
  [SMALL_STATE(67)] = 1935,
  [SMALL_STATE(68)] = 1943,
  [SMALL_STATE(69)] = 1951,
  [SMALL_STATE(70)] = 1959,
  [SMALL_STATE(71)] = 1967,
  [SMALL_STATE(72)] = 1975,
  [SMALL_STATE(73)] = 1983,
  [SMALL_STATE(74)] = 1991,
  [SMALL_STATE(75)] = 1999,
  [SMALL_STATE(76)] = 2007,
  [SMALL_STATE(77)] = 2015,
  [SMALL_STATE(78)] = 2025,
  [SMALL_STATE(79)] = 2033,
  [SMALL_STATE(80)] = 2041,
  [SMALL_STATE(81)] = 2049,
  [SMALL_STATE(82)] = 2057,
  [SMALL_STATE(83)] = 2065,
  [SMALL_STATE(84)] = 2072,
  [SMALL_STATE(85)] = 2079,
  [SMALL_STATE(86)] = 2086,
  [SMALL_STATE(87)] = 2093,
  [SMALL_STATE(88)] = 2100,
  [SMALL_STATE(89)] = 2107,
  [SMALL_STATE(90)] = 2114,
  [SMALL_STATE(91)] = 2121,
  [SMALL_STATE(92)] = 2128,
=======
  [0] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_program_repeat1,
    ACTIONS(31), 9,
      ts_builtin_sym_end,
      sym_combinefunc,
      sym_texture,
      anon_sym_alpha,
      anon_sym_constant,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
      anon_sym_DOTversion,
  [21] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    STATE(13), 1,
      sym_tevsrc,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(38), 2,
      sym_texture,
      sym_gpu_input,
  [36] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_tevsrc,
    ACTIONS(38), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [51] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_tevsrc,
    ACTIONS(38), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [66] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [80] = 5,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(12), 1,
      aux_sym_program_repeat2,
  [96] = 5,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_int,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_number,
  [112] = 5,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(15), 1,
      aux_sym_program_repeat2,
  [128] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [142] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [152] = 5,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(15), 1,
      aux_sym_program_repeat2,
  [168] = 5,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_int,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_number,
  [184] = 5,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_int,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_number,
  [200] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [214] = 3,
    ACTIONS(11), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_tevsrc,
    ACTIONS(38), 2,
      sym_texture,
      sym_gpu_input,
  [225] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_color_repeat1,
  [238] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [247] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_int,
    STATE(33), 1,
      sym_number,
  [260] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [269] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_color_repeat1,
  [282] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_color_repeat1,
  [295] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      aux_sym_color_token1,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_color,
  [308] = 4,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_int,
    STATE(39), 1,
      sym_number,
  [321] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [329] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [337] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [345] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [353] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [361] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(85), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [369] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [377] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [385] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [393] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [401] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [409] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [417] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [425] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_input,
  [435] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [443] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [451] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [459] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [467] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      sym_int,
  [474] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [481] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      sym_normalselector,
  [488] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym_texture,
  [495] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(137), 1,
      sym_testfunc,
  [502] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_COMMA,
  [509] = 2,
    ACTIONS(11), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      sym_writemask,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 21,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 51,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 128,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 168,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 200,
  [SMALL_STATE(19)] = 214,
  [SMALL_STATE(20)] = 225,
  [SMALL_STATE(21)] = 238,
  [SMALL_STATE(22)] = 247,
  [SMALL_STATE(23)] = 260,
  [SMALL_STATE(24)] = 269,
  [SMALL_STATE(25)] = 282,
  [SMALL_STATE(26)] = 295,
  [SMALL_STATE(27)] = 308,
  [SMALL_STATE(28)] = 321,
  [SMALL_STATE(29)] = 329,
  [SMALL_STATE(30)] = 337,
  [SMALL_STATE(31)] = 345,
  [SMALL_STATE(32)] = 353,
  [SMALL_STATE(33)] = 361,
  [SMALL_STATE(34)] = 369,
  [SMALL_STATE(35)] = 377,
  [SMALL_STATE(36)] = 385,
  [SMALL_STATE(37)] = 393,
  [SMALL_STATE(38)] = 401,
  [SMALL_STATE(39)] = 409,
  [SMALL_STATE(40)] = 417,
  [SMALL_STATE(41)] = 425,
  [SMALL_STATE(42)] = 435,
  [SMALL_STATE(43)] = 443,
  [SMALL_STATE(44)] = 451,
  [SMALL_STATE(45)] = 459,
  [SMALL_STATE(46)] = 467,
  [SMALL_STATE(47)] = 474,
  [SMALL_STATE(48)] = 481,
  [SMALL_STATE(49)] = 488,
  [SMALL_STATE(50)] = 495,
  [SMALL_STATE(51)] = 502,
  [SMALL_STATE(52)] = 509,
>>>>>>> 535f5ea (Initial commit)
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
<<<<<<< HEAD
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 8),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(31),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picainclude, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picablock, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 4, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 3, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_combineinstr_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_combineinstr_repeat1, 2), SHIFT_REPEAT(55),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 2, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat3, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat3, 2), SHIFT_REPEAT(22),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(62),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tevsrc, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectorinstr, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cull, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_write, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphatest, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depthtest, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [206] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
=======
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 1, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 3, .production_id = 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 4, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_combineinstr_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_combineinstr_repeat1, 2), SHIFT_REPEAT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 2, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tevsrc, 1),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectorinstr, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depthtest, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_write, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphatest, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
>>>>>>> 535f5ea (Initial commit)
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_combiner(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
