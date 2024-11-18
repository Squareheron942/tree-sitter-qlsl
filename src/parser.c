#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_cull = 14,
  sym_cullface = 15,
  sym_hexcode = 16,
  sym_testfunc = 17,
  sym_writemask = 18,
  anon_sym_write = 19,
  anon_sym_depthtest = 20,
  anon_sym_normal = 21,
  sym_normalselector = 22,
  sym_texenvmode = 23,
  sym_tevop = 24,
  anon_sym_DOTversion = 25,
  sym_picaasm = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  aux_sym_picainclude_token1 = 29,
  sym_tcblock = 30,
  sym_program = 31,
  sym__item = 32,
  sym_tevsrc = 33,
  sym_combineinstr = 34,
  sym_instr = 35,
  sym_declaration = 36,
  sym_selectorinstr = 37,
  sym_number = 38,
  sym_alphatest = 39,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == ',') ADVANCE(234);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(155);
      if (lookahead == '{') ADVANCE(281);
      if (lookahead == '}') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 1:
      if (lookahead == '3') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '_') ADVANCE(147);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(166);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(273);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(231);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(276);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(233);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(265);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(283);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 86:
      if (lookahead == 'h') ADVANCE(267);
      END_STATE();
    case 87:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(261);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(207);
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(167);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 150:
      if (lookahead == 'q') ADVANCE(203);
      END_STATE();
    case 151:
      if (lookahead == 'q') ADVANCE(203);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'g' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 208:
      if (lookahead == 'v') ADVANCE(152);
      END_STATE();
    case 209:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 210:
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 211:
      if (lookahead == 'x') ADVANCE(221);
      END_STATE();
    case 212:
      if (lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 213:
      if (lookahead == 'y') ADVANCE(243);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 215:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 216:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'v') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(156);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 217:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(217)
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == '{') ADVANCE(281);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 218:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 219:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(220)
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'g') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(60);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 227:
      if (eof) ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(156);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 228:
      if (eof) ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(228)
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == ';') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 't') ADVANCE(46);
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
      if (lookahead == '_') ADVANCE(115);
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
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
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
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(280);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_cull);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_cullface);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_hexcode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_testfunc);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_testfunc);
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_writemask);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_writemask);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_writemask);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_depthtest);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_normalselector);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_texenvmode);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_texenvmode);
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_texenvmode);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_tevop);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_tevop);
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_tevop);
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DOTversion);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_picaasm);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead == ';') ADVANCE(245);
      if (!eof && (0 <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 127) ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_picaasm);
      if (!eof && (0 <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 127) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_picainclude_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_tcblock);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
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
  [28] = {.lex_state = 228},
  [29] = {.lex_state = 227},
  [30] = {.lex_state = 227},
  [31] = {.lex_state = 227},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 227},
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
  [72] = {.lex_state = 217},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 219},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 228},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 227},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 220},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 279},
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
    [sym_program] = STATE(85),
    [sym__item] = STATE(56),
    [sym_combineinstr] = STATE(81),
    [sym_instr] = STATE(56),
    [sym_declaration] = STATE(56),
    [sym_selectorinstr] = STATE(81),
    [sym_alphatest] = STATE(82),
    [sym_cull] = STATE(82),
    [sym_write] = STATE(82),
    [sym_depthtest] = STATE(82),
    [sym_normal] = STATE(82),
    [sym_version] = STATE(8),
    [sym_picainclude] = STATE(31),
    [sym_section] = STATE(9),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_combinefunc] = ACTIONS(9),
    [sym_texture] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_alphatest] = ACTIONS(13),
    [anon_sym_cull] = ACTIONS(15),
    [anon_sym_write] = ACTIONS(17),
    [anon_sym_depthtest] = ACTIONS(19),
    [anon_sym_normal] = ACTIONS(21),
    [anon_sym_DOTversion] = ACTIONS(23),
    [aux_sym_picainclude_token1] = ACTIONS(25),
    [sym_tcblock] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(25), 1,
      aux_sym_picainclude_token1,
    ACTIONS(27), 1,
      sym_tcblock,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(27), 1,
      sym_section,
    STATE(31), 1,
      sym_picainclude,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(57), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [62] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(25), 1,
      aux_sym_picainclude_token1,
    ACTIONS(27), 1,
      sym_tcblock,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_section,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(31), 1,
      sym_picainclude,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(55), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [124] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(25), 1,
      aux_sym_picainclude_token1,
    ACTIONS(27), 1,
      sym_tcblock,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(27), 1,
      sym_section,
    STATE(31), 1,
      sym_picainclude,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(41), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [186] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(25), 1,
      aux_sym_picainclude_token1,
    ACTIONS(27), 1,
      sym_tcblock,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(27), 1,
      sym_section,
    STATE(31), 1,
      sym_picainclude,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(55), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [248] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(25), 1,
      aux_sym_picainclude_token1,
    ACTIONS(27), 1,
      sym_tcblock,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_section,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(31), 1,
      sym_picainclude,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(43), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [310] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(25), 1,
      aux_sym_picainclude_token1,
    ACTIONS(27), 1,
      sym_tcblock,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(27), 1,
      sym_section,
    STATE(31), 1,
      sym_picainclude,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(49), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [372] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(25), 1,
      aux_sym_picainclude_token1,
    ACTIONS(27), 1,
      sym_tcblock,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(11), 1,
      sym_section,
    STATE(31), 1,
      sym_picainclude,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(43), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [434] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(10), 1,
      aux_sym_program_repeat2,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(43), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [487] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(25), 1,
      aux_sym_program_repeat2,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(55), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [540] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(12), 1,
      aux_sym_program_repeat2,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(55), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [593] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(25), 1,
      aux_sym_program_repeat2,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(57), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [646] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      aux_sym_program_repeat2,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(57), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [699] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(25), 1,
      aux_sym_program_repeat2,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(49), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [752] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(74), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [802] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(74), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [852] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(74), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [902] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(74), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [952] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(74), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [1002] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(74), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [1052] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(74), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [1102] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_combinefunc,
    ACTIONS(11), 1,
      sym_texture,
    ACTIONS(13), 1,
      anon_sym_alphatest,
    ACTIONS(15), 1,
      anon_sym_cull,
    ACTIONS(17), 1,
      anon_sym_write,
    ACTIONS(19), 1,
      anon_sym_depthtest,
    ACTIONS(21), 1,
      anon_sym_normal,
    ACTIONS(31), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(81), 2,
      sym_combineinstr,
      sym_selectorinstr,
    STATE(74), 3,
      sym__item,
      sym_instr,
      sym_declaration,
    STATE(82), 5,
      sym_alphatest,
      sym_cull,
      sym_write,
      sym_depthtest,
      sym_normal,
  [1149] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    ACTIONS(62), 2,
      aux_sym_picainclude_token1,
      sym_tcblock,
    ACTIONS(57), 8,
      ts_builtin_sym_end,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1173] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 2,
      aux_sym_picainclude_token1,
      sym_tcblock,
    ACTIONS(64), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1192] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      anon_sym_LF,
    STATE(25), 1,
      aux_sym_program_repeat2,
    STATE(36), 1,
      aux_sym_program_repeat1,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1215] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(68), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1245] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_hexcode,
    ACTIONS(83), 1,
      sym_texenvmode,
    STATE(38), 1,
      sym_tevsrc,
    STATE(60), 1,
      sym_color,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(77), 2,
      sym_texture,
      sym_gpu_input,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1302] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_combinefunc,
      sym_texture,
      anon_sym_alphatest,
      anon_sym_cull,
      anon_sym_write,
      anon_sym_depthtest,
      anon_sym_normal,
  [1317] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_hexcode,
    STATE(60), 1,
      sym_color,
    STATE(66), 1,
      sym_tevsrc,
    ACTIONS(77), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1341] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_hexcode,
    STATE(60), 1,
      sym_color,
    STATE(66), 1,
      sym_tevsrc,
    ACTIONS(77), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1365] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_hexcode,
    STATE(47), 1,
      sym_tevsrc,
    STATE(60), 1,
      sym_color,
    ACTIONS(77), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1389] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_hexcode,
    STATE(60), 1,
      sym_color,
    STATE(66), 1,
      sym_tevsrc,
    ACTIONS(77), 2,
      sym_texture,
      sym_gpu_input,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1413] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      aux_sym_picainclude_token1,
    ACTIONS(27), 1,
      sym_tcblock,
    ACTIONS(31), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym_program_repeat1,
    STATE(27), 1,
      sym_section,
    STATE(31), 1,
      sym_picainclude,
  [1435] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym_hexcode,
    STATE(60), 1,
      sym_color,
    STATE(66), 1,
      sym_tevsrc,
    ACTIONS(77), 2,
      sym_texture,
      sym_gpu_input,
  [1455] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1469] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1483] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1499] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym_program_repeat1,
    STATE(40), 1,
      aux_sym_program_repeat3,
  [1515] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_LF,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1531] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_LF,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(54), 1,
      aux_sym_program_repeat3,
  [1547] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1563] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_tevop,
  [1573] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_tevop,
  [1583] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1597] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1611] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_program_repeat1,
    STATE(44), 1,
      aux_sym_program_repeat3,
  [1627] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1643] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      sym_float,
    ACTIONS(120), 1,
      sym_int,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_number,
  [1659] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_tevop,
  [1669] = 5,
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
  [1685] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1701] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_program_repeat1,
    STATE(58), 1,
      aux_sym_program_repeat3,
  [1717] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_program_repeat1,
    STATE(42), 1,
      aux_sym_program_repeat3,
  [1733] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_program_repeat1,
    STATE(50), 1,
      aux_sym_program_repeat3,
  [1749] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_program_repeat1,
    STATE(53), 1,
      aux_sym_program_repeat3,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1775] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      sym_tevop,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1787] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      sym_float,
    ACTIONS(120), 1,
      sym_int,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_number,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_tevop,
  [1813] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      sym_float,
    ACTIONS(120), 1,
      sym_int,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_number,
  [1829] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      sym_tevop,
  [1839] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_combineinstr_repeat1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1862] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      sym_float,
    ACTIONS(120), 1,
      sym_int,
    STATE(77), 1,
      sym_number,
  [1875] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      sym_float,
    ACTIONS(120), 1,
      sym_int,
    STATE(79), 1,
      sym_number,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1897] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_color_repeat1,
  [1910] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_color_repeat1,
  [1923] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_picablock,
  [1936] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_color_repeat1,
  [1949] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1965] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1973] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1981] = 3,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_input,
    ACTIONS(178), 1,
      sym_line_comment,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1999] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2015] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2023] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2031] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2039] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [2046] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(194), 1,
      sym_int,
  [2053] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      sym_texture,
  [2060] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [2067] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      sym_testfunc,
  [2074] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 1,
      sym_normalselector,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      sym_writemask,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      sym_cullface,
  [2102] = 2,
    ACTIONS(178), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      sym_picaasm,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 248,
  [SMALL_STATE(7)] = 310,
  [SMALL_STATE(8)] = 372,
  [SMALL_STATE(9)] = 434,
  [SMALL_STATE(10)] = 487,
  [SMALL_STATE(11)] = 540,
  [SMALL_STATE(12)] = 593,
  [SMALL_STATE(13)] = 646,
  [SMALL_STATE(14)] = 699,
  [SMALL_STATE(15)] = 752,
  [SMALL_STATE(16)] = 802,
  [SMALL_STATE(17)] = 852,
  [SMALL_STATE(18)] = 902,
  [SMALL_STATE(19)] = 952,
  [SMALL_STATE(20)] = 1002,
  [SMALL_STATE(21)] = 1052,
  [SMALL_STATE(22)] = 1102,
  [SMALL_STATE(23)] = 1149,
  [SMALL_STATE(24)] = 1173,
  [SMALL_STATE(25)] = 1192,
  [SMALL_STATE(26)] = 1215,
  [SMALL_STATE(27)] = 1230,
  [SMALL_STATE(28)] = 1245,
  [SMALL_STATE(29)] = 1272,
  [SMALL_STATE(30)] = 1287,
  [SMALL_STATE(31)] = 1302,
  [SMALL_STATE(32)] = 1317,
  [SMALL_STATE(33)] = 1341,
  [SMALL_STATE(34)] = 1365,
  [SMALL_STATE(35)] = 1389,
  [SMALL_STATE(36)] = 1413,
  [SMALL_STATE(37)] = 1435,
  [SMALL_STATE(38)] = 1455,
  [SMALL_STATE(39)] = 1469,
  [SMALL_STATE(40)] = 1483,
  [SMALL_STATE(41)] = 1499,
  [SMALL_STATE(42)] = 1515,
  [SMALL_STATE(43)] = 1531,
  [SMALL_STATE(44)] = 1547,
  [SMALL_STATE(45)] = 1563,
  [SMALL_STATE(46)] = 1573,
  [SMALL_STATE(47)] = 1583,
  [SMALL_STATE(48)] = 1597,
  [SMALL_STATE(49)] = 1611,
  [SMALL_STATE(50)] = 1627,
  [SMALL_STATE(51)] = 1643,
  [SMALL_STATE(52)] = 1659,
  [SMALL_STATE(53)] = 1669,
  [SMALL_STATE(54)] = 1685,
  [SMALL_STATE(55)] = 1701,
  [SMALL_STATE(56)] = 1717,
  [SMALL_STATE(57)] = 1733,
  [SMALL_STATE(58)] = 1749,
  [SMALL_STATE(59)] = 1765,
  [SMALL_STATE(60)] = 1775,
  [SMALL_STATE(61)] = 1787,
  [SMALL_STATE(62)] = 1803,
  [SMALL_STATE(63)] = 1813,
  [SMALL_STATE(64)] = 1829,
  [SMALL_STATE(65)] = 1839,
  [SMALL_STATE(66)] = 1853,
  [SMALL_STATE(67)] = 1862,
  [SMALL_STATE(68)] = 1875,
  [SMALL_STATE(69)] = 1888,
  [SMALL_STATE(70)] = 1897,
  [SMALL_STATE(71)] = 1910,
  [SMALL_STATE(72)] = 1923,
  [SMALL_STATE(73)] = 1936,
  [SMALL_STATE(74)] = 1949,
  [SMALL_STATE(75)] = 1957,
  [SMALL_STATE(76)] = 1965,
  [SMALL_STATE(77)] = 1973,
  [SMALL_STATE(78)] = 1981,
  [SMALL_STATE(79)] = 1991,
  [SMALL_STATE(80)] = 1999,
  [SMALL_STATE(81)] = 2007,
  [SMALL_STATE(82)] = 2015,
  [SMALL_STATE(83)] = 2023,
  [SMALL_STATE(84)] = 2031,
  [SMALL_STATE(85)] = 2039,
  [SMALL_STATE(86)] = 2046,
  [SMALL_STATE(87)] = 2053,
  [SMALL_STATE(88)] = 2060,
  [SMALL_STATE(89)] = 2067,
  [SMALL_STATE(90)] = 2074,
  [SMALL_STATE(91)] = 2081,
  [SMALL_STATE(92)] = 2088,
  [SMALL_STATE(93)] = 2095,
  [SMALL_STATE(94)] = 2102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 8),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(36),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picablock, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 1, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picainclude, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 5, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 4, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 2, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combineinstr, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_combineinstr_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_combineinstr_repeat1, 2), SHIFT_REPEAT(37),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat3, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat3, 2), SHIFT_REPEAT(22),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tevsrc, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tevsrc, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(67),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cull, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_write, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphatest, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectorinstr, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depthtest, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal, 4),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
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
