#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  sym_texenvmode = 24,
  sym_tevop = 25,
  anon_sym_DOTversion = 26,
  sym_picaasm = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  aux_sym_picainclude_token1 = 30,
  sym_tcblock = 31,
  sym_program = 32,
  sym__item = 33,
  sym_tevsrc = 34,
  sym_combineinstr = 35,
  sym_instr = 36,
  sym_declaration = 37,
  sym_selectorinstr = 38,
  sym_number = 39,
  sym_alphatest = 40,
  sym_constant = 41,
  sym_color = 42,
  sym_cull = 43,
  sym_write = 44,
  sym_depthtest = 45,
  sym_normal = 46,
  sym_version = 47,
  sym_picablock = 48,
  sym_picainclude = 49,
  sym_section = 50,
  aux_sym_program_repeat1 = 51,
  aux_sym_program_repeat2 = 52,
  aux_sym_program_repeat3 = 53,
  aux_sym_combineinstr_repeat1 = 54,
  aux_sym_color_repeat1 = 55,
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
  [anon_sym_alphatest] = "alphatest",
  [anon_sym_constant] = "constant",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_cull] = "cull",
  [sym_cullface] = "cullface",
  [sym_hexcode] = "hexcode",
  [sym_testfunc] = "testfunc",
  [sym_writemask] = "writemask",
  [anon_sym_write] = "write",
  [anon_sym_depthtest] = "depthtest",
  [anon_sym_normal] = "normal",
  [sym_normalselector] = "normalselector",
  [sym_texenvmode] = "texenvmode",
  [sym_tevop] = "tevop",
  [anon_sym_DOTversion] = ".version",
  [sym_picaasm] = "picaasm",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_picainclude_token1] = "picainclude_token1",
  [sym_tcblock] = "tcblock",
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
  [sym_cull] = "cull",
  [sym_write] = "write",
  [sym_depthtest] = "depthtest",
  [sym_normal] = "normal",
  [sym_version] = "version",
  [sym_picablock] = "picablock",
  [sym_picainclude] = "picainclude",
  [sym_section] = "section",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_program_repeat3] = "program_repeat3",
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
  [anon_sym_alphatest] = anon_sym_alphatest,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_cull] = anon_sym_cull,
  [sym_cullface] = sym_cullface,
  [sym_hexcode] = sym_hexcode,
  [sym_testfunc] = sym_testfunc,
  [sym_writemask] = sym_writemask,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_depthtest] = anon_sym_depthtest,
  [anon_sym_normal] = anon_sym_normal,
  [sym_normalselector] = sym_normalselector,
  [sym_texenvmode] = sym_texenvmode,
  [sym_tevop] = sym_tevop,
  [anon_sym_DOTversion] = anon_sym_DOTversion,
  [sym_picaasm] = sym_picaasm,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_picainclude_token1] = aux_sym_picainclude_token1,
  [sym_tcblock] = sym_tcblock,
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
  [sym_cull] = sym_cull,
  [sym_write] = sym_write,
  [sym_depthtest] = sym_depthtest,
  [sym_normal] = sym_normal,
  [sym_version] = sym_version,
  [sym_picablock] = sym_picablock,
  [sym_picainclude] = sym_picainclude,
  [sym_section] = sym_section,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_program_repeat3] = aux_sym_program_repeat3,
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
  [anon_sym_alphatest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
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
  [sym_texenvmode] = {
    .visible = true,
    .named = true,
  },
  [sym_tevop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTversion] = {
    .visible = true,
    .named = false,
  },
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
  [sym_cull] = {
    .visible = true,
    .named = true,
  },
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat3] = {
    .visible = false,
    .named = false,
  },
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == ')') ADVANCE(274);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'g') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(164);
      if (lookahead == '{') ADVANCE(296);
      if (lookahead == '}') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 1:
      if (lookahead == '3') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(288);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(245);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(291);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(247);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(185);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(280);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(282);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == 'v') ADVANCE(59);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(276);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 159:
      if (lookahead == 'q') ADVANCE(217);
      END_STATE();
    case 160:
      if (lookahead == 'q') ADVANCE(217);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 222:
      if (lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 223:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 224:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 225:
      if (lookahead == 'x') ADVANCE(235);
      END_STATE();
    case 226:
      if (lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 227:
      if (lookahead == 'y') ADVANCE(257);
      END_STATE();
    case 228:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 229:
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(165);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(231)
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == '{') ADVANCE(296);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead == ';') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead == ';') ADVANCE(262);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(234)
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'g') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(256);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 241:
      if (eof) ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'g') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(165);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 242:
      if (eof) ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(242)
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_combinefunc);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_combinefunc);
      if (lookahead == '_') ADVANCE(118);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_combinefunc);
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_input);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_input);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_texture);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_gpu_input);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_gpu_input);
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(295);
      if (!eof && (0 <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 127) ADVANCE(259);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'h') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_line_comment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_alphatest);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_cull);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_cullface);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_hexcode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_testfunc);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_testfunc);
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_writemask);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_writemask);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_writemask);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_depthtest);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_normalselector);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_texenvmode);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_texenvmode);
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_texenvmode);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_tevop);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_tevop);
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_tevop);
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DOTversion);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_picaasm);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead == ';') ADVANCE(259);
      if (!eof && (0 <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 127) ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_picaasm);
      if (!eof && (0 <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 127) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_picainclude_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_tcblock);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 241},
  [2] = {.lex_state = 241},
  [3] = {.lex_state = 241},
  [4] = {.lex_state = 241},
  [5] = {.lex_state = 241},
  [6] = {.lex_state = 241},
  [7] = {.lex_state = 241},
  [8] = {.lex_state = 241},
  [9] = {.lex_state = 241},
  [10] = {.lex_state = 241},
  [11] = {.lex_state = 241},
  [12] = {.lex_state = 241},
  [13] = {.lex_state = 241},
  [14] = {.lex_state = 241},
  [15] = {.lex_state = 241},
  [16] = {.lex_state = 241},
  [17] = {.lex_state = 241},
  [18] = {.lex_state = 241},
  [19] = {.lex_state = 241},
  [20] = {.lex_state = 241},
  [21] = {.lex_state = 241},
  [22] = {.lex_state = 241},
  [23] = {.lex_state = 241},
  [24] = {.lex_state = 241},
  [25] = {.lex_state = 241},
  [26] = {.lex_state = 241},
  [27] = {.lex_state = 241},
  [28] = {.lex_state = 241},
  [29] = {.lex_state = 241},
  [30] = {.lex_state = 241},
  [31] = {.lex_state = 241},
  [32] = {.lex_state = 242},
  [33] = {.lex_state = 242},
  [34] = {.lex_state = 242},
  [35] = {.lex_state = 242},
  [36] = {.lex_state = 242},
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
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 231},
  [61] = {.lex_state = 242},
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
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 233},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 234},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 242},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 294},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 241},
  [97] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_combinefunc] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_texture] = ACTIONS(1),
    [sym_gpu_input] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_alphatest] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_cull] = ACTIONS(1),
    [sym_cullface] = ACTIONS(1),
    [sym_hexcode] = ACTIONS(1),
    [sym_testfunc] = ACTIONS(1),
    [sym_writemask] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_depthtest] = ACTIONS(1),
    [anon_sym_normal] = ACTIONS(1),
    [sym_normalselector] = ACTIONS(1),
    [sym_texenvmode] = ACTIONS(1),
    [sym_tevop] = ACTIONS(1),
    [anon_sym_DOTversion] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(88),
    [sym__item] = STATE(54),
    [sym_combineinstr] = STATE(73),
    [sym_instr] = STATE(54),
    [sym_declaration] = STATE(54),
    [sym_selectorinstr] = STATE(73),
    [sym_alphatest] = STATE(72),
    [sym_constant] = STATE(76),
    [sym_cull] = STATE(72),
    [sym_write] = STATE(72),
    [sym_depthtest] = STATE(72),
    [sym_normal] = STATE(72),
    [sym_version] = STATE(2),
    [sym_picainclude] = STATE(28),
    [sym_section] = STATE(14),
    [aux_sym_program_repeat1] = STATE(8),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
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
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(10), 1,
      sym_section,
    STATE(28), 1,
      sym_picainclude,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(46), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(26), 1,
      sym_section,
    STATE(28), 1,
      sym_picainclude,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(58), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_section,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(28), 1,
      sym_picainclude,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(58), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(26), 1,
      sym_section,
    STATE(28), 1,
      sym_picainclude,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(42), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(26), 1,
      sym_section,
    STATE(28), 1,
      sym_picainclude,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(55), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(26), 1,
      sym_section,
    STATE(28), 1,
      sym_picainclude,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(50), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym_section,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(28), 1,
      sym_picainclude,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(46), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(24), 1,
      aux_sym_program_repeat2,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(58), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(11), 1,
      aux_sym_program_repeat2,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(58), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(24), 1,
      aux_sym_program_repeat2,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(55), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(24), 1,
      aux_sym_program_repeat2,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(50), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(12), 1,
      aux_sym_program_repeat2,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(55), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(9), 1,
      aux_sym_program_repeat2,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(46), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(85), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(85), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(85), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(85), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(85), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(85), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(85), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(76), 1,
      sym_constant,
    STATE(73), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(85), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(72), 5,
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
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(26), 1,
      sym_section,
    STATE(28), 1,
      sym_picainclude,
  [1446] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      sym_texenvmode,
    STATE(53), 1,
      sym_tevsrc,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(83), 2,
      sym_texture,
      sym_gpu_input,
  [1464] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(66), 1,
      sym_tevsrc,
    ACTIONS(83), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1479] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(66), 1,
      sym_tevsrc,
    ACTIONS(83), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1494] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(66), 1,
      sym_tevsrc,
    ACTIONS(83), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1509] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(48), 1,
      sym_tevsrc,
    ACTIONS(83), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1524] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1534] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      sym_float,
    ACTIONS(99), 1,
      sym_int,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_number,
  [1550] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      sym_float,
    ACTIONS(99), 1,
      sym_int,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_number,
  [1566] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      aux_sym_program_repeat3,
  [1582] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1596] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_program_repeat1,
    STATE(40), 1,
      aux_sym_program_repeat3,
  [1612] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      aux_sym_program_repeat3,
  [1628] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1642] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      aux_sym_program_repeat3,
  [1658] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_program_repeat1,
    STATE(57), 1,
      aux_sym_program_repeat3,
  [1674] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      aux_sym_program_repeat3,
  [1690] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1704] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1718] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_program_repeat1,
    STATE(43), 1,
      aux_sym_program_repeat3,
  [1734] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_tevop,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1746] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      aux_sym_program_repeat3,
  [1762] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1776] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_LF,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(45), 1,
      aux_sym_program_repeat3,
  [1792] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_program_repeat1,
    STATE(52), 1,
      aux_sym_program_repeat3,
  [1808] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      aux_sym_program_repeat3,
  [1824] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_program_repeat1,
    STATE(56), 1,
      aux_sym_program_repeat3,
  [1840] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_program_repeat1,
    STATE(47), 1,
      aux_sym_program_repeat3,
  [1856] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      sym_float,
    ACTIONS(99), 1,
      sym_int,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_number,
  [1872] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_picablock,
  [1885] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(66), 1,
      sym_tevsrc,
    ACTIONS(83), 2,
      sym_texture,
      sym_gpu_input,
  [1896] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_color_repeat1,
  [1909] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_color_repeat1,
  [1922] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1931] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      sym_float,
    ACTIONS(99), 1,
      sym_int,
    STATE(83), 1,
      sym_number,
  [1944] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1953] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      sym_hexcode,
    STATE(75), 1,
      sym_color,
  [1966] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      sym_float,
    ACTIONS(99), 1,
      sym_int,
    STATE(81), 1,
      sym_number,
  [1979] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_color_repeat1,
  [1992] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2000] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2008] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2016] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2024] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2032] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2040] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2048] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2056] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2064] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2072] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2080] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2104] = 3,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_input,
    ACTIONS(192), 1,
      sym_line_comment,
  [2114] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2122] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2138] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      sym_writemask,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 1,
      sym_normalselector,
  [2159] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      sym_int,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      sym_cullface,
  [2173] = 2,
    ACTIONS(192), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      sym_picaasm,
  [2180] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
  [2187] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
  [2194] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_testfunc,
  [2201] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(216), 1,
      sym_texture,
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
  [SMALL_STATE(33)] = 1464,
  [SMALL_STATE(34)] = 1479,
  [SMALL_STATE(35)] = 1494,
  [SMALL_STATE(36)] = 1509,
  [SMALL_STATE(37)] = 1524,
  [SMALL_STATE(38)] = 1534,
  [SMALL_STATE(39)] = 1550,
  [SMALL_STATE(40)] = 1566,
  [SMALL_STATE(41)] = 1582,
  [SMALL_STATE(42)] = 1596,
  [SMALL_STATE(43)] = 1612,
  [SMALL_STATE(44)] = 1628,
  [SMALL_STATE(45)] = 1642,
  [SMALL_STATE(46)] = 1658,
  [SMALL_STATE(47)] = 1674,
  [SMALL_STATE(48)] = 1690,
  [SMALL_STATE(49)] = 1704,
  [SMALL_STATE(50)] = 1718,
  [SMALL_STATE(51)] = 1734,
  [SMALL_STATE(52)] = 1746,
  [SMALL_STATE(53)] = 1762,
  [SMALL_STATE(54)] = 1776,
  [SMALL_STATE(55)] = 1792,
  [SMALL_STATE(56)] = 1808,
  [SMALL_STATE(57)] = 1824,
  [SMALL_STATE(58)] = 1840,
  [SMALL_STATE(59)] = 1856,
  [SMALL_STATE(60)] = 1872,
  [SMALL_STATE(61)] = 1885,
  [SMALL_STATE(62)] = 1896,
  [SMALL_STATE(63)] = 1909,
  [SMALL_STATE(64)] = 1922,
  [SMALL_STATE(65)] = 1931,
  [SMALL_STATE(66)] = 1944,
  [SMALL_STATE(67)] = 1953,
  [SMALL_STATE(68)] = 1966,
  [SMALL_STATE(69)] = 1979,
  [SMALL_STATE(70)] = 1992,
  [SMALL_STATE(71)] = 2000,
  [SMALL_STATE(72)] = 2008,
  [SMALL_STATE(73)] = 2016,
  [SMALL_STATE(74)] = 2024,
  [SMALL_STATE(75)] = 2032,
  [SMALL_STATE(76)] = 2040,
  [SMALL_STATE(77)] = 2048,
  [SMALL_STATE(78)] = 2056,
  [SMALL_STATE(79)] = 2064,
  [SMALL_STATE(80)] = 2072,
  [SMALL_STATE(81)] = 2080,
  [SMALL_STATE(82)] = 2088,
  [SMALL_STATE(83)] = 2096,
  [SMALL_STATE(84)] = 2104,
  [SMALL_STATE(85)] = 2114,
  [SMALL_STATE(86)] = 2122,
  [SMALL_STATE(87)] = 2130,
  [SMALL_STATE(88)] = 2138,
  [SMALL_STATE(89)] = 2145,
  [SMALL_STATE(90)] = 2152,
  [SMALL_STATE(91)] = 2159,
  [SMALL_STATE(92)] = 2166,
  [SMALL_STATE(93)] = 2173,
  [SMALL_STATE(94)] = 2180,
  [SMALL_STATE(95)] = 2187,
  [SMALL_STATE(96)] = 2194,
  [SMALL_STATE(97)] = 2201,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 8),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(31),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picainclude, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picablock, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 4, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 5, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 3, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 2, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_combineinstr_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_combineinstr_repeat1, 2), SHIFT_REPEAT(61),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tevsrc, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat3, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat3, 2), SHIFT_REPEAT(22),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(65),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tevsrc, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectorinstr, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cull, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_write, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphatest, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depthtest, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_qlsl(void) {
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
