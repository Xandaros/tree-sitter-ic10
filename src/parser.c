#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 2
#define TOKEN_COUNT 130
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 8

enum {
  sym_identifier = 1,
  anon_sym_COLON = 2,
  anon_sym_LF = 3,
  anon_sym_CR_LF = 4,
  anon_sym_CR = 5,
  sym__whitespace = 6,
  aux_sym_comment_token1 = 7,
  sym_register = 8,
  sym_device = 9,
  sym_number = 10,
  anon_sym_l = 11,
  anon_sym_s = 12,
  anon_sym_ls = 13,
  anon_sym_lr = 14,
  anon_sym_sb = 15,
  anon_sym_lb = 16,
  anon_sym_alias = 17,
  anon_sym_move = 18,
  anon_sym_add = 19,
  anon_sym_sub = 20,
  anon_sym_sdse = 21,
  anon_sym_sdns = 22,
  anon_sym_slt = 23,
  anon_sym_sgt = 24,
  anon_sym_sle = 25,
  anon_sym_sge = 26,
  anon_sym_seq = 27,
  anon_sym_sne = 28,
  anon_sym_sap = 29,
  anon_sym_sna = 30,
  anon_sym_and = 31,
  anon_sym_or = 32,
  anon_sym_xor = 33,
  anon_sym_nor = 34,
  anon_sym_mul = 35,
  anon_sym_div = 36,
  anon_sym_mod = 37,
  anon_sym_j = 38,
  anon_sym_bltz = 39,
  anon_sym_bgez = 40,
  anon_sym_blez = 41,
  anon_sym_bgtz = 42,
  anon_sym_bdse = 43,
  anon_sym_bdns = 44,
  anon_sym_beq = 45,
  anon_sym_bne = 46,
  anon_sym_bap = 47,
  anon_sym_bna = 48,
  anon_sym_jal = 49,
  anon_sym_brdse = 50,
  anon_sym_brdns = 51,
  anon_sym_bltzal = 52,
  anon_sym_bgezal = 53,
  anon_sym_blezal = 54,
  anon_sym_bgtzal = 55,
  anon_sym_beqal = 56,
  anon_sym_bneal = 57,
  anon_sym_jr = 58,
  anon_sym_bdseal = 59,
  anon_sym_bdnsal = 60,
  anon_sym_brltz = 61,
  anon_sym_brgez = 62,
  anon_sym_brlez = 63,
  anon_sym_brgtz = 64,
  anon_sym_breq = 65,
  anon_sym_brne = 66,
  anon_sym_brap = 67,
  anon_sym_brna = 68,
  anon_sym_sqrt = 69,
  anon_sym_round = 70,
  anon_sym_trunc = 71,
  anon_sym_ceil = 72,
  anon_sym_floor = 73,
  anon_sym_max = 74,
  anon_sym_min = 75,
  anon_sym_abs = 76,
  anon_sym_log = 77,
  anon_sym_exp = 78,
  anon_sym_rand = 79,
  anon_sym_yield = 80,
  anon_sym_label = 81,
  anon_sym_peek = 82,
  anon_sym_push = 83,
  anon_sym_pop = 84,
  anon_sym_hcf = 85,
  anon_sym_select = 86,
  anon_sym_blt = 87,
  anon_sym_bgt = 88,
  anon_sym_ble = 89,
  anon_sym_bge = 90,
  anon_sym_brlt = 91,
  anon_sym_brgt = 92,
  anon_sym_brle = 93,
  anon_sym_brge = 94,
  anon_sym_bltal = 95,
  anon_sym_bgtal = 96,
  anon_sym_bleal = 97,
  anon_sym_bgeal = 98,
  anon_sym_bapal = 99,
  anon_sym_bnaal = 100,
  anon_sym_beqz = 101,
  anon_sym_bnez = 102,
  anon_sym_bapz = 103,
  anon_sym_bnaz = 104,
  anon_sym_breqz = 105,
  anon_sym_brnez = 106,
  anon_sym_brapz = 107,
  anon_sym_brnaz = 108,
  anon_sym_beqzal = 109,
  anon_sym_bnezal = 110,
  anon_sym_bapzal = 111,
  anon_sym_bnazal = 112,
  anon_sym_sltz = 113,
  anon_sym_sgtz = 114,
  anon_sym_slez = 115,
  anon_sym_sgez = 116,
  anon_sym_seqz = 117,
  anon_sym_snez = 118,
  anon_sym_sapz = 119,
  anon_sym_snaz = 120,
  anon_sym_define = 121,
  anon_sym_sleep = 122,
  anon_sym_sin = 123,
  anon_sym_asin = 124,
  anon_sym_tan = 125,
  anon_sym_atan = 126,
  anon_sym_cos = 127,
  anon_sym_acos = 128,
  sym_logictype = 129,
  sym_source_file = 130,
  sym_line = 131,
  sym_label = 132,
  sym_newline = 133,
  sym_comment = 134,
  sym_instruction = 135,
  sym_operand = 136,
  sym_operation = 137,
  aux_sym_source_file_repeat1 = 138,
  aux_sym_instruction_repeat1 = 139,
  alias_sym_invalid_instruction = 140,
  alias_sym_program = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_CR] = "\r",
  [sym__whitespace] = "_whitespace",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_register] = "register",
  [sym_device] = "device",
  [sym_number] = "number",
  [anon_sym_l] = "l",
  [anon_sym_s] = "s",
  [anon_sym_ls] = "ls",
  [anon_sym_lr] = "lr",
  [anon_sym_sb] = "sb",
  [anon_sym_lb] = "lb",
  [anon_sym_alias] = "alias",
  [anon_sym_move] = "move",
  [anon_sym_add] = "add",
  [anon_sym_sub] = "sub",
  [anon_sym_sdse] = "sdse",
  [anon_sym_sdns] = "sdns",
  [anon_sym_slt] = "slt",
  [anon_sym_sgt] = "sgt",
  [anon_sym_sle] = "sle",
  [anon_sym_sge] = "sge",
  [anon_sym_seq] = "seq",
  [anon_sym_sne] = "sne",
  [anon_sym_sap] = "sap",
  [anon_sym_sna] = "sna",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_nor] = "nor",
  [anon_sym_mul] = "mul",
  [anon_sym_div] = "div",
  [anon_sym_mod] = "mod",
  [anon_sym_j] = "j",
  [anon_sym_bltz] = "bltz",
  [anon_sym_bgez] = "bgez",
  [anon_sym_blez] = "blez",
  [anon_sym_bgtz] = "bgtz",
  [anon_sym_bdse] = "bdse",
  [anon_sym_bdns] = "bdns",
  [anon_sym_beq] = "beq",
  [anon_sym_bne] = "bne",
  [anon_sym_bap] = "bap",
  [anon_sym_bna] = "bna",
  [anon_sym_jal] = "jal",
  [anon_sym_brdse] = "brdse",
  [anon_sym_brdns] = "brdns",
  [anon_sym_bltzal] = "bltzal",
  [anon_sym_bgezal] = "bgezal",
  [anon_sym_blezal] = "blezal",
  [anon_sym_bgtzal] = "bgtzal",
  [anon_sym_beqal] = "beqal",
  [anon_sym_bneal] = "bneal",
  [anon_sym_jr] = "jr",
  [anon_sym_bdseal] = "bdseal",
  [anon_sym_bdnsal] = "bdnsal",
  [anon_sym_brltz] = "brltz",
  [anon_sym_brgez] = "brgez",
  [anon_sym_brlez] = "brlez",
  [anon_sym_brgtz] = "brgtz",
  [anon_sym_breq] = "breq",
  [anon_sym_brne] = "brne",
  [anon_sym_brap] = "brap",
  [anon_sym_brna] = "brna",
  [anon_sym_sqrt] = "sqrt",
  [anon_sym_round] = "round",
  [anon_sym_trunc] = "trunc",
  [anon_sym_ceil] = "ceil",
  [anon_sym_floor] = "floor",
  [anon_sym_max] = "max",
  [anon_sym_min] = "min",
  [anon_sym_abs] = "abs",
  [anon_sym_log] = "log",
  [anon_sym_exp] = "exp",
  [anon_sym_rand] = "rand",
  [anon_sym_yield] = "yield",
  [anon_sym_label] = "label",
  [anon_sym_peek] = "peek",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [anon_sym_hcf] = "hcf",
  [anon_sym_select] = "select",
  [anon_sym_blt] = "blt",
  [anon_sym_bgt] = "bgt",
  [anon_sym_ble] = "ble",
  [anon_sym_bge] = "bge",
  [anon_sym_brlt] = "brlt",
  [anon_sym_brgt] = "brgt",
  [anon_sym_brle] = "brle",
  [anon_sym_brge] = "brge",
  [anon_sym_bltal] = "bltal",
  [anon_sym_bgtal] = "bgtal",
  [anon_sym_bleal] = "bleal",
  [anon_sym_bgeal] = "bgeal",
  [anon_sym_bapal] = "bapal",
  [anon_sym_bnaal] = "bnaal",
  [anon_sym_beqz] = "beqz",
  [anon_sym_bnez] = "bnez",
  [anon_sym_bapz] = "bapz",
  [anon_sym_bnaz] = "bnaz",
  [anon_sym_breqz] = "breqz",
  [anon_sym_brnez] = "brnez",
  [anon_sym_brapz] = "brapz",
  [anon_sym_brnaz] = "brnaz",
  [anon_sym_beqzal] = "beqzal",
  [anon_sym_bnezal] = "bnezal",
  [anon_sym_bapzal] = "bapzal",
  [anon_sym_bnazal] = "bnazal",
  [anon_sym_sltz] = "sltz",
  [anon_sym_sgtz] = "sgtz",
  [anon_sym_slez] = "slez",
  [anon_sym_sgez] = "sgez",
  [anon_sym_seqz] = "seqz",
  [anon_sym_snez] = "snez",
  [anon_sym_sapz] = "sapz",
  [anon_sym_snaz] = "snaz",
  [anon_sym_define] = "define",
  [anon_sym_sleep] = "sleep",
  [anon_sym_sin] = "sin",
  [anon_sym_asin] = "asin",
  [anon_sym_tan] = "tan",
  [anon_sym_atan] = "atan",
  [anon_sym_cos] = "cos",
  [anon_sym_acos] = "acos",
  [sym_logictype] = "logictype",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_label] = "label",
  [sym_newline] = "newline",
  [sym_comment] = "comment",
  [sym_instruction] = "instruction",
  [sym_operand] = "operand",
  [sym_operation] = "operation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [alias_sym_invalid_instruction] = "invalid_instruction",
  [alias_sym_program] = "program",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym__whitespace] = sym__whitespace,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_register] = sym_register,
  [sym_device] = sym_device,
  [sym_number] = sym_number,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_ls] = anon_sym_ls,
  [anon_sym_lr] = anon_sym_lr,
  [anon_sym_sb] = anon_sym_sb,
  [anon_sym_lb] = anon_sym_lb,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_sdse] = anon_sym_sdse,
  [anon_sym_sdns] = anon_sym_sdns,
  [anon_sym_slt] = anon_sym_slt,
  [anon_sym_sgt] = anon_sym_sgt,
  [anon_sym_sle] = anon_sym_sle,
  [anon_sym_sge] = anon_sym_sge,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_sne] = anon_sym_sne,
  [anon_sym_sap] = anon_sym_sap,
  [anon_sym_sna] = anon_sym_sna,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_nor] = anon_sym_nor,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_j] = anon_sym_j,
  [anon_sym_bltz] = anon_sym_bltz,
  [anon_sym_bgez] = anon_sym_bgez,
  [anon_sym_blez] = anon_sym_blez,
  [anon_sym_bgtz] = anon_sym_bgtz,
  [anon_sym_bdse] = anon_sym_bdse,
  [anon_sym_bdns] = anon_sym_bdns,
  [anon_sym_beq] = anon_sym_beq,
  [anon_sym_bne] = anon_sym_bne,
  [anon_sym_bap] = anon_sym_bap,
  [anon_sym_bna] = anon_sym_bna,
  [anon_sym_jal] = anon_sym_jal,
  [anon_sym_brdse] = anon_sym_brdse,
  [anon_sym_brdns] = anon_sym_brdns,
  [anon_sym_bltzal] = anon_sym_bltzal,
  [anon_sym_bgezal] = anon_sym_bgezal,
  [anon_sym_blezal] = anon_sym_blezal,
  [anon_sym_bgtzal] = anon_sym_bgtzal,
  [anon_sym_beqal] = anon_sym_beqal,
  [anon_sym_bneal] = anon_sym_bneal,
  [anon_sym_jr] = anon_sym_jr,
  [anon_sym_bdseal] = anon_sym_bdseal,
  [anon_sym_bdnsal] = anon_sym_bdnsal,
  [anon_sym_brltz] = anon_sym_brltz,
  [anon_sym_brgez] = anon_sym_brgez,
  [anon_sym_brlez] = anon_sym_brlez,
  [anon_sym_brgtz] = anon_sym_brgtz,
  [anon_sym_breq] = anon_sym_breq,
  [anon_sym_brne] = anon_sym_brne,
  [anon_sym_brap] = anon_sym_brap,
  [anon_sym_brna] = anon_sym_brna,
  [anon_sym_sqrt] = anon_sym_sqrt,
  [anon_sym_round] = anon_sym_round,
  [anon_sym_trunc] = anon_sym_trunc,
  [anon_sym_ceil] = anon_sym_ceil,
  [anon_sym_floor] = anon_sym_floor,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_abs] = anon_sym_abs,
  [anon_sym_log] = anon_sym_log,
  [anon_sym_exp] = anon_sym_exp,
  [anon_sym_rand] = anon_sym_rand,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_peek] = anon_sym_peek,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_hcf] = anon_sym_hcf,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_blt] = anon_sym_blt,
  [anon_sym_bgt] = anon_sym_bgt,
  [anon_sym_ble] = anon_sym_ble,
  [anon_sym_bge] = anon_sym_bge,
  [anon_sym_brlt] = anon_sym_brlt,
  [anon_sym_brgt] = anon_sym_brgt,
  [anon_sym_brle] = anon_sym_brle,
  [anon_sym_brge] = anon_sym_brge,
  [anon_sym_bltal] = anon_sym_bltal,
  [anon_sym_bgtal] = anon_sym_bgtal,
  [anon_sym_bleal] = anon_sym_bleal,
  [anon_sym_bgeal] = anon_sym_bgeal,
  [anon_sym_bapal] = anon_sym_bapal,
  [anon_sym_bnaal] = anon_sym_bnaal,
  [anon_sym_beqz] = anon_sym_beqz,
  [anon_sym_bnez] = anon_sym_bnez,
  [anon_sym_bapz] = anon_sym_bapz,
  [anon_sym_bnaz] = anon_sym_bnaz,
  [anon_sym_breqz] = anon_sym_breqz,
  [anon_sym_brnez] = anon_sym_brnez,
  [anon_sym_brapz] = anon_sym_brapz,
  [anon_sym_brnaz] = anon_sym_brnaz,
  [anon_sym_beqzal] = anon_sym_beqzal,
  [anon_sym_bnezal] = anon_sym_bnezal,
  [anon_sym_bapzal] = anon_sym_bapzal,
  [anon_sym_bnazal] = anon_sym_bnazal,
  [anon_sym_sltz] = anon_sym_sltz,
  [anon_sym_sgtz] = anon_sym_sgtz,
  [anon_sym_slez] = anon_sym_slez,
  [anon_sym_sgez] = anon_sym_sgez,
  [anon_sym_seqz] = anon_sym_seqz,
  [anon_sym_snez] = anon_sym_snez,
  [anon_sym_sapz] = anon_sym_sapz,
  [anon_sym_snaz] = anon_sym_snaz,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_sleep] = anon_sym_sleep,
  [anon_sym_sin] = anon_sym_sin,
  [anon_sym_asin] = anon_sym_asin,
  [anon_sym_tan] = anon_sym_tan,
  [anon_sym_atan] = anon_sym_atan,
  [anon_sym_cos] = anon_sym_cos,
  [anon_sym_acos] = anon_sym_acos,
  [sym_logictype] = sym_logictype,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_label] = sym_label,
  [sym_newline] = sym_newline,
  [sym_comment] = sym_comment,
  [sym_instruction] = sym_instruction,
  [sym_operand] = sym_operand,
  [sym_operation] = sym_operation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [alias_sym_invalid_instruction] = alias_sym_invalid_instruction,
  [alias_sym_program] = alias_sym_program,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_device] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_j] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bltz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgtz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brdse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brdns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bltzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgezal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blezal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgtzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beqal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bneal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdseal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdnsal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brltz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brgez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brlez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brgtz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sqrt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_round] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_peek] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hcf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brlt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bltal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgtal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bleal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgeal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bapal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnaal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beqz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bapz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnaz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breqz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brnez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brapz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brnaz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beqzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnezal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bapzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnazal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sltz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgtz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seqz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sapz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snaz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sleep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acos] = {
    .visible = true,
    .named = false,
  },
  [sym_logictype] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_invalid_instruction] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_program] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_operand = 1,
  field_operation = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_operand] = "operand",
  [field_operation] = "operation",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 2, .length = 2},
  [7] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operation, 0},
  [1] =
    {field_operand, 0},
  [2] =
    {field_operand, 1, .inherited = true},
    {field_operation, 0},
  [4] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_invalid_instruction,
  },
  [3] = {
    [0] = alias_sym_program,
  },
  [5] = {
    [0] = alias_sym_invalid_instruction,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_source_file_repeat1, 2,
    aux_sym_source_file_repeat1,
    alias_sym_program,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(6);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'C') ADVANCE(3);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'E') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'G') ADVANCE(7);
      if (lookahead == 'H') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(9);
      if (lookahead == 'L') ADVANCE(10);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(14);
      if (lookahead == 'Q') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(16);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == 'V') ADVANCE(19);
      if (lookahead == 'W') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'j') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '5') ||
          lookahead == 'b') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == '1') ADVANCE(130);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'p') ADVANCE(134);
      if (lookahead == 'q') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'x') ADVANCE(176);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 66:
      if (lookahead == 'x') ADVANCE(179);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_logictype);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(185);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'q') ADVANCE(191);
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == 'z') ADVANCE(196);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 100:
      if (lookahead == 'q') ADVANCE(219);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_device);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 109:
      if (lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 110:
      if (lookahead == '1') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(239);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_jr);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(241);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_lb);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_lr);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ls);
      END_STATE();
    case 121:
      if (lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 133:
      if (lookahead == '1') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_sb);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == 'q') ADVANCE(257);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 150:
      if (lookahead == 'R') ADVANCE(272);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 159:
      if (lookahead == 'v') ADVANCE(283);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 166:
      if (lookahead == 'w') ADVANCE(289);
      END_STATE();
    case 167:
      if (lookahead == 'v') ADVANCE(290);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 173:
      if (lookahead == 'k') ADVANCE(68);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 176:
      if (lookahead == 'Q') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(322);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 208:
      if (lookahead == 'k') ADVANCE(330);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_abs);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_bap);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'z') ADVANCE(336);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_beq);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'z') ADVANCE(340);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_bge);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'z') ADVANCE(342);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_bgt);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'z') ADVANCE(344);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ble);
      if (lookahead == 'a') ADVANCE(345);
      if (lookahead == 'z') ADVANCE(346);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_blt);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'z') ADVANCE(348);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_bna);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == 'z') ADVANCE(350);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_bne);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'z') ADVANCE(352);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 228:
      if (lookahead == 'q') ADVANCE(356);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_cos);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_device);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(107);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_hcf);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_jal);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 249:
      if (lookahead == 'k') ADVANCE(368);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 251:
      if (lookahead == 'h') ADVANCE(369);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_sap);
      if (lookahead == 'z') ADVANCE(371);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_seq);
      if (lookahead == 'z') ADVANCE(375);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_sge);
      if (lookahead == 'z') ADVANCE(376);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (lookahead == 'z') ADVANCE(377);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_sin);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_sle);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'z') ADVANCE(379);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_slt);
      if (lookahead == 'z') ADVANCE(380);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_sna);
      if (lookahead == 'z') ADVANCE(381);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_sne);
      if (lookahead == 'z') ADVANCE(382);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_tan);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 271:
      if (lookahead == 'v') ADVANCE(386);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 273:
      if (lookahead == 'g') ADVANCE(388);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 281:
      if (lookahead == 'g') ADVANCE(394);
      END_STATE();
    case 282:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 283:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 292:
      if (lookahead == 'z') ADVANCE(404);
      END_STATE();
    case 293:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 296:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(409);
      END_STATE();
    case 298:
      if (lookahead == 'm') ADVANCE(410);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(412);
      END_STATE();
    case 301:
      if (lookahead == 'W') ADVANCE(413);
      END_STATE();
    case 302:
      if (lookahead == 'p') ADVANCE(414);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(416);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 313:
      if (lookahead == 'p') ADVANCE(425);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 319:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(440);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_acos);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_asin);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_atan);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_bapz);
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_bdns);
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_bdse);
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_beqz);
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_bgez);
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_bgtz);
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_blez);
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_bltz);
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_bnaz);
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_bnez);
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_brap);
      if (lookahead == 'z') ADVANCE(462);
      END_STATE();
    case 354:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_breq);
      if (lookahead == 'z') ADVANCE(465);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_brge);
      if (lookahead == 'z') ADVANCE(466);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_brgt);
      if (lookahead == 'z') ADVANCE(467);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_brle);
      if (lookahead == 'z') ADVANCE(468);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_brlt);
      if (lookahead == 'z') ADVANCE(469);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_brna);
      if (lookahead == 'z') ADVANCE(470);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_brne);
      if (lookahead == 'z') ADVANCE(471);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_ceil);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_peek);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_sapz);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_sdns);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_sdse);
      END_STATE();
    case 374:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_seqz);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_sgez);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_sgtz);
      END_STATE();
    case 378:
      if (lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_slez);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_sltz);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_snaz);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_snez);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_sqrt);
      END_STATE();
    case 384:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(479);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 389:
      if (lookahead == 'M') ADVANCE(483);
      END_STATE();
    case 390:
      if (lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 393:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(488);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 400:
      if (lookahead == 'W') ADVANCE(493);
      END_STATE();
    case 401:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 403:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 410:
      if (lookahead == 'u') ADVANCE(500);
      END_STATE();
    case 411:
      if (lookahead == 'b') ADVANCE(501);
      END_STATE();
    case 412:
      if (lookahead == 'u') ADVANCE(502);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'E') ADVANCE(507);
      if (lookahead == 'G') ADVANCE(508);
      if (lookahead == 'H') ADVANCE(509);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'A') ADVANCE(511);
      if (lookahead == 'G') ADVANCE(512);
      if (lookahead == 'P') ADVANCE(513);
      if (lookahead == 'R') ADVANCE(514);
      END_STATE();
    case 420:
      if (lookahead == 'b') ADVANCE(515);
      END_STATE();
    case 421:
      if (lookahead == 'u') ADVANCE(516);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'C') ADVANCE(518);
      if (lookahead == 'N') ADVANCE(519);
      if (lookahead == 'O') ADVANCE(520);
      if (lookahead == 'P') ADVANCE(521);
      if (lookahead == 'V') ADVANCE(522);
      if (lookahead == 'W') ADVANCE(523);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(530);
      END_STATE();
    case 431:
      if (lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 432:
      if (lookahead == 'A') ADVANCE(532);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(534);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 437:
      if (lookahead == 'M') ADVANCE(536);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 439:
      if (lookahead == 'c') ADVANCE(538);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 441:
      if (lookahead == 'R') ADVANCE(539);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(540);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_bapal);
      END_STATE();
    case 445:
      if (lookahead == 'l') ADVANCE(541);
      END_STATE();
    case 446:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 447:
      if (lookahead == 'l') ADVANCE(543);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_beqal);
      END_STATE();
    case 449:
      if (lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_bgeal);
      END_STATE();
    case 451:
      if (lookahead == 'l') ADVANCE(545);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_bgtal);
      END_STATE();
    case 453:
      if (lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_bleal);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(547);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_bltal);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(548);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_bnaal);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_bneal);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_brapz);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_brdns);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_brdse);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_breqz);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_brgez);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_brgtz);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_brlez);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_brltz);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_brnaz);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_brnez);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_floor);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_round);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_sleep);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_trunc);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'R') ADVANCE(555);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(563);
      END_STATE();
    case 491:
      if (lookahead == 'C') ADVANCE(564);
      if (lookahead == 'Q') ADVANCE(565);
      if (lookahead == 'S') ADVANCE(566);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 496:
      if (lookahead == 'C') ADVANCE(570);
      if (lookahead == 'Q') ADVANCE(571);
      if (lookahead == 'S') ADVANCE(572);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 498:
      if (lookahead == 'R') ADVANCE(574);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(577);
      END_STATE();
    case 503:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(579);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 507:
      if (lookahead == 'f') ADVANCE(582);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 509:
      if (lookahead == 'a') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 511:
      if (lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 515:
      if (lookahead == 'H') ADVANCE(591);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 518:
      if (lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 520:
      if (lookahead == 'x') ADVANCE(596);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 523:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(600);
      END_STATE();
    case 525:
      if (lookahead == 'H') ADVANCE(601);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 528:
      if (lookahead == 'F') ADVANCE(604);
      END_STATE();
    case 529:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 530:
      if (lookahead == 'g') ADVANCE(605);
      END_STATE();
    case 531:
      if (lookahead == 'I') ADVANCE(606);
      if (lookahead == 'S') ADVANCE(607);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 533:
      if (lookahead == 'P') ADVANCE(609);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 534:
      if (lookahead == 'a') ADVANCE(610);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(611);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 537:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 538:
      if (lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 540:
      if (lookahead == 'g') ADVANCE(616);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_bapzal);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_bdnsal);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_bdseal);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_beqzal);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_bgezal);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_bgtzal);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_blezal);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_bltzal);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_bnazal);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_bnezal);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 554:
      if (lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 555:
      if (lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 556:
      if (lookahead == 'm') ADVANCE(619);
      END_STATE();
    case 557:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 558:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 559:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 560:
      if (lookahead == 'R') ADVANCE(623);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 562:
      if (lookahead == 'r') ADVANCE(625);
      END_STATE();
    case 563:
      if (lookahead == 'm') ADVANCE(626);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 565:
      if (lookahead == 'u') ADVANCE(628);
      END_STATE();
    case 566:
      if (lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 571:
      if (lookahead == 'u') ADVANCE(634);
      END_STATE();
    case 572:
      if (lookahead == 'l') ADVANCE(635);
      END_STATE();
    case 573:
      if (lookahead == 'g') ADVANCE(636);
      END_STATE();
    case 574:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 576:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 577:
      if (lookahead == 'W') ADVANCE(640);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(642);
      END_STATE();
    case 580:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(643);
      END_STATE();
    case 582:
      if (lookahead == 'f') ADVANCE(644);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 584:
      if (lookahead == 's') ADVANCE(646);
      END_STATE();
    case 585:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(651);
      END_STATE();
    case 590:
      if (lookahead == 'q') ADVANCE(652);
      END_STATE();
    case 591:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 592:
      if (lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 593:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(655);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 596:
      if (lookahead == 'y') ADVANCE(657);
      END_STATE();
    case 597:
      if (lookahead == 'l') ADVANCE(658);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(659);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(660);
      END_STATE();
    case 600:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 601:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 602:
      if (lookahead == 'H') ADVANCE(662);
      END_STATE();
    case 603:
      if (lookahead == 'd') ADVANCE(663);
      END_STATE();
    case 604:
      if (lookahead == 'u') ADVANCE(664);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(665);
      if (lookahead == 'O') ADVANCE(666);
      END_STATE();
    case 606:
      if (lookahead == 'D') ADVANCE(68);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(667);
      END_STATE();
    case 608:
      if (lookahead == 'g') ADVANCE(668);
      END_STATE();
    case 609:
      if (lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 611:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 612:
      if (lookahead == 'l') ADVANCE(671);
      END_STATE();
    case 613:
      if (lookahead == 'y') ADVANCE(672);
      END_STATE();
    case 614:
      if (lookahead == 'l') ADVANCE(673);
      END_STATE();
    case 615:
      if (lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 616:
      if (lookahead == 'G') ADVANCE(675);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 620:
      if (lookahead == 'b') ADVANCE(679);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 623:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 624:
      if (lookahead == 'c') ADVANCE(683);
      END_STATE();
    case 625:
      if (lookahead == 'L') ADVANCE(684);
      if (lookahead == 'S') ADVANCE(685);
      END_STATE();
    case 626:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 627:
      if (lookahead == 'u') ADVANCE(687);
      END_STATE();
    case 628:
      if (lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(691);
      END_STATE();
    case 632:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 633:
      if (lookahead == 'u') ADVANCE(693);
      END_STATE();
    case 634:
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 636:
      if (lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 638:
      if (lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 640:
      if (lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 641:
      if (lookahead == 'h') ADVANCE(701);
      END_STATE();
    case 642:
      if (lookahead == 'H') ADVANCE(702);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 644:
      if (lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 645:
      if (lookahead == 'w') ADVANCE(705);
      END_STATE();
    case 646:
      if (lookahead == 'h') ADVANCE(706);
      END_STATE();
    case 647:
      if (lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 648:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 649:
      if (lookahead == 'u') ADVANCE(708);
      END_STATE();
    case 650:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 651:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 652:
      if (lookahead == 'u') ADVANCE(711);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'A') ADVANCE(713);
      if (lookahead == 'E') ADVANCE(714);
      if (lookahead == 'I') ADVANCE(715);
      if (lookahead == 'O') ADVANCE(716);
      if (lookahead == 'S') ADVANCE(717);
      if (lookahead == 'W') ADVANCE(718);
      END_STATE();
    case 655:
      if (lookahead == 'b') ADVANCE(719);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 657:
      if (lookahead == 'g') ADVANCE(721);
      END_STATE();
    case 658:
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 659:
      if (lookahead == 'a') ADVANCE(723);
      END_STATE();
    case 660:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 661:
      if (lookahead == 's') ADVANCE(725);
      END_STATE();
    case 662:
      if (lookahead == 'a') ADVANCE(726);
      END_STATE();
    case 663:
      if (lookahead == 'P') ADVANCE(727);
      END_STATE();
    case 664:
      if (lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 665:
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 666:
      if (lookahead == 'u') ADVANCE(730);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(731);
      END_STATE();
    case 668:
      if (lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 669:
      if (lookahead == 'd') ADVANCE(733);
      END_STATE();
    case 670:
      if (lookahead == 'u') ADVANCE(734);
      END_STATE();
    case 671:
      if (lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 672:
      if (lookahead == 'M') ADVANCE(736);
      if (lookahead == 'R') ADVANCE(737);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'R') ADVANCE(738);
      END_STATE();
    case 674:
      if (lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 675:
      if (lookahead == 'a') ADVANCE(740);
      END_STATE();
    case 676:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(741);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(742);
      END_STATE();
    case 679:
      if (lookahead == 'l') ADVANCE(743);
      END_STATE();
    case 680:
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 681:
      if (lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(746);
      END_STATE();
    case 683:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 684:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 685:
      if (lookahead == 'p') ADVANCE(748);
      END_STATE();
    case 686:
      if (lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 687:
      if (lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 688:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(752);
      END_STATE();
    case 690:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 691:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 692:
      if (lookahead == 'l') ADVANCE(753);
      END_STATE();
    case 693:
      if (lookahead == 'n') ADVANCE(754);
      END_STATE();
    case 694:
      if (lookahead == 'n') ADVANCE(755);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(756);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 697:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(759);
      END_STATE();
    case 699:
      if (lookahead == 'I') ADVANCE(760);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(761);
      END_STATE();
    case 701:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 702:
      if (lookahead == 'a') ADVANCE(763);
      END_STATE();
    case 703:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 704:
      if (lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(766);
      END_STATE();
    case 706:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(68);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(767);
      END_STATE();
    case 708:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(769);
      END_STATE();
    case 710:
      if (lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 711:
      if (lookahead == 'i') ADVANCE(771);
      END_STATE();
    case 712:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 713:
      if (lookahead == 'i') ADVANCE(772);
      END_STATE();
    case 714:
      if (lookahead == 'f') ADVANCE(773);
      if (lookahead == 'x') ADVANCE(774);
      END_STATE();
    case 715:
      if (lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 716:
      if (lookahead == 'u') ADVANCE(776);
      END_STATE();
    case 717:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 718:
      if (lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 719:
      if (lookahead == 'o') ADVANCE(779);
      END_STATE();
    case 720:
      if (lookahead == 'o') ADVANCE(780);
      END_STATE();
    case 721:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 722:
      if (lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(783);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 725:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(785);
      END_STATE();
    case 727:
      if (lookahead == 'o') ADVANCE(786);
      END_STATE();
    case 728:
      if (lookahead == 'l') ADVANCE(787);
      END_STATE();
    case 729:
      if (lookahead == 'p') ADVANCE(788);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 731:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 732:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 733:
      if (lookahead == 'I') ADVANCE(791);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(793);
      END_STATE();
    case 736:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 738:
      if (lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 739:
      if (lookahead == 'h') ADVANCE(797);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(798);
      END_STATE();
    case 741:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 742:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(800);
      if (lookahead == 'L') ADVANCE(801);
      if (lookahead == 'O') ADVANCE(802);
      END_STATE();
    case 745:
      if (lookahead == 'R') ADVANCE(803);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 747:
      if (lookahead == 'v') ADVANCE(805);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(807);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(808);
      END_STATE();
    case 752:
      if (lookahead == 'H') ADVANCE(809);
      if (lookahead == 'O') ADVANCE(810);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'R') ADVANCE(811);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(812);
      END_STATE();
    case 756:
      if (lookahead == 'H') ADVANCE(813);
      if (lookahead == 'O') ADVANCE(814);
      END_STATE();
    case 757:
      if (lookahead == 'i') ADVANCE(815);
      END_STATE();
    case 758:
      if (lookahead == 'a') ADVANCE(816);
      END_STATE();
    case 759:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 760:
      if (lookahead == 'n') ADVANCE(817);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(818);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(819);
      END_STATE();
    case 763:
      if (lookahead == 's') ADVANCE(820);
      END_STATE();
    case 764:
      if (lookahead == 'l') ADVANCE(821);
      END_STATE();
    case 765:
      if (lookahead == 'i') ADVANCE(822);
      END_STATE();
    case 766:
      if (lookahead == 'h') ADVANCE(823);
      END_STATE();
    case 767:
      if (lookahead == 'h') ADVANCE(824);
      END_STATE();
    case 768:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 769:
      if (lookahead == 'a') ADVANCE(825);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(826);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 773:
      if (lookahead == 'f') ADVANCE(828);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(829);
      END_STATE();
    case 775:
      if (lookahead == 'p') ADVANCE(830);
      if (lookahead == 't') ADVANCE(831);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 778:
      if (lookahead == 's') ADVANCE(834);
      END_STATE();
    case 779:
      if (lookahead == 'n') ADVANCE(835);
      END_STATE();
    case 780:
      if (lookahead == 'g') ADVANCE(836);
      if (lookahead == 'u') ADVANCE(837);
      END_STATE();
    case 781:
      if (lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(839);
      END_STATE();
    case 783:
      if (lookahead == 'i') ADVANCE(840);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(841);
      if (lookahead == 'O') ADVANCE(842);
      END_STATE();
    case 785:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 786:
      if (lookahead == 'w') ADVANCE(843);
      END_STATE();
    case 787:
      if (lookahead == 'C') ADVANCE(844);
      END_STATE();
    case 788:
      if (lookahead == 'u') ADVANCE(845);
      END_STATE();
    case 789:
      if (lookahead == 'p') ADVANCE(846);
      END_STATE();
    case 790:
      if (lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 791:
      if (lookahead == 'n') ADVANCE(848);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(850);
      if (lookahead == 'O') ADVANCE(851);
      END_STATE();
    case 794:
      if (lookahead == 'g') ADVANCE(852);
      END_STATE();
    case 795:
      if (lookahead == 'l') ADVANCE(853);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(854);
      END_STATE();
    case 797:
      if (lookahead == 'i') ADVANCE(855);
      END_STATE();
    case 798:
      if (lookahead == 'E') ADVANCE(856);
      END_STATE();
    case 799:
      if (lookahead == 'G') ADVANCE(857);
      END_STATE();
    case 800:
      if (lookahead == 'n') ADVANCE(858);
      END_STATE();
    case 801:
      if (lookahead == 'i') ADVANCE(859);
      END_STATE();
    case 802:
      if (lookahead == 'u') ADVANCE(860);
      END_STATE();
    case 803:
      if (lookahead == 'a') ADVANCE(861);
      END_STATE();
    case 804:
      if (lookahead == 'a') ADVANCE(862);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(863);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 807:
      if (lookahead == 'E') ADVANCE(865);
      END_STATE();
    case 808:
      if (lookahead == 'i') ADVANCE(866);
      END_STATE();
    case 809:
      if (lookahead == 'a') ADVANCE(867);
      END_STATE();
    case 810:
      if (lookahead == 'c') ADVANCE(868);
      END_STATE();
    case 811:
      if (lookahead == 'a') ADVANCE(869);
      END_STATE();
    case 812:
      if (lookahead == 'i') ADVANCE(870);
      END_STATE();
    case 813:
      if (lookahead == 'a') ADVANCE(871);
      END_STATE();
    case 814:
      if (lookahead == 'c') ADVANCE(872);
      END_STATE();
    case 815:
      if (lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 816:
      if (lookahead == 'r') ADVANCE(874);
      END_STATE();
    case 817:
      if (lookahead == 'Q') ADVANCE(875);
      if (lookahead == 'V') ADVANCE(876);
      END_STATE();
    case 818:
      if (lookahead == 's') ADVANCE(877);
      END_STATE();
    case 819:
      if (lookahead == 'E') ADVANCE(878);
      END_STATE();
    case 820:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 821:
      if (lookahead == 'T') ADVANCE(879);
      END_STATE();
    case 822:
      if (lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 823:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(68);
      END_STATE();
    case 824:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(68);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(881);
      END_STATE();
    case 826:
      if (lookahead == 'i') ADVANCE(882);
      END_STATE();
    case 827:
      if (lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 828:
      if (lookahead == 'i') ADVANCE(884);
      END_STATE();
    case 829:
      if (lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 830:
      if (lookahead == 'u') ADVANCE(886);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 832:
      if (lookahead == 'p') ADVANCE(888);
      END_STATE();
    case 833:
      if (lookahead == 't') ADVANCE(889);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(890);
      END_STATE();
    case 835:
      if (lookahead == 'D') ADVANCE(891);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 837:
      if (lookahead == 's') ADVANCE(893);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(894);
      if (lookahead == 'O') ADVANCE(895);
      END_STATE();
    case 839:
      if (lookahead == 'a') ADVANCE(896);
      END_STATE();
    case 840:
      if (lookahead == 'l') ADVANCE(897);
      END_STATE();
    case 841:
      if (lookahead == 'n') ADVANCE(898);
      END_STATE();
    case 842:
      if (lookahead == 'u') ADVANCE(899);
      END_STATE();
    case 843:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 844:
      if (lookahead == 'o') ADVANCE(901);
      END_STATE();
    case 845:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 846:
      if (lookahead == 'u') ADVANCE(902);
      END_STATE();
    case 847:
      if (lookahead == 'g') ADVANCE(903);
      END_STATE();
    case 848:
      if (lookahead == 'd') ADVANCE(904);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'D') ADVANCE(905);
      if (lookahead == 'E') ADVANCE(906);
      if (lookahead == 'I') ADVANCE(907);
      if (lookahead == 'O') ADVANCE(908);
      if (lookahead == 'S') ADVANCE(909);
      END_STATE();
    case 850:
      if (lookahead == 'n') ADVANCE(910);
      END_STATE();
    case 851:
      if (lookahead == 'u') ADVANCE(911);
      END_STATE();
    case 852:
      if (lookahead == 'n') ADVANCE(912);
      END_STATE();
    case 853:
      if (lookahead == 'a') ADVANCE(913);
      END_STATE();
    case 854:
      if (lookahead == 'i') ADVANCE(914);
      END_STATE();
    case 855:
      if (lookahead == 'n') ADVANCE(915);
      END_STATE();
    case 856:
      if (lookahead == 'f') ADVANCE(916);
      END_STATE();
    case 857:
      if (lookahead == 'o') ADVANCE(917);
      END_STATE();
    case 858:
      if (lookahead == 'p') ADVANCE(918);
      END_STATE();
    case 859:
      if (lookahead == 'm') ADVANCE(919);
      END_STATE();
    case 860:
      if (lookahead == 't') ADVANCE(920);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 862:
      if (lookahead == 'r') ADVANCE(922);
      END_STATE();
    case 863:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 864:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 865:
      if (lookahead == 'f') ADVANCE(923);
      END_STATE();
    case 866:
      if (lookahead == 't') ADVANCE(924);
      END_STATE();
    case 867:
      if (lookahead == 's') ADVANCE(925);
      END_STATE();
    case 868:
      if (lookahead == 'c') ADVANCE(926);
      END_STATE();
    case 869:
      if (lookahead == 't') ADVANCE(927);
      END_STATE();
    case 870:
      if (lookahead == 't') ADVANCE(928);
      END_STATE();
    case 871:
      if (lookahead == 's') ADVANCE(929);
      END_STATE();
    case 872:
      if (lookahead == 'c') ADVANCE(930);
      END_STATE();
    case 873:
      if (lookahead == 'n') ADVANCE(931);
      END_STATE();
    case 874:
      if (lookahead == 'c') ADVANCE(932);
      END_STATE();
    case 875:
      if (lookahead == 'u') ADVANCE(933);
      END_STATE();
    case 876:
      if (lookahead == 'i') ADVANCE(934);
      END_STATE();
    case 877:
      if (lookahead == 'T') ADVANCE(935);
      END_STATE();
    case 878:
      if (lookahead == 'v') ADVANCE(936);
      END_STATE();
    case 879:
      if (lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 880:
      if (lookahead == 'n') ADVANCE(938);
      END_STATE();
    case 881:
      if (lookahead == 'i') ADVANCE(939);
      END_STATE();
    case 882:
      if (lookahead == 'a') ADVANCE(940);
      END_STATE();
    case 883:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 884:
      if (lookahead == 'c') ADVANCE(941);
      END_STATE();
    case 885:
      if (lookahead == 'r') ADVANCE(942);
      END_STATE();
    case 886:
      if (lookahead == 't') ADVANCE(943);
      END_STATE();
    case 887:
      if (lookahead == 'r') ADVANCE(944);
      END_STATE();
    case 888:
      if (lookahead == 'u') ADVANCE(945);
      END_STATE();
    case 889:
      if (lookahead == 'i') ADVANCE(946);
      END_STATE();
    case 890:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 891:
      if (lookahead == 'i') ADVANCE(947);
      END_STATE();
    case 892:
      if (lookahead == 'n') ADVANCE(948);
      END_STATE();
    case 893:
      if (lookahead == 'O') ADVANCE(949);
      END_STATE();
    case 894:
      if (lookahead == 'n') ADVANCE(950);
      END_STATE();
    case 895:
      if (lookahead == 'u') ADVANCE(951);
      END_STATE();
    case 896:
      if (lookahead == 'n') ADVANCE(952);
      END_STATE();
    case 897:
      if (lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 898:
      if (lookahead == 'p') ADVANCE(954);
      END_STATE();
    case 899:
      if (lookahead == 't') ADVANCE(955);
      END_STATE();
    case 900:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 901:
      if (lookahead == 's') ADVANCE(956);
      END_STATE();
    case 902:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 903:
      if (lookahead == 't') ADVANCE(957);
      END_STATE();
    case 904:
      if (lookahead == 'e') ADVANCE(958);
      END_STATE();
    case 905:
      if (lookahead == 'i') ADVANCE(959);
      END_STATE();
    case 906:
      if (lookahead == 'x') ADVANCE(960);
      END_STATE();
    case 907:
      if (lookahead == 'n') ADVANCE(961);
      END_STATE();
    case 908:
      if (lookahead == 'u') ADVANCE(962);
      END_STATE();
    case 909:
      if (lookahead == 'e') ADVANCE(963);
      END_STATE();
    case 910:
      if (lookahead == 'p') ADVANCE(964);
      END_STATE();
    case 911:
      if (lookahead == 't') ADVANCE(965);
      END_STATE();
    case 912:
      if (lookahead == 'i') ADVANCE(966);
      END_STATE();
    case 913:
      if (lookahead == 't') ADVANCE(967);
      END_STATE();
    case 914:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 915:
      if (lookahead == 'g') ADVANCE(968);
      END_STATE();
    case 916:
      if (lookahead == 'f') ADVANCE(969);
      END_STATE();
    case 917:
      if (lookahead == 'o') ADVANCE(970);
      END_STATE();
    case 918:
      if (lookahead == 'u') ADVANCE(971);
      END_STATE();
    case 919:
      if (lookahead == 'i') ADVANCE(972);
      END_STATE();
    case 920:
      if (lookahead == 'p') ADVANCE(973);
      END_STATE();
    case 921:
      if (lookahead == 'i') ADVANCE(974);
      END_STATE();
    case 922:
      if (lookahead == 'c') ADVANCE(975);
      END_STATE();
    case 923:
      if (lookahead == 'f') ADVANCE(976);
      END_STATE();
    case 924:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 925:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 926:
      if (lookahead == 'u') ADVANCE(977);
      END_STATE();
    case 927:
      if (lookahead == 'i') ADVANCE(978);
      END_STATE();
    case 928:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 929:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 930:
      if (lookahead == 'u') ADVANCE(979);
      END_STATE();
    case 931:
      if (lookahead == 'P') ADVANCE(980);
      END_STATE();
    case 932:
      if (lookahead == 'h') ADVANCE(981);
      END_STATE();
    case 933:
      if (lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 934:
      if (lookahead == 'c') ADVANCE(983);
      END_STATE();
    case 935:
      if (lookahead == 'o') ADVANCE(984);
      END_STATE();
    case 936:
      if (lookahead == 'e') ADVANCE(985);
      END_STATE();
    case 937:
      if (lookahead == 'm') ADVANCE(986);
      END_STATE();
    case 938:
      if (lookahead == 'c') ADVANCE(987);
      END_STATE();
    case 939:
      if (lookahead == 'o') ADVANCE(988);
      END_STATE();
    case 940:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 941:
      if (lookahead == 'i') ADVANCE(989);
      END_STATE();
    case 942:
      if (lookahead == 'n') ADVANCE(990);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 944:
      if (lookahead == 'n') ADVANCE(991);
      END_STATE();
    case 945:
      if (lookahead == 't') ADVANCE(992);
      END_STATE();
    case 946:
      if (lookahead == 'n') ADVANCE(993);
      END_STATE();
    case 947:
      if (lookahead == 'o') ADVANCE(994);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(995);
      if (lookahead == 'O') ADVANCE(996);
      END_STATE();
    case 949:
      if (lookahead == 'x') ADVANCE(997);
      END_STATE();
    case 950:
      if (lookahead == 'p') ADVANCE(998);
      END_STATE();
    case 951:
      if (lookahead == 't') ADVANCE(999);
      END_STATE();
    case 952:
      if (lookahead == 't') ADVANCE(1000);
      END_STATE();
    case 953:
      if (lookahead == 's') ADVANCE(1001);
      END_STATE();
    case 954:
      if (lookahead == 'u') ADVANCE(1002);
      END_STATE();
    case 955:
      if (lookahead == 'p') ADVANCE(1003);
      END_STATE();
    case 956:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 957:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 958:
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 959:
      if (lookahead == 'f') ADVANCE(1004);
      END_STATE();
    case 960:
      if (lookahead == 't') ADVANCE(1005);
      END_STATE();
    case 961:
      if (lookahead == 'p') ADVANCE(1006);
      END_STATE();
    case 962:
      if (lookahead == 't') ADVANCE(1007);
      END_STATE();
    case 963:
      if (lookahead == 't') ADVANCE(1008);
      END_STATE();
    case 964:
      if (lookahead == 'u') ADVANCE(1009);
      END_STATE();
    case 965:
      if (lookahead == 'p') ADVANCE(1010);
      END_STATE();
    case 966:
      if (lookahead == 't') ADVANCE(1011);
      END_STATE();
    case 967:
      if (lookahead == 'i') ADVANCE(1012);
      END_STATE();
    case 968:
      if (lookahead == 'C') ADVANCE(1013);
      END_STATE();
    case 969:
      if (lookahead == 'i') ADVANCE(1014);
      END_STATE();
    case 970:
      if (lookahead == 'd') ADVANCE(1015);
      END_STATE();
    case 971:
      if (lookahead == 't') ADVANCE(1016);
      END_STATE();
    case 972:
      if (lookahead == 't') ADVANCE(1017);
      END_STATE();
    case 973:
      if (lookahead == 'u') ADVANCE(1018);
      END_STATE();
    case 974:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 975:
      if (lookahead == 'h') ADVANCE(1019);
      END_STATE();
    case 976:
      if (lookahead == 'i') ADVANCE(1020);
      END_STATE();
    case 977:
      if (lookahead == 'p') ADVANCE(1021);
      END_STATE();
    case 978:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 979:
      if (lookahead == 'p') ADVANCE(1022);
      END_STATE();
    case 980:
      if (lookahead == 'r') ADVANCE(1023);
      END_STATE();
    case 981:
      if (lookahead == 'R') ADVANCE(1024);
      END_STATE();
    case 982:
      if (lookahead == 'u') ADVANCE(1025);
      END_STATE();
    case 983:
      if (lookahead == 'i') ADVANCE(1026);
      END_STATE();
    case 984:
      if (lookahead == 'C') ADVANCE(1027);
      END_STATE();
    case 985:
      if (lookahead == 'n') ADVANCE(1028);
      END_STATE();
    case 986:
      if (lookahead == 'p') ADVANCE(1029);
      END_STATE();
    case 987:
      if (lookahead == 'y') ADVANCE(1030);
      END_STATE();
    case 988:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 989:
      if (lookahead == 'e') ADVANCE(1031);
      END_STATE();
    case 990:
      if (lookahead == 'a') ADVANCE(1032);
      END_STATE();
    case 991:
      if (lookahead == 'a') ADVANCE(1033);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 993:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 994:
      if (lookahead == 'x') ADVANCE(1034);
      END_STATE();
    case 995:
      if (lookahead == 'n') ADVANCE(1035);
      END_STATE();
    case 996:
      if (lookahead == 'u') ADVANCE(1036);
      END_STATE();
    case 997:
      if (lookahead == 'i') ADVANCE(1037);
      END_STATE();
    case 998:
      if (lookahead == 'u') ADVANCE(1038);
      END_STATE();
    case 999:
      if (lookahead == 'p') ADVANCE(1039);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1040);
      if (lookahead == 'O') ADVANCE(1041);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1042);
      if (lookahead == 'O') ADVANCE(1043);
      END_STATE();
    case 1002:
      if (lookahead == 't') ADVANCE(1044);
      END_STATE();
    case 1003:
      if (lookahead == 'u') ADVANCE(1045);
      END_STATE();
    case 1004:
      if (lookahead == 'f') ADVANCE(1046);
      END_STATE();
    case 1005:
      if (lookahead == 'e') ADVANCE(1047);
      END_STATE();
    case 1006:
      if (lookahead == 'u') ADVANCE(1048);
      END_STATE();
    case 1007:
      if (lookahead == 'p') ADVANCE(1049);
      END_STATE();
    case 1008:
      if (lookahead == 't') ADVANCE(1050);
      END_STATE();
    case 1009:
      if (lookahead == 't') ADVANCE(1051);
      END_STATE();
    case 1010:
      if (lookahead == 'u') ADVANCE(1052);
      END_STATE();
    case 1011:
      if (lookahead == 'u') ADVANCE(1053);
      END_STATE();
    case 1012:
      if (lookahead == 'v') ADVANCE(1054);
      END_STATE();
    case 1013:
      if (lookahead == 'o') ADVANCE(1055);
      END_STATE();
    case 1014:
      if (lookahead == 'c') ADVANCE(1056);
      END_STATE();
    case 1015:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1017:
      if (lookahead == 'e') ADVANCE(1057);
      END_STATE();
    case 1018:
      if (lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 1019:
      if (lookahead == 'P') ADVANCE(1059);
      END_STATE();
    case 1020:
      if (lookahead == 'c') ADVANCE(1060);
      END_STATE();
    case 1021:
      if (lookahead == 'a') ADVANCE(1061);
      END_STATE();
    case 1022:
      if (lookahead == 'a') ADVANCE(1062);
      END_STATE();
    case 1023:
      if (lookahead == 'o') ADVANCE(1063);
      END_STATE();
    case 1024:
      if (lookahead == 'e') ADVANCE(1064);
      END_STATE();
    case 1025:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 1026:
      if (lookahead == 'n') ADVANCE(1065);
      END_STATE();
    case 1027:
      if (lookahead == 'o') ADVANCE(1066);
      END_STATE();
    case 1028:
      if (lookahead == 't') ADVANCE(1067);
      END_STATE();
    case 1029:
      if (lookahead == 'e') ADVANCE(1068);
      END_STATE();
    case 1030:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(68);
      END_STATE();
    case 1031:
      if (lookahead == 'n') ADVANCE(1069);
      END_STATE();
    case 1032:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 1033:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 1034:
      if (lookahead == 'i') ADVANCE(1070);
      END_STATE();
    case 1035:
      if (lookahead == 'p') ADVANCE(1071);
      END_STATE();
    case 1036:
      if (lookahead == 't') ADVANCE(1072);
      END_STATE();
    case 1037:
      if (lookahead == 'd') ADVANCE(1073);
      END_STATE();
    case 1038:
      if (lookahead == 't') ADVANCE(1074);
      END_STATE();
    case 1039:
      if (lookahead == 'u') ADVANCE(1075);
      END_STATE();
    case 1040:
      if (lookahead == 'n') ADVANCE(1076);
      END_STATE();
    case 1041:
      if (lookahead == 'u') ADVANCE(1077);
      END_STATE();
    case 1042:
      if (lookahead == 'n') ADVANCE(1078);
      END_STATE();
    case 1043:
      if (lookahead == 'u') ADVANCE(1079);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1045:
      if (lookahead == 't') ADVANCE(1080);
      END_STATE();
    case 1046:
      if (lookahead == 'e') ADVANCE(1081);
      END_STATE();
    case 1047:
      if (lookahead == 'r') ADVANCE(1082);
      END_STATE();
    case 1048:
      if (lookahead == 't') ADVANCE(1083);
      END_STATE();
    case 1049:
      if (lookahead == 'u') ADVANCE(1084);
      END_STATE();
    case 1050:
      if (lookahead == 'i') ADVANCE(1085);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1052:
      if (lookahead == 't') ADVANCE(1086);
      END_STATE();
    case 1053:
      if (lookahead == 'd') ADVANCE(1087);
      END_STATE();
    case 1054:
      if (lookahead == 'e') ADVANCE(1088);
      END_STATE();
    case 1055:
      if (lookahead == 'n') ADVANCE(1089);
      END_STATE();
    case 1056:
      if (lookahead == 'i') ADVANCE(1090);
      END_STATE();
    case 1057:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1059:
      if (lookahead == 'o') ADVANCE(1091);
      END_STATE();
    case 1060:
      if (lookahead == 'i') ADVANCE(1092);
      END_STATE();
    case 1061:
      if (lookahead == 'n') ADVANCE(1093);
      END_STATE();
    case 1062:
      if (lookahead == 'n') ADVANCE(1094);
      END_STATE();
    case 1063:
      if (lookahead == 'g') ADVANCE(1095);
      END_STATE();
    case 1064:
      if (lookahead == 'q') ADVANCE(1096);
      END_STATE();
    case 1065:
      if (lookahead == 'i') ADVANCE(1097);
      END_STATE();
    case 1066:
      if (lookahead == 'n') ADVANCE(1098);
      END_STATE();
    case 1067:
      if (lookahead == 'T') ADVANCE(1099);
      END_STATE();
    case 1068:
      if (lookahead == 'r') ADVANCE(1100);
      END_STATE();
    case 1069:
      if (lookahead == 'c') ADVANCE(1101);
      END_STATE();
    case 1070:
      if (lookahead == 'd') ADVANCE(1102);
      END_STATE();
    case 1071:
      if (lookahead == 'u') ADVANCE(1103);
      END_STATE();
    case 1072:
      if (lookahead == 'p') ADVANCE(1104);
      END_STATE();
    case 1073:
      if (lookahead == 'e') ADVANCE(1105);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1075:
      if (lookahead == 't') ADVANCE(1106);
      END_STATE();
    case 1076:
      if (lookahead == 'p') ADVANCE(1107);
      END_STATE();
    case 1077:
      if (lookahead == 't') ADVANCE(1108);
      END_STATE();
    case 1078:
      if (lookahead == 'p') ADVANCE(1109);
      END_STATE();
    case 1079:
      if (lookahead == 't') ADVANCE(1110);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1081:
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 1082:
      if (lookahead == 'n') ADVANCE(1112);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1084:
      if (lookahead == 't') ADVANCE(1113);
      END_STATE();
    case 1085:
      if (lookahead == 'n') ADVANCE(1114);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1087:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 1088:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 1089:
      if (lookahead == 't') ADVANCE(1115);
      END_STATE();
    case 1090:
      if (lookahead == 'e') ADVANCE(1116);
      END_STATE();
    case 1091:
      if (lookahead == 'd') ADVANCE(1117);
      END_STATE();
    case 1092:
      if (lookahead == 'e') ADVANCE(1118);
      END_STATE();
    case 1093:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 1094:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 1095:
      if (lookahead == 'r') ADVANCE(1119);
      END_STATE();
    case 1096:
      if (lookahead == 'u') ADVANCE(1120);
      END_STATE();
    case 1097:
      if (lookahead == 't') ADVANCE(1121);
      END_STATE();
    case 1098:
      if (lookahead == 't') ADVANCE(1122);
      END_STATE();
    case 1099:
      if (lookahead == 'i') ADVANCE(1123);
      END_STATE();
    case 1100:
      if (lookahead == 'a') ADVANCE(1124);
      END_STATE();
    case 1101:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 1102:
      if (lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 1103:
      if (lookahead == 't') ADVANCE(1126);
      END_STATE();
    case 1104:
      if (lookahead == 'u') ADVANCE(1127);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1128);
      if (lookahead == 'O') ADVANCE(1129);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1107:
      if (lookahead == 'u') ADVANCE(1130);
      END_STATE();
    case 1108:
      if (lookahead == 'p') ADVANCE(1131);
      END_STATE();
    case 1109:
      if (lookahead == 'u') ADVANCE(1132);
      END_STATE();
    case 1110:
      if (lookahead == 'p') ADVANCE(1133);
      END_STATE();
    case 1111:
      if (lookahead == 'e') ADVANCE(1134);
      END_STATE();
    case 1112:
      if (lookahead == 'a') ADVANCE(1135);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1114:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 1115:
      if (lookahead == 'a') ADVANCE(1136);
      END_STATE();
    case 1116:
      if (lookahead == 'n') ADVANCE(1137);
      END_STATE();
    case 1117:
      if (lookahead == 'T') ADVANCE(1138);
      END_STATE();
    case 1118:
      if (lookahead == 'n') ADVANCE(1139);
      END_STATE();
    case 1119:
      if (lookahead == 'e') ADVANCE(1140);
      END_STATE();
    case 1120:
      if (lookahead == 'i') ADVANCE(1141);
      END_STATE();
    case 1121:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 1122:
      if (lookahead == 'a') ADVANCE(1142);
      END_STATE();
    case 1123:
      if (lookahead == 'm') ADVANCE(1143);
      END_STATE();
    case 1124:
      if (lookahead == 't') ADVANCE(1144);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1145);
      if (lookahead == 'O') ADVANCE(1146);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1127:
      if (lookahead == 't') ADVANCE(1147);
      END_STATE();
    case 1128:
      if (lookahead == 'n') ADVANCE(1148);
      END_STATE();
    case 1129:
      if (lookahead == 'u') ADVANCE(1149);
      END_STATE();
    case 1130:
      if (lookahead == 't') ADVANCE(1150);
      END_STATE();
    case 1131:
      if (lookahead == 'u') ADVANCE(1151);
      END_STATE();
    case 1132:
      if (lookahead == 't') ADVANCE(1152);
      END_STATE();
    case 1133:
      if (lookahead == 'u') ADVANCE(1153);
      END_STATE();
    case 1134:
      if (lookahead == 'n') ADVANCE(1154);
      END_STATE();
    case 1135:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 1136:
      if (lookahead == 'c') ADVANCE(1155);
      END_STATE();
    case 1137:
      if (lookahead == 'c') ADVANCE(1156);
      END_STATE();
    case 1138:
      if (lookahead == 'y') ADVANCE(1157);
      END_STATE();
    case 1139:
      if (lookahead == 'c') ADVANCE(1158);
      END_STATE();
    case 1140:
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 1141:
      if (lookahead == 'r') ADVANCE(1160);
      END_STATE();
    case 1142:
      if (lookahead == 'c') ADVANCE(1161);
      END_STATE();
    case 1143:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 1144:
      if (lookahead == 'u') ADVANCE(1162);
      END_STATE();
    case 1145:
      if (lookahead == 'n') ADVANCE(1163);
      END_STATE();
    case 1146:
      if (lookahead == 'u') ADVANCE(1164);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1148:
      if (lookahead == 'p') ADVANCE(1165);
      END_STATE();
    case 1149:
      if (lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1151:
      if (lookahead == 't') ADVANCE(1167);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1153:
      if (lookahead == 't') ADVANCE(1168);
      END_STATE();
    case 1154:
      if (lookahead == 't') ADVANCE(1169);
      END_STATE();
    case 1155:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 1156:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 1157:
      if (lookahead == 'p') ADVANCE(1170);
      END_STATE();
    case 1158:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 1159:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 1160:
      if (lookahead == 'e') ADVANCE(1171);
      END_STATE();
    case 1161:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 1162:
      if (lookahead == 'r') ADVANCE(1172);
      END_STATE();
    case 1163:
      if (lookahead == 'p') ADVANCE(1173);
      END_STATE();
    case 1164:
      if (lookahead == 't') ADVANCE(1174);
      END_STATE();
    case 1165:
      if (lookahead == 'u') ADVANCE(1175);
      END_STATE();
    case 1166:
      if (lookahead == 'p') ADVANCE(1176);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1169:
      if (lookahead == 'i') ADVANCE(1177);
      END_STATE();
    case 1170:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 1171:
      if (lookahead == 'd') ADVANCE(1178);
      END_STATE();
    case 1172:
      if (lookahead == 'e') ADVANCE(1179);
      END_STATE();
    case 1173:
      if (lookahead == 'u') ADVANCE(1180);
      END_STATE();
    case 1174:
      if (lookahead == 'p') ADVANCE(1181);
      END_STATE();
    case 1175:
      if (lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 1176:
      if (lookahead == 'u') ADVANCE(1183);
      END_STATE();
    case 1177:
      if (lookahead == 'a') ADVANCE(1184);
      END_STATE();
    case 1178:
      if (lookahead == 'P') ADVANCE(1185);
      END_STATE();
    case 1179:
      if (lookahead == 'E') ADVANCE(1186);
      END_STATE();
    case 1180:
      if (lookahead == 't') ADVANCE(1187);
      END_STATE();
    case 1181:
      if (lookahead == 'u') ADVANCE(1188);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1183:
      if (lookahead == 't') ADVANCE(1189);
      END_STATE();
    case 1184:
      if (lookahead == 'l') ADVANCE(1190);
      END_STATE();
    case 1185:
      if (lookahead == 'o') ADVANCE(1191);
      END_STATE();
    case 1186:
      if (lookahead == 'f') ADVANCE(1192);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1188:
      if (lookahead == 't') ADVANCE(1193);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1190:
      if (lookahead == 'E') ADVANCE(1194);
      END_STATE();
    case 1191:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 1192:
      if (lookahead == 'f') ADVANCE(1195);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 1194:
      if (lookahead == 'f') ADVANCE(1196);
      END_STATE();
    case 1195:
      if (lookahead == 'i') ADVANCE(1197);
      END_STATE();
    case 1196:
      if (lookahead == 'f') ADVANCE(1198);
      END_STATE();
    case 1197:
      if (lookahead == 'c') ADVANCE(1199);
      END_STATE();
    case 1198:
      if (lookahead == 'i') ADVANCE(1200);
      END_STATE();
    case 1199:
      if (lookahead == 'i') ADVANCE(1201);
      END_STATE();
    case 1200:
      if (lookahead == 'c') ADVANCE(1202);
      END_STATE();
    case 1201:
      if (lookahead == 'e') ADVANCE(1203);
      END_STATE();
    case 1202:
      if (lookahead == 'i') ADVANCE(1204);
      END_STATE();
    case 1203:
      if (lookahead == 'n') ADVANCE(1205);
      END_STATE();
    case 1204:
      if (lookahead == 'e') ADVANCE(1206);
      END_STATE();
    case 1205:
      if (lookahead == 'c') ADVANCE(1207);
      END_STATE();
    case 1206:
      if (lookahead == 'n') ADVANCE(1208);
      END_STATE();
    case 1207:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 1208:
      if (lookahead == 'c') ADVANCE(1209);
      END_STATE();
    case 1209:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_device] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_ls] = ACTIONS(1),
    [anon_sym_lr] = ACTIONS(1),
    [anon_sym_sb] = ACTIONS(1),
    [anon_sym_lb] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_sdse] = ACTIONS(1),
    [anon_sym_sdns] = ACTIONS(1),
    [anon_sym_slt] = ACTIONS(1),
    [anon_sym_sgt] = ACTIONS(1),
    [anon_sym_sle] = ACTIONS(1),
    [anon_sym_sge] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_sne] = ACTIONS(1),
    [anon_sym_sap] = ACTIONS(1),
    [anon_sym_sna] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_nor] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_j] = ACTIONS(1),
    [anon_sym_bltz] = ACTIONS(1),
    [anon_sym_bgez] = ACTIONS(1),
    [anon_sym_blez] = ACTIONS(1),
    [anon_sym_bgtz] = ACTIONS(1),
    [anon_sym_bdse] = ACTIONS(1),
    [anon_sym_bdns] = ACTIONS(1),
    [anon_sym_beq] = ACTIONS(1),
    [anon_sym_bne] = ACTIONS(1),
    [anon_sym_bap] = ACTIONS(1),
    [anon_sym_bna] = ACTIONS(1),
    [anon_sym_jal] = ACTIONS(1),
    [anon_sym_brdse] = ACTIONS(1),
    [anon_sym_brdns] = ACTIONS(1),
    [anon_sym_bltzal] = ACTIONS(1),
    [anon_sym_bgezal] = ACTIONS(1),
    [anon_sym_blezal] = ACTIONS(1),
    [anon_sym_bgtzal] = ACTIONS(1),
    [anon_sym_beqal] = ACTIONS(1),
    [anon_sym_bneal] = ACTIONS(1),
    [anon_sym_jr] = ACTIONS(1),
    [anon_sym_bdseal] = ACTIONS(1),
    [anon_sym_bdnsal] = ACTIONS(1),
    [anon_sym_brltz] = ACTIONS(1),
    [anon_sym_brgez] = ACTIONS(1),
    [anon_sym_brlez] = ACTIONS(1),
    [anon_sym_brgtz] = ACTIONS(1),
    [anon_sym_breq] = ACTIONS(1),
    [anon_sym_brne] = ACTIONS(1),
    [anon_sym_brap] = ACTIONS(1),
    [anon_sym_brna] = ACTIONS(1),
    [anon_sym_sqrt] = ACTIONS(1),
    [anon_sym_round] = ACTIONS(1),
    [anon_sym_trunc] = ACTIONS(1),
    [anon_sym_ceil] = ACTIONS(1),
    [anon_sym_floor] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_abs] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [anon_sym_exp] = ACTIONS(1),
    [anon_sym_rand] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_peek] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_hcf] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_blt] = ACTIONS(1),
    [anon_sym_bgt] = ACTIONS(1),
    [anon_sym_ble] = ACTIONS(1),
    [anon_sym_bge] = ACTIONS(1),
    [anon_sym_brlt] = ACTIONS(1),
    [anon_sym_brgt] = ACTIONS(1),
    [anon_sym_brle] = ACTIONS(1),
    [anon_sym_brge] = ACTIONS(1),
    [anon_sym_bltal] = ACTIONS(1),
    [anon_sym_bgtal] = ACTIONS(1),
    [anon_sym_bleal] = ACTIONS(1),
    [anon_sym_bgeal] = ACTIONS(1),
    [anon_sym_bapal] = ACTIONS(1),
    [anon_sym_bnaal] = ACTIONS(1),
    [anon_sym_beqz] = ACTIONS(1),
    [anon_sym_bnez] = ACTIONS(1),
    [anon_sym_bapz] = ACTIONS(1),
    [anon_sym_bnaz] = ACTIONS(1),
    [anon_sym_breqz] = ACTIONS(1),
    [anon_sym_brnez] = ACTIONS(1),
    [anon_sym_brapz] = ACTIONS(1),
    [anon_sym_brnaz] = ACTIONS(1),
    [anon_sym_beqzal] = ACTIONS(1),
    [anon_sym_bnezal] = ACTIONS(1),
    [anon_sym_bapzal] = ACTIONS(1),
    [anon_sym_bnazal] = ACTIONS(1),
    [anon_sym_sltz] = ACTIONS(1),
    [anon_sym_sgtz] = ACTIONS(1),
    [anon_sym_slez] = ACTIONS(1),
    [anon_sym_sgez] = ACTIONS(1),
    [anon_sym_seqz] = ACTIONS(1),
    [anon_sym_snez] = ACTIONS(1),
    [anon_sym_sapz] = ACTIONS(1),
    [anon_sym_snaz] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_sleep] = ACTIONS(1),
    [anon_sym_sin] = ACTIONS(1),
    [anon_sym_asin] = ACTIONS(1),
    [anon_sym_tan] = ACTIONS(1),
    [anon_sym_atan] = ACTIONS(1),
    [anon_sym_cos] = ACTIONS(1),
    [anon_sym_acos] = ACTIONS(1),
    [sym_logictype] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_line] = STATE(6),
    [sym_label] = STATE(17),
    [sym_newline] = STATE(7),
    [sym_comment] = STATE(20),
    [sym_instruction] = STATE(17),
    [sym_operation] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(13),
    [anon_sym_l] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_ls] = ACTIONS(15),
    [anon_sym_lr] = ACTIONS(15),
    [anon_sym_sb] = ACTIONS(15),
    [anon_sym_lb] = ACTIONS(15),
    [anon_sym_alias] = ACTIONS(15),
    [anon_sym_move] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(15),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_sdse] = ACTIONS(15),
    [anon_sym_sdns] = ACTIONS(15),
    [anon_sym_slt] = ACTIONS(15),
    [anon_sym_sgt] = ACTIONS(15),
    [anon_sym_sle] = ACTIONS(15),
    [anon_sym_sge] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_sne] = ACTIONS(15),
    [anon_sym_sap] = ACTIONS(15),
    [anon_sym_sna] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_nor] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_div] = ACTIONS(15),
    [anon_sym_mod] = ACTIONS(15),
    [anon_sym_j] = ACTIONS(15),
    [anon_sym_bltz] = ACTIONS(15),
    [anon_sym_bgez] = ACTIONS(15),
    [anon_sym_blez] = ACTIONS(15),
    [anon_sym_bgtz] = ACTIONS(15),
    [anon_sym_bdse] = ACTIONS(15),
    [anon_sym_bdns] = ACTIONS(15),
    [anon_sym_beq] = ACTIONS(15),
    [anon_sym_bne] = ACTIONS(15),
    [anon_sym_bap] = ACTIONS(15),
    [anon_sym_bna] = ACTIONS(15),
    [anon_sym_jal] = ACTIONS(15),
    [anon_sym_brdse] = ACTIONS(15),
    [anon_sym_brdns] = ACTIONS(15),
    [anon_sym_bltzal] = ACTIONS(15),
    [anon_sym_bgezal] = ACTIONS(15),
    [anon_sym_blezal] = ACTIONS(15),
    [anon_sym_bgtzal] = ACTIONS(15),
    [anon_sym_beqal] = ACTIONS(15),
    [anon_sym_bneal] = ACTIONS(15),
    [anon_sym_jr] = ACTIONS(15),
    [anon_sym_bdseal] = ACTIONS(15),
    [anon_sym_bdnsal] = ACTIONS(15),
    [anon_sym_brltz] = ACTIONS(15),
    [anon_sym_brgez] = ACTIONS(15),
    [anon_sym_brlez] = ACTIONS(15),
    [anon_sym_brgtz] = ACTIONS(15),
    [anon_sym_breq] = ACTIONS(15),
    [anon_sym_brne] = ACTIONS(15),
    [anon_sym_brap] = ACTIONS(15),
    [anon_sym_brna] = ACTIONS(15),
    [anon_sym_sqrt] = ACTIONS(15),
    [anon_sym_round] = ACTIONS(15),
    [anon_sym_trunc] = ACTIONS(15),
    [anon_sym_ceil] = ACTIONS(15),
    [anon_sym_floor] = ACTIONS(15),
    [anon_sym_max] = ACTIONS(15),
    [anon_sym_min] = ACTIONS(15),
    [anon_sym_abs] = ACTIONS(15),
    [anon_sym_log] = ACTIONS(15),
    [anon_sym_exp] = ACTIONS(15),
    [anon_sym_rand] = ACTIONS(15),
    [anon_sym_yield] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_peek] = ACTIONS(15),
    [anon_sym_push] = ACTIONS(15),
    [anon_sym_pop] = ACTIONS(15),
    [anon_sym_hcf] = ACTIONS(15),
    [anon_sym_select] = ACTIONS(15),
    [anon_sym_blt] = ACTIONS(15),
    [anon_sym_bgt] = ACTIONS(15),
    [anon_sym_ble] = ACTIONS(15),
    [anon_sym_bge] = ACTIONS(15),
    [anon_sym_brlt] = ACTIONS(15),
    [anon_sym_brgt] = ACTIONS(15),
    [anon_sym_brle] = ACTIONS(15),
    [anon_sym_brge] = ACTIONS(15),
    [anon_sym_bltal] = ACTIONS(15),
    [anon_sym_bgtal] = ACTIONS(15),
    [anon_sym_bleal] = ACTIONS(15),
    [anon_sym_bgeal] = ACTIONS(15),
    [anon_sym_bapal] = ACTIONS(15),
    [anon_sym_bnaal] = ACTIONS(15),
    [anon_sym_beqz] = ACTIONS(15),
    [anon_sym_bnez] = ACTIONS(15),
    [anon_sym_bapz] = ACTIONS(15),
    [anon_sym_bnaz] = ACTIONS(15),
    [anon_sym_breqz] = ACTIONS(15),
    [anon_sym_brnez] = ACTIONS(15),
    [anon_sym_brapz] = ACTIONS(15),
    [anon_sym_brnaz] = ACTIONS(15),
    [anon_sym_beqzal] = ACTIONS(15),
    [anon_sym_bnezal] = ACTIONS(15),
    [anon_sym_bapzal] = ACTIONS(15),
    [anon_sym_bnazal] = ACTIONS(15),
    [anon_sym_sltz] = ACTIONS(15),
    [anon_sym_sgtz] = ACTIONS(15),
    [anon_sym_slez] = ACTIONS(15),
    [anon_sym_sgez] = ACTIONS(15),
    [anon_sym_seqz] = ACTIONS(15),
    [anon_sym_snez] = ACTIONS(15),
    [anon_sym_sapz] = ACTIONS(15),
    [anon_sym_snaz] = ACTIONS(15),
    [anon_sym_define] = ACTIONS(15),
    [anon_sym_sleep] = ACTIONS(15),
    [anon_sym_sin] = ACTIONS(15),
    [anon_sym_asin] = ACTIONS(15),
    [anon_sym_tan] = ACTIONS(15),
    [anon_sym_atan] = ACTIONS(15),
    [anon_sym_cos] = ACTIONS(15),
    [anon_sym_acos] = ACTIONS(15),
  },
  [2] = {
    [sym_line] = STATE(6),
    [sym_label] = STATE(17),
    [sym_newline] = STATE(7),
    [sym_comment] = STATE(20),
    [sym_instruction] = STATE(17),
    [sym_operation] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(22),
    [anon_sym_CR_LF] = ACTIONS(22),
    [anon_sym_CR] = ACTIONS(25),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(28),
    [anon_sym_l] = ACTIONS(31),
    [anon_sym_s] = ACTIONS(31),
    [anon_sym_ls] = ACTIONS(31),
    [anon_sym_lr] = ACTIONS(31),
    [anon_sym_sb] = ACTIONS(31),
    [anon_sym_lb] = ACTIONS(31),
    [anon_sym_alias] = ACTIONS(31),
    [anon_sym_move] = ACTIONS(31),
    [anon_sym_add] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_sdse] = ACTIONS(31),
    [anon_sym_sdns] = ACTIONS(31),
    [anon_sym_slt] = ACTIONS(31),
    [anon_sym_sgt] = ACTIONS(31),
    [anon_sym_sle] = ACTIONS(31),
    [anon_sym_sge] = ACTIONS(31),
    [anon_sym_seq] = ACTIONS(31),
    [anon_sym_sne] = ACTIONS(31),
    [anon_sym_sap] = ACTIONS(31),
    [anon_sym_sna] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_or] = ACTIONS(31),
    [anon_sym_xor] = ACTIONS(31),
    [anon_sym_nor] = ACTIONS(31),
    [anon_sym_mul] = ACTIONS(31),
    [anon_sym_div] = ACTIONS(31),
    [anon_sym_mod] = ACTIONS(31),
    [anon_sym_j] = ACTIONS(31),
    [anon_sym_bltz] = ACTIONS(31),
    [anon_sym_bgez] = ACTIONS(31),
    [anon_sym_blez] = ACTIONS(31),
    [anon_sym_bgtz] = ACTIONS(31),
    [anon_sym_bdse] = ACTIONS(31),
    [anon_sym_bdns] = ACTIONS(31),
    [anon_sym_beq] = ACTIONS(31),
    [anon_sym_bne] = ACTIONS(31),
    [anon_sym_bap] = ACTIONS(31),
    [anon_sym_bna] = ACTIONS(31),
    [anon_sym_jal] = ACTIONS(31),
    [anon_sym_brdse] = ACTIONS(31),
    [anon_sym_brdns] = ACTIONS(31),
    [anon_sym_bltzal] = ACTIONS(31),
    [anon_sym_bgezal] = ACTIONS(31),
    [anon_sym_blezal] = ACTIONS(31),
    [anon_sym_bgtzal] = ACTIONS(31),
    [anon_sym_beqal] = ACTIONS(31),
    [anon_sym_bneal] = ACTIONS(31),
    [anon_sym_jr] = ACTIONS(31),
    [anon_sym_bdseal] = ACTIONS(31),
    [anon_sym_bdnsal] = ACTIONS(31),
    [anon_sym_brltz] = ACTIONS(31),
    [anon_sym_brgez] = ACTIONS(31),
    [anon_sym_brlez] = ACTIONS(31),
    [anon_sym_brgtz] = ACTIONS(31),
    [anon_sym_breq] = ACTIONS(31),
    [anon_sym_brne] = ACTIONS(31),
    [anon_sym_brap] = ACTIONS(31),
    [anon_sym_brna] = ACTIONS(31),
    [anon_sym_sqrt] = ACTIONS(31),
    [anon_sym_round] = ACTIONS(31),
    [anon_sym_trunc] = ACTIONS(31),
    [anon_sym_ceil] = ACTIONS(31),
    [anon_sym_floor] = ACTIONS(31),
    [anon_sym_max] = ACTIONS(31),
    [anon_sym_min] = ACTIONS(31),
    [anon_sym_abs] = ACTIONS(31),
    [anon_sym_log] = ACTIONS(31),
    [anon_sym_exp] = ACTIONS(31),
    [anon_sym_rand] = ACTIONS(31),
    [anon_sym_yield] = ACTIONS(31),
    [anon_sym_label] = ACTIONS(31),
    [anon_sym_peek] = ACTIONS(31),
    [anon_sym_push] = ACTIONS(31),
    [anon_sym_pop] = ACTIONS(31),
    [anon_sym_hcf] = ACTIONS(31),
    [anon_sym_select] = ACTIONS(31),
    [anon_sym_blt] = ACTIONS(31),
    [anon_sym_bgt] = ACTIONS(31),
    [anon_sym_ble] = ACTIONS(31),
    [anon_sym_bge] = ACTIONS(31),
    [anon_sym_brlt] = ACTIONS(31),
    [anon_sym_brgt] = ACTIONS(31),
    [anon_sym_brle] = ACTIONS(31),
    [anon_sym_brge] = ACTIONS(31),
    [anon_sym_bltal] = ACTIONS(31),
    [anon_sym_bgtal] = ACTIONS(31),
    [anon_sym_bleal] = ACTIONS(31),
    [anon_sym_bgeal] = ACTIONS(31),
    [anon_sym_bapal] = ACTIONS(31),
    [anon_sym_bnaal] = ACTIONS(31),
    [anon_sym_beqz] = ACTIONS(31),
    [anon_sym_bnez] = ACTIONS(31),
    [anon_sym_bapz] = ACTIONS(31),
    [anon_sym_bnaz] = ACTIONS(31),
    [anon_sym_breqz] = ACTIONS(31),
    [anon_sym_brnez] = ACTIONS(31),
    [anon_sym_brapz] = ACTIONS(31),
    [anon_sym_brnaz] = ACTIONS(31),
    [anon_sym_beqzal] = ACTIONS(31),
    [anon_sym_bnezal] = ACTIONS(31),
    [anon_sym_bapzal] = ACTIONS(31),
    [anon_sym_bnazal] = ACTIONS(31),
    [anon_sym_sltz] = ACTIONS(31),
    [anon_sym_sgtz] = ACTIONS(31),
    [anon_sym_slez] = ACTIONS(31),
    [anon_sym_sgez] = ACTIONS(31),
    [anon_sym_seqz] = ACTIONS(31),
    [anon_sym_snez] = ACTIONS(31),
    [anon_sym_sapz] = ACTIONS(31),
    [anon_sym_snaz] = ACTIONS(31),
    [anon_sym_define] = ACTIONS(31),
    [anon_sym_sleep] = ACTIONS(31),
    [anon_sym_sin] = ACTIONS(31),
    [anon_sym_asin] = ACTIONS(31),
    [anon_sym_tan] = ACTIONS(31),
    [anon_sym_atan] = ACTIONS(31),
    [anon_sym_cos] = ACTIONS(31),
    [anon_sym_acos] = ACTIONS(31),
  },
  [3] = {
    [sym_line] = STATE(6),
    [sym_label] = STATE(17),
    [sym_newline] = STATE(7),
    [sym_comment] = STATE(20),
    [sym_instruction] = STATE(17),
    [sym_operation] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(13),
    [anon_sym_l] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_ls] = ACTIONS(15),
    [anon_sym_lr] = ACTIONS(15),
    [anon_sym_sb] = ACTIONS(15),
    [anon_sym_lb] = ACTIONS(15),
    [anon_sym_alias] = ACTIONS(15),
    [anon_sym_move] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(15),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_sdse] = ACTIONS(15),
    [anon_sym_sdns] = ACTIONS(15),
    [anon_sym_slt] = ACTIONS(15),
    [anon_sym_sgt] = ACTIONS(15),
    [anon_sym_sle] = ACTIONS(15),
    [anon_sym_sge] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_sne] = ACTIONS(15),
    [anon_sym_sap] = ACTIONS(15),
    [anon_sym_sna] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_nor] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_div] = ACTIONS(15),
    [anon_sym_mod] = ACTIONS(15),
    [anon_sym_j] = ACTIONS(15),
    [anon_sym_bltz] = ACTIONS(15),
    [anon_sym_bgez] = ACTIONS(15),
    [anon_sym_blez] = ACTIONS(15),
    [anon_sym_bgtz] = ACTIONS(15),
    [anon_sym_bdse] = ACTIONS(15),
    [anon_sym_bdns] = ACTIONS(15),
    [anon_sym_beq] = ACTIONS(15),
    [anon_sym_bne] = ACTIONS(15),
    [anon_sym_bap] = ACTIONS(15),
    [anon_sym_bna] = ACTIONS(15),
    [anon_sym_jal] = ACTIONS(15),
    [anon_sym_brdse] = ACTIONS(15),
    [anon_sym_brdns] = ACTIONS(15),
    [anon_sym_bltzal] = ACTIONS(15),
    [anon_sym_bgezal] = ACTIONS(15),
    [anon_sym_blezal] = ACTIONS(15),
    [anon_sym_bgtzal] = ACTIONS(15),
    [anon_sym_beqal] = ACTIONS(15),
    [anon_sym_bneal] = ACTIONS(15),
    [anon_sym_jr] = ACTIONS(15),
    [anon_sym_bdseal] = ACTIONS(15),
    [anon_sym_bdnsal] = ACTIONS(15),
    [anon_sym_brltz] = ACTIONS(15),
    [anon_sym_brgez] = ACTIONS(15),
    [anon_sym_brlez] = ACTIONS(15),
    [anon_sym_brgtz] = ACTIONS(15),
    [anon_sym_breq] = ACTIONS(15),
    [anon_sym_brne] = ACTIONS(15),
    [anon_sym_brap] = ACTIONS(15),
    [anon_sym_brna] = ACTIONS(15),
    [anon_sym_sqrt] = ACTIONS(15),
    [anon_sym_round] = ACTIONS(15),
    [anon_sym_trunc] = ACTIONS(15),
    [anon_sym_ceil] = ACTIONS(15),
    [anon_sym_floor] = ACTIONS(15),
    [anon_sym_max] = ACTIONS(15),
    [anon_sym_min] = ACTIONS(15),
    [anon_sym_abs] = ACTIONS(15),
    [anon_sym_log] = ACTIONS(15),
    [anon_sym_exp] = ACTIONS(15),
    [anon_sym_rand] = ACTIONS(15),
    [anon_sym_yield] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_peek] = ACTIONS(15),
    [anon_sym_push] = ACTIONS(15),
    [anon_sym_pop] = ACTIONS(15),
    [anon_sym_hcf] = ACTIONS(15),
    [anon_sym_select] = ACTIONS(15),
    [anon_sym_blt] = ACTIONS(15),
    [anon_sym_bgt] = ACTIONS(15),
    [anon_sym_ble] = ACTIONS(15),
    [anon_sym_bge] = ACTIONS(15),
    [anon_sym_brlt] = ACTIONS(15),
    [anon_sym_brgt] = ACTIONS(15),
    [anon_sym_brle] = ACTIONS(15),
    [anon_sym_brge] = ACTIONS(15),
    [anon_sym_bltal] = ACTIONS(15),
    [anon_sym_bgtal] = ACTIONS(15),
    [anon_sym_bleal] = ACTIONS(15),
    [anon_sym_bgeal] = ACTIONS(15),
    [anon_sym_bapal] = ACTIONS(15),
    [anon_sym_bnaal] = ACTIONS(15),
    [anon_sym_beqz] = ACTIONS(15),
    [anon_sym_bnez] = ACTIONS(15),
    [anon_sym_bapz] = ACTIONS(15),
    [anon_sym_bnaz] = ACTIONS(15),
    [anon_sym_breqz] = ACTIONS(15),
    [anon_sym_brnez] = ACTIONS(15),
    [anon_sym_brapz] = ACTIONS(15),
    [anon_sym_brnaz] = ACTIONS(15),
    [anon_sym_beqzal] = ACTIONS(15),
    [anon_sym_bnezal] = ACTIONS(15),
    [anon_sym_bapzal] = ACTIONS(15),
    [anon_sym_bnazal] = ACTIONS(15),
    [anon_sym_sltz] = ACTIONS(15),
    [anon_sym_sgtz] = ACTIONS(15),
    [anon_sym_slez] = ACTIONS(15),
    [anon_sym_sgez] = ACTIONS(15),
    [anon_sym_seqz] = ACTIONS(15),
    [anon_sym_snez] = ACTIONS(15),
    [anon_sym_sapz] = ACTIONS(15),
    [anon_sym_snaz] = ACTIONS(15),
    [anon_sym_define] = ACTIONS(15),
    [anon_sym_sleep] = ACTIONS(15),
    [anon_sym_sin] = ACTIONS(15),
    [anon_sym_asin] = ACTIONS(15),
    [anon_sym_tan] = ACTIONS(15),
    [anon_sym_atan] = ACTIONS(15),
    [anon_sym_cos] = ACTIONS(15),
    [anon_sym_acos] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_identifier] = ACTIONS(38),
    [anon_sym_LF] = ACTIONS(36),
    [anon_sym_CR_LF] = ACTIONS(36),
    [anon_sym_CR] = ACTIONS(38),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(36),
    [anon_sym_l] = ACTIONS(38),
    [anon_sym_s] = ACTIONS(38),
    [anon_sym_ls] = ACTIONS(38),
    [anon_sym_lr] = ACTIONS(38),
    [anon_sym_sb] = ACTIONS(38),
    [anon_sym_lb] = ACTIONS(38),
    [anon_sym_alias] = ACTIONS(38),
    [anon_sym_move] = ACTIONS(38),
    [anon_sym_add] = ACTIONS(38),
    [anon_sym_sub] = ACTIONS(38),
    [anon_sym_sdse] = ACTIONS(38),
    [anon_sym_sdns] = ACTIONS(38),
    [anon_sym_slt] = ACTIONS(38),
    [anon_sym_sgt] = ACTIONS(38),
    [anon_sym_sle] = ACTIONS(38),
    [anon_sym_sge] = ACTIONS(38),
    [anon_sym_seq] = ACTIONS(38),
    [anon_sym_sne] = ACTIONS(38),
    [anon_sym_sap] = ACTIONS(38),
    [anon_sym_sna] = ACTIONS(38),
    [anon_sym_and] = ACTIONS(38),
    [anon_sym_or] = ACTIONS(38),
    [anon_sym_xor] = ACTIONS(38),
    [anon_sym_nor] = ACTIONS(38),
    [anon_sym_mul] = ACTIONS(38),
    [anon_sym_div] = ACTIONS(38),
    [anon_sym_mod] = ACTIONS(38),
    [anon_sym_j] = ACTIONS(38),
    [anon_sym_bltz] = ACTIONS(38),
    [anon_sym_bgez] = ACTIONS(38),
    [anon_sym_blez] = ACTIONS(38),
    [anon_sym_bgtz] = ACTIONS(38),
    [anon_sym_bdse] = ACTIONS(38),
    [anon_sym_bdns] = ACTIONS(38),
    [anon_sym_beq] = ACTIONS(38),
    [anon_sym_bne] = ACTIONS(38),
    [anon_sym_bap] = ACTIONS(38),
    [anon_sym_bna] = ACTIONS(38),
    [anon_sym_jal] = ACTIONS(38),
    [anon_sym_brdse] = ACTIONS(38),
    [anon_sym_brdns] = ACTIONS(38),
    [anon_sym_bltzal] = ACTIONS(38),
    [anon_sym_bgezal] = ACTIONS(38),
    [anon_sym_blezal] = ACTIONS(38),
    [anon_sym_bgtzal] = ACTIONS(38),
    [anon_sym_beqal] = ACTIONS(38),
    [anon_sym_bneal] = ACTIONS(38),
    [anon_sym_jr] = ACTIONS(38),
    [anon_sym_bdseal] = ACTIONS(38),
    [anon_sym_bdnsal] = ACTIONS(38),
    [anon_sym_brltz] = ACTIONS(38),
    [anon_sym_brgez] = ACTIONS(38),
    [anon_sym_brlez] = ACTIONS(38),
    [anon_sym_brgtz] = ACTIONS(38),
    [anon_sym_breq] = ACTIONS(38),
    [anon_sym_brne] = ACTIONS(38),
    [anon_sym_brap] = ACTIONS(38),
    [anon_sym_brna] = ACTIONS(38),
    [anon_sym_sqrt] = ACTIONS(38),
    [anon_sym_round] = ACTIONS(38),
    [anon_sym_trunc] = ACTIONS(38),
    [anon_sym_ceil] = ACTIONS(38),
    [anon_sym_floor] = ACTIONS(38),
    [anon_sym_max] = ACTIONS(38),
    [anon_sym_min] = ACTIONS(38),
    [anon_sym_abs] = ACTIONS(38),
    [anon_sym_log] = ACTIONS(38),
    [anon_sym_exp] = ACTIONS(38),
    [anon_sym_rand] = ACTIONS(38),
    [anon_sym_yield] = ACTIONS(38),
    [anon_sym_label] = ACTIONS(38),
    [anon_sym_peek] = ACTIONS(38),
    [anon_sym_push] = ACTIONS(38),
    [anon_sym_pop] = ACTIONS(38),
    [anon_sym_hcf] = ACTIONS(38),
    [anon_sym_select] = ACTIONS(38),
    [anon_sym_blt] = ACTIONS(38),
    [anon_sym_bgt] = ACTIONS(38),
    [anon_sym_ble] = ACTIONS(38),
    [anon_sym_bge] = ACTIONS(38),
    [anon_sym_brlt] = ACTIONS(38),
    [anon_sym_brgt] = ACTIONS(38),
    [anon_sym_brle] = ACTIONS(38),
    [anon_sym_brge] = ACTIONS(38),
    [anon_sym_bltal] = ACTIONS(38),
    [anon_sym_bgtal] = ACTIONS(38),
    [anon_sym_bleal] = ACTIONS(38),
    [anon_sym_bgeal] = ACTIONS(38),
    [anon_sym_bapal] = ACTIONS(38),
    [anon_sym_bnaal] = ACTIONS(38),
    [anon_sym_beqz] = ACTIONS(38),
    [anon_sym_bnez] = ACTIONS(38),
    [anon_sym_bapz] = ACTIONS(38),
    [anon_sym_bnaz] = ACTIONS(38),
    [anon_sym_breqz] = ACTIONS(38),
    [anon_sym_brnez] = ACTIONS(38),
    [anon_sym_brapz] = ACTIONS(38),
    [anon_sym_brnaz] = ACTIONS(38),
    [anon_sym_beqzal] = ACTIONS(38),
    [anon_sym_bnezal] = ACTIONS(38),
    [anon_sym_bapzal] = ACTIONS(38),
    [anon_sym_bnazal] = ACTIONS(38),
    [anon_sym_sltz] = ACTIONS(38),
    [anon_sym_sgtz] = ACTIONS(38),
    [anon_sym_slez] = ACTIONS(38),
    [anon_sym_sgez] = ACTIONS(38),
    [anon_sym_seqz] = ACTIONS(38),
    [anon_sym_snez] = ACTIONS(38),
    [anon_sym_sapz] = ACTIONS(38),
    [anon_sym_snaz] = ACTIONS(38),
    [anon_sym_define] = ACTIONS(38),
    [anon_sym_sleep] = ACTIONS(38),
    [anon_sym_sin] = ACTIONS(38),
    [anon_sym_asin] = ACTIONS(38),
    [anon_sym_tan] = ACTIONS(38),
    [anon_sym_atan] = ACTIONS(38),
    [anon_sym_cos] = ACTIONS(38),
    [anon_sym_acos] = ACTIONS(38),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_LF] = ACTIONS(40),
    [anon_sym_CR_LF] = ACTIONS(40),
    [anon_sym_CR] = ACTIONS(42),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(40),
    [anon_sym_l] = ACTIONS(42),
    [anon_sym_s] = ACTIONS(42),
    [anon_sym_ls] = ACTIONS(42),
    [anon_sym_lr] = ACTIONS(42),
    [anon_sym_sb] = ACTIONS(42),
    [anon_sym_lb] = ACTIONS(42),
    [anon_sym_alias] = ACTIONS(42),
    [anon_sym_move] = ACTIONS(42),
    [anon_sym_add] = ACTIONS(42),
    [anon_sym_sub] = ACTIONS(42),
    [anon_sym_sdse] = ACTIONS(42),
    [anon_sym_sdns] = ACTIONS(42),
    [anon_sym_slt] = ACTIONS(42),
    [anon_sym_sgt] = ACTIONS(42),
    [anon_sym_sle] = ACTIONS(42),
    [anon_sym_sge] = ACTIONS(42),
    [anon_sym_seq] = ACTIONS(42),
    [anon_sym_sne] = ACTIONS(42),
    [anon_sym_sap] = ACTIONS(42),
    [anon_sym_sna] = ACTIONS(42),
    [anon_sym_and] = ACTIONS(42),
    [anon_sym_or] = ACTIONS(42),
    [anon_sym_xor] = ACTIONS(42),
    [anon_sym_nor] = ACTIONS(42),
    [anon_sym_mul] = ACTIONS(42),
    [anon_sym_div] = ACTIONS(42),
    [anon_sym_mod] = ACTIONS(42),
    [anon_sym_j] = ACTIONS(42),
    [anon_sym_bltz] = ACTIONS(42),
    [anon_sym_bgez] = ACTIONS(42),
    [anon_sym_blez] = ACTIONS(42),
    [anon_sym_bgtz] = ACTIONS(42),
    [anon_sym_bdse] = ACTIONS(42),
    [anon_sym_bdns] = ACTIONS(42),
    [anon_sym_beq] = ACTIONS(42),
    [anon_sym_bne] = ACTIONS(42),
    [anon_sym_bap] = ACTIONS(42),
    [anon_sym_bna] = ACTIONS(42),
    [anon_sym_jal] = ACTIONS(42),
    [anon_sym_brdse] = ACTIONS(42),
    [anon_sym_brdns] = ACTIONS(42),
    [anon_sym_bltzal] = ACTIONS(42),
    [anon_sym_bgezal] = ACTIONS(42),
    [anon_sym_blezal] = ACTIONS(42),
    [anon_sym_bgtzal] = ACTIONS(42),
    [anon_sym_beqal] = ACTIONS(42),
    [anon_sym_bneal] = ACTIONS(42),
    [anon_sym_jr] = ACTIONS(42),
    [anon_sym_bdseal] = ACTIONS(42),
    [anon_sym_bdnsal] = ACTIONS(42),
    [anon_sym_brltz] = ACTIONS(42),
    [anon_sym_brgez] = ACTIONS(42),
    [anon_sym_brlez] = ACTIONS(42),
    [anon_sym_brgtz] = ACTIONS(42),
    [anon_sym_breq] = ACTIONS(42),
    [anon_sym_brne] = ACTIONS(42),
    [anon_sym_brap] = ACTIONS(42),
    [anon_sym_brna] = ACTIONS(42),
    [anon_sym_sqrt] = ACTIONS(42),
    [anon_sym_round] = ACTIONS(42),
    [anon_sym_trunc] = ACTIONS(42),
    [anon_sym_ceil] = ACTIONS(42),
    [anon_sym_floor] = ACTIONS(42),
    [anon_sym_max] = ACTIONS(42),
    [anon_sym_min] = ACTIONS(42),
    [anon_sym_abs] = ACTIONS(42),
    [anon_sym_log] = ACTIONS(42),
    [anon_sym_exp] = ACTIONS(42),
    [anon_sym_rand] = ACTIONS(42),
    [anon_sym_yield] = ACTIONS(42),
    [anon_sym_label] = ACTIONS(42),
    [anon_sym_peek] = ACTIONS(42),
    [anon_sym_push] = ACTIONS(42),
    [anon_sym_pop] = ACTIONS(42),
    [anon_sym_hcf] = ACTIONS(42),
    [anon_sym_select] = ACTIONS(42),
    [anon_sym_blt] = ACTIONS(42),
    [anon_sym_bgt] = ACTIONS(42),
    [anon_sym_ble] = ACTIONS(42),
    [anon_sym_bge] = ACTIONS(42),
    [anon_sym_brlt] = ACTIONS(42),
    [anon_sym_brgt] = ACTIONS(42),
    [anon_sym_brle] = ACTIONS(42),
    [anon_sym_brge] = ACTIONS(42),
    [anon_sym_bltal] = ACTIONS(42),
    [anon_sym_bgtal] = ACTIONS(42),
    [anon_sym_bleal] = ACTIONS(42),
    [anon_sym_bgeal] = ACTIONS(42),
    [anon_sym_bapal] = ACTIONS(42),
    [anon_sym_bnaal] = ACTIONS(42),
    [anon_sym_beqz] = ACTIONS(42),
    [anon_sym_bnez] = ACTIONS(42),
    [anon_sym_bapz] = ACTIONS(42),
    [anon_sym_bnaz] = ACTIONS(42),
    [anon_sym_breqz] = ACTIONS(42),
    [anon_sym_brnez] = ACTIONS(42),
    [anon_sym_brapz] = ACTIONS(42),
    [anon_sym_brnaz] = ACTIONS(42),
    [anon_sym_beqzal] = ACTIONS(42),
    [anon_sym_bnezal] = ACTIONS(42),
    [anon_sym_bapzal] = ACTIONS(42),
    [anon_sym_bnazal] = ACTIONS(42),
    [anon_sym_sltz] = ACTIONS(42),
    [anon_sym_sgtz] = ACTIONS(42),
    [anon_sym_slez] = ACTIONS(42),
    [anon_sym_sgez] = ACTIONS(42),
    [anon_sym_seqz] = ACTIONS(42),
    [anon_sym_snez] = ACTIONS(42),
    [anon_sym_sapz] = ACTIONS(42),
    [anon_sym_snaz] = ACTIONS(42),
    [anon_sym_define] = ACTIONS(42),
    [anon_sym_sleep] = ACTIONS(42),
    [anon_sym_sin] = ACTIONS(42),
    [anon_sym_asin] = ACTIONS(42),
    [anon_sym_tan] = ACTIONS(42),
    [anon_sym_atan] = ACTIONS(42),
    [anon_sym_cos] = ACTIONS(42),
    [anon_sym_acos] = ACTIONS(42),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_LF] = ACTIONS(44),
    [anon_sym_CR_LF] = ACTIONS(44),
    [anon_sym_CR] = ACTIONS(46),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(44),
    [anon_sym_l] = ACTIONS(46),
    [anon_sym_s] = ACTIONS(46),
    [anon_sym_ls] = ACTIONS(46),
    [anon_sym_lr] = ACTIONS(46),
    [anon_sym_sb] = ACTIONS(46),
    [anon_sym_lb] = ACTIONS(46),
    [anon_sym_alias] = ACTIONS(46),
    [anon_sym_move] = ACTIONS(46),
    [anon_sym_add] = ACTIONS(46),
    [anon_sym_sub] = ACTIONS(46),
    [anon_sym_sdse] = ACTIONS(46),
    [anon_sym_sdns] = ACTIONS(46),
    [anon_sym_slt] = ACTIONS(46),
    [anon_sym_sgt] = ACTIONS(46),
    [anon_sym_sle] = ACTIONS(46),
    [anon_sym_sge] = ACTIONS(46),
    [anon_sym_seq] = ACTIONS(46),
    [anon_sym_sne] = ACTIONS(46),
    [anon_sym_sap] = ACTIONS(46),
    [anon_sym_sna] = ACTIONS(46),
    [anon_sym_and] = ACTIONS(46),
    [anon_sym_or] = ACTIONS(46),
    [anon_sym_xor] = ACTIONS(46),
    [anon_sym_nor] = ACTIONS(46),
    [anon_sym_mul] = ACTIONS(46),
    [anon_sym_div] = ACTIONS(46),
    [anon_sym_mod] = ACTIONS(46),
    [anon_sym_j] = ACTIONS(46),
    [anon_sym_bltz] = ACTIONS(46),
    [anon_sym_bgez] = ACTIONS(46),
    [anon_sym_blez] = ACTIONS(46),
    [anon_sym_bgtz] = ACTIONS(46),
    [anon_sym_bdse] = ACTIONS(46),
    [anon_sym_bdns] = ACTIONS(46),
    [anon_sym_beq] = ACTIONS(46),
    [anon_sym_bne] = ACTIONS(46),
    [anon_sym_bap] = ACTIONS(46),
    [anon_sym_bna] = ACTIONS(46),
    [anon_sym_jal] = ACTIONS(46),
    [anon_sym_brdse] = ACTIONS(46),
    [anon_sym_brdns] = ACTIONS(46),
    [anon_sym_bltzal] = ACTIONS(46),
    [anon_sym_bgezal] = ACTIONS(46),
    [anon_sym_blezal] = ACTIONS(46),
    [anon_sym_bgtzal] = ACTIONS(46),
    [anon_sym_beqal] = ACTIONS(46),
    [anon_sym_bneal] = ACTIONS(46),
    [anon_sym_jr] = ACTIONS(46),
    [anon_sym_bdseal] = ACTIONS(46),
    [anon_sym_bdnsal] = ACTIONS(46),
    [anon_sym_brltz] = ACTIONS(46),
    [anon_sym_brgez] = ACTIONS(46),
    [anon_sym_brlez] = ACTIONS(46),
    [anon_sym_brgtz] = ACTIONS(46),
    [anon_sym_breq] = ACTIONS(46),
    [anon_sym_brne] = ACTIONS(46),
    [anon_sym_brap] = ACTIONS(46),
    [anon_sym_brna] = ACTIONS(46),
    [anon_sym_sqrt] = ACTIONS(46),
    [anon_sym_round] = ACTIONS(46),
    [anon_sym_trunc] = ACTIONS(46),
    [anon_sym_ceil] = ACTIONS(46),
    [anon_sym_floor] = ACTIONS(46),
    [anon_sym_max] = ACTIONS(46),
    [anon_sym_min] = ACTIONS(46),
    [anon_sym_abs] = ACTIONS(46),
    [anon_sym_log] = ACTIONS(46),
    [anon_sym_exp] = ACTIONS(46),
    [anon_sym_rand] = ACTIONS(46),
    [anon_sym_yield] = ACTIONS(46),
    [anon_sym_label] = ACTIONS(46),
    [anon_sym_peek] = ACTIONS(46),
    [anon_sym_push] = ACTIONS(46),
    [anon_sym_pop] = ACTIONS(46),
    [anon_sym_hcf] = ACTIONS(46),
    [anon_sym_select] = ACTIONS(46),
    [anon_sym_blt] = ACTIONS(46),
    [anon_sym_bgt] = ACTIONS(46),
    [anon_sym_ble] = ACTIONS(46),
    [anon_sym_bge] = ACTIONS(46),
    [anon_sym_brlt] = ACTIONS(46),
    [anon_sym_brgt] = ACTIONS(46),
    [anon_sym_brle] = ACTIONS(46),
    [anon_sym_brge] = ACTIONS(46),
    [anon_sym_bltal] = ACTIONS(46),
    [anon_sym_bgtal] = ACTIONS(46),
    [anon_sym_bleal] = ACTIONS(46),
    [anon_sym_bgeal] = ACTIONS(46),
    [anon_sym_bapal] = ACTIONS(46),
    [anon_sym_bnaal] = ACTIONS(46),
    [anon_sym_beqz] = ACTIONS(46),
    [anon_sym_bnez] = ACTIONS(46),
    [anon_sym_bapz] = ACTIONS(46),
    [anon_sym_bnaz] = ACTIONS(46),
    [anon_sym_breqz] = ACTIONS(46),
    [anon_sym_brnez] = ACTIONS(46),
    [anon_sym_brapz] = ACTIONS(46),
    [anon_sym_brnaz] = ACTIONS(46),
    [anon_sym_beqzal] = ACTIONS(46),
    [anon_sym_bnezal] = ACTIONS(46),
    [anon_sym_bapzal] = ACTIONS(46),
    [anon_sym_bnazal] = ACTIONS(46),
    [anon_sym_sltz] = ACTIONS(46),
    [anon_sym_sgtz] = ACTIONS(46),
    [anon_sym_slez] = ACTIONS(46),
    [anon_sym_sgez] = ACTIONS(46),
    [anon_sym_seqz] = ACTIONS(46),
    [anon_sym_snez] = ACTIONS(46),
    [anon_sym_sapz] = ACTIONS(46),
    [anon_sym_snaz] = ACTIONS(46),
    [anon_sym_define] = ACTIONS(46),
    [anon_sym_sleep] = ACTIONS(46),
    [anon_sym_sin] = ACTIONS(46),
    [anon_sym_asin] = ACTIONS(46),
    [anon_sym_tan] = ACTIONS(46),
    [anon_sym_atan] = ACTIONS(46),
    [anon_sym_cos] = ACTIONS(46),
    [anon_sym_acos] = ACTIONS(46),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
    [anon_sym_LF] = ACTIONS(48),
    [anon_sym_CR_LF] = ACTIONS(48),
    [anon_sym_CR] = ACTIONS(50),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(48),
    [anon_sym_l] = ACTIONS(50),
    [anon_sym_s] = ACTIONS(50),
    [anon_sym_ls] = ACTIONS(50),
    [anon_sym_lr] = ACTIONS(50),
    [anon_sym_sb] = ACTIONS(50),
    [anon_sym_lb] = ACTIONS(50),
    [anon_sym_alias] = ACTIONS(50),
    [anon_sym_move] = ACTIONS(50),
    [anon_sym_add] = ACTIONS(50),
    [anon_sym_sub] = ACTIONS(50),
    [anon_sym_sdse] = ACTIONS(50),
    [anon_sym_sdns] = ACTIONS(50),
    [anon_sym_slt] = ACTIONS(50),
    [anon_sym_sgt] = ACTIONS(50),
    [anon_sym_sle] = ACTIONS(50),
    [anon_sym_sge] = ACTIONS(50),
    [anon_sym_seq] = ACTIONS(50),
    [anon_sym_sne] = ACTIONS(50),
    [anon_sym_sap] = ACTIONS(50),
    [anon_sym_sna] = ACTIONS(50),
    [anon_sym_and] = ACTIONS(50),
    [anon_sym_or] = ACTIONS(50),
    [anon_sym_xor] = ACTIONS(50),
    [anon_sym_nor] = ACTIONS(50),
    [anon_sym_mul] = ACTIONS(50),
    [anon_sym_div] = ACTIONS(50),
    [anon_sym_mod] = ACTIONS(50),
    [anon_sym_j] = ACTIONS(50),
    [anon_sym_bltz] = ACTIONS(50),
    [anon_sym_bgez] = ACTIONS(50),
    [anon_sym_blez] = ACTIONS(50),
    [anon_sym_bgtz] = ACTIONS(50),
    [anon_sym_bdse] = ACTIONS(50),
    [anon_sym_bdns] = ACTIONS(50),
    [anon_sym_beq] = ACTIONS(50),
    [anon_sym_bne] = ACTIONS(50),
    [anon_sym_bap] = ACTIONS(50),
    [anon_sym_bna] = ACTIONS(50),
    [anon_sym_jal] = ACTIONS(50),
    [anon_sym_brdse] = ACTIONS(50),
    [anon_sym_brdns] = ACTIONS(50),
    [anon_sym_bltzal] = ACTIONS(50),
    [anon_sym_bgezal] = ACTIONS(50),
    [anon_sym_blezal] = ACTIONS(50),
    [anon_sym_bgtzal] = ACTIONS(50),
    [anon_sym_beqal] = ACTIONS(50),
    [anon_sym_bneal] = ACTIONS(50),
    [anon_sym_jr] = ACTIONS(50),
    [anon_sym_bdseal] = ACTIONS(50),
    [anon_sym_bdnsal] = ACTIONS(50),
    [anon_sym_brltz] = ACTIONS(50),
    [anon_sym_brgez] = ACTIONS(50),
    [anon_sym_brlez] = ACTIONS(50),
    [anon_sym_brgtz] = ACTIONS(50),
    [anon_sym_breq] = ACTIONS(50),
    [anon_sym_brne] = ACTIONS(50),
    [anon_sym_brap] = ACTIONS(50),
    [anon_sym_brna] = ACTIONS(50),
    [anon_sym_sqrt] = ACTIONS(50),
    [anon_sym_round] = ACTIONS(50),
    [anon_sym_trunc] = ACTIONS(50),
    [anon_sym_ceil] = ACTIONS(50),
    [anon_sym_floor] = ACTIONS(50),
    [anon_sym_max] = ACTIONS(50),
    [anon_sym_min] = ACTIONS(50),
    [anon_sym_abs] = ACTIONS(50),
    [anon_sym_log] = ACTIONS(50),
    [anon_sym_exp] = ACTIONS(50),
    [anon_sym_rand] = ACTIONS(50),
    [anon_sym_yield] = ACTIONS(50),
    [anon_sym_label] = ACTIONS(50),
    [anon_sym_peek] = ACTIONS(50),
    [anon_sym_push] = ACTIONS(50),
    [anon_sym_pop] = ACTIONS(50),
    [anon_sym_hcf] = ACTIONS(50),
    [anon_sym_select] = ACTIONS(50),
    [anon_sym_blt] = ACTIONS(50),
    [anon_sym_bgt] = ACTIONS(50),
    [anon_sym_ble] = ACTIONS(50),
    [anon_sym_bge] = ACTIONS(50),
    [anon_sym_brlt] = ACTIONS(50),
    [anon_sym_brgt] = ACTIONS(50),
    [anon_sym_brle] = ACTIONS(50),
    [anon_sym_brge] = ACTIONS(50),
    [anon_sym_bltal] = ACTIONS(50),
    [anon_sym_bgtal] = ACTIONS(50),
    [anon_sym_bleal] = ACTIONS(50),
    [anon_sym_bgeal] = ACTIONS(50),
    [anon_sym_bapal] = ACTIONS(50),
    [anon_sym_bnaal] = ACTIONS(50),
    [anon_sym_beqz] = ACTIONS(50),
    [anon_sym_bnez] = ACTIONS(50),
    [anon_sym_bapz] = ACTIONS(50),
    [anon_sym_bnaz] = ACTIONS(50),
    [anon_sym_breqz] = ACTIONS(50),
    [anon_sym_brnez] = ACTIONS(50),
    [anon_sym_brapz] = ACTIONS(50),
    [anon_sym_brnaz] = ACTIONS(50),
    [anon_sym_beqzal] = ACTIONS(50),
    [anon_sym_bnezal] = ACTIONS(50),
    [anon_sym_bapzal] = ACTIONS(50),
    [anon_sym_bnazal] = ACTIONS(50),
    [anon_sym_sltz] = ACTIONS(50),
    [anon_sym_sgtz] = ACTIONS(50),
    [anon_sym_slez] = ACTIONS(50),
    [anon_sym_sgez] = ACTIONS(50),
    [anon_sym_seqz] = ACTIONS(50),
    [anon_sym_snez] = ACTIONS(50),
    [anon_sym_sapz] = ACTIONS(50),
    [anon_sym_snaz] = ACTIONS(50),
    [anon_sym_define] = ACTIONS(50),
    [anon_sym_sleep] = ACTIONS(50),
    [anon_sym_sin] = ACTIONS(50),
    [anon_sym_asin] = ACTIONS(50),
    [anon_sym_tan] = ACTIONS(50),
    [anon_sym_atan] = ACTIONS(50),
    [anon_sym_cos] = ACTIONS(50),
    [anon_sym_acos] = ACTIONS(50),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [anon_sym_LF] = ACTIONS(52),
    [anon_sym_CR_LF] = ACTIONS(52),
    [anon_sym_CR] = ACTIONS(54),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(52),
    [anon_sym_l] = ACTIONS(54),
    [anon_sym_s] = ACTIONS(54),
    [anon_sym_ls] = ACTIONS(54),
    [anon_sym_lr] = ACTIONS(54),
    [anon_sym_sb] = ACTIONS(54),
    [anon_sym_lb] = ACTIONS(54),
    [anon_sym_alias] = ACTIONS(54),
    [anon_sym_move] = ACTIONS(54),
    [anon_sym_add] = ACTIONS(54),
    [anon_sym_sub] = ACTIONS(54),
    [anon_sym_sdse] = ACTIONS(54),
    [anon_sym_sdns] = ACTIONS(54),
    [anon_sym_slt] = ACTIONS(54),
    [anon_sym_sgt] = ACTIONS(54),
    [anon_sym_sle] = ACTIONS(54),
    [anon_sym_sge] = ACTIONS(54),
    [anon_sym_seq] = ACTIONS(54),
    [anon_sym_sne] = ACTIONS(54),
    [anon_sym_sap] = ACTIONS(54),
    [anon_sym_sna] = ACTIONS(54),
    [anon_sym_and] = ACTIONS(54),
    [anon_sym_or] = ACTIONS(54),
    [anon_sym_xor] = ACTIONS(54),
    [anon_sym_nor] = ACTIONS(54),
    [anon_sym_mul] = ACTIONS(54),
    [anon_sym_div] = ACTIONS(54),
    [anon_sym_mod] = ACTIONS(54),
    [anon_sym_j] = ACTIONS(54),
    [anon_sym_bltz] = ACTIONS(54),
    [anon_sym_bgez] = ACTIONS(54),
    [anon_sym_blez] = ACTIONS(54),
    [anon_sym_bgtz] = ACTIONS(54),
    [anon_sym_bdse] = ACTIONS(54),
    [anon_sym_bdns] = ACTIONS(54),
    [anon_sym_beq] = ACTIONS(54),
    [anon_sym_bne] = ACTIONS(54),
    [anon_sym_bap] = ACTIONS(54),
    [anon_sym_bna] = ACTIONS(54),
    [anon_sym_jal] = ACTIONS(54),
    [anon_sym_brdse] = ACTIONS(54),
    [anon_sym_brdns] = ACTIONS(54),
    [anon_sym_bltzal] = ACTIONS(54),
    [anon_sym_bgezal] = ACTIONS(54),
    [anon_sym_blezal] = ACTIONS(54),
    [anon_sym_bgtzal] = ACTIONS(54),
    [anon_sym_beqal] = ACTIONS(54),
    [anon_sym_bneal] = ACTIONS(54),
    [anon_sym_jr] = ACTIONS(54),
    [anon_sym_bdseal] = ACTIONS(54),
    [anon_sym_bdnsal] = ACTIONS(54),
    [anon_sym_brltz] = ACTIONS(54),
    [anon_sym_brgez] = ACTIONS(54),
    [anon_sym_brlez] = ACTIONS(54),
    [anon_sym_brgtz] = ACTIONS(54),
    [anon_sym_breq] = ACTIONS(54),
    [anon_sym_brne] = ACTIONS(54),
    [anon_sym_brap] = ACTIONS(54),
    [anon_sym_brna] = ACTIONS(54),
    [anon_sym_sqrt] = ACTIONS(54),
    [anon_sym_round] = ACTIONS(54),
    [anon_sym_trunc] = ACTIONS(54),
    [anon_sym_ceil] = ACTIONS(54),
    [anon_sym_floor] = ACTIONS(54),
    [anon_sym_max] = ACTIONS(54),
    [anon_sym_min] = ACTIONS(54),
    [anon_sym_abs] = ACTIONS(54),
    [anon_sym_log] = ACTIONS(54),
    [anon_sym_exp] = ACTIONS(54),
    [anon_sym_rand] = ACTIONS(54),
    [anon_sym_yield] = ACTIONS(54),
    [anon_sym_label] = ACTIONS(54),
    [anon_sym_peek] = ACTIONS(54),
    [anon_sym_push] = ACTIONS(54),
    [anon_sym_pop] = ACTIONS(54),
    [anon_sym_hcf] = ACTIONS(54),
    [anon_sym_select] = ACTIONS(54),
    [anon_sym_blt] = ACTIONS(54),
    [anon_sym_bgt] = ACTIONS(54),
    [anon_sym_ble] = ACTIONS(54),
    [anon_sym_bge] = ACTIONS(54),
    [anon_sym_brlt] = ACTIONS(54),
    [anon_sym_brgt] = ACTIONS(54),
    [anon_sym_brle] = ACTIONS(54),
    [anon_sym_brge] = ACTIONS(54),
    [anon_sym_bltal] = ACTIONS(54),
    [anon_sym_bgtal] = ACTIONS(54),
    [anon_sym_bleal] = ACTIONS(54),
    [anon_sym_bgeal] = ACTIONS(54),
    [anon_sym_bapal] = ACTIONS(54),
    [anon_sym_bnaal] = ACTIONS(54),
    [anon_sym_beqz] = ACTIONS(54),
    [anon_sym_bnez] = ACTIONS(54),
    [anon_sym_bapz] = ACTIONS(54),
    [anon_sym_bnaz] = ACTIONS(54),
    [anon_sym_breqz] = ACTIONS(54),
    [anon_sym_brnez] = ACTIONS(54),
    [anon_sym_brapz] = ACTIONS(54),
    [anon_sym_brnaz] = ACTIONS(54),
    [anon_sym_beqzal] = ACTIONS(54),
    [anon_sym_bnezal] = ACTIONS(54),
    [anon_sym_bapzal] = ACTIONS(54),
    [anon_sym_bnazal] = ACTIONS(54),
    [anon_sym_sltz] = ACTIONS(54),
    [anon_sym_sgtz] = ACTIONS(54),
    [anon_sym_slez] = ACTIONS(54),
    [anon_sym_sgez] = ACTIONS(54),
    [anon_sym_seqz] = ACTIONS(54),
    [anon_sym_snez] = ACTIONS(54),
    [anon_sym_sapz] = ACTIONS(54),
    [anon_sym_snaz] = ACTIONS(54),
    [anon_sym_define] = ACTIONS(54),
    [anon_sym_sleep] = ACTIONS(54),
    [anon_sym_sin] = ACTIONS(54),
    [anon_sym_asin] = ACTIONS(54),
    [anon_sym_tan] = ACTIONS(54),
    [anon_sym_atan] = ACTIONS(54),
    [anon_sym_cos] = ACTIONS(54),
    [anon_sym_acos] = ACTIONS(54),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_COLON,
    ACTIONS(62), 1,
      anon_sym_CR,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(14), 1,
      sym_operand,
    ACTIONS(60), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
    ACTIONS(64), 4,
      sym_register,
      sym_device,
      sym_number,
      sym_logictype,
  [30] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_CR,
    STATE(11), 1,
      aux_sym_instruction_repeat1,
    STATE(14), 1,
      sym_operand,
    ACTIONS(66), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
    ACTIONS(64), 4,
      sym_register,
      sym_device,
      sym_number,
      sym_logictype,
  [57] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_CR,
    STATE(11), 1,
      aux_sym_instruction_repeat1,
    STATE(14), 1,
      sym_operand,
    ACTIONS(73), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
    ACTIONS(77), 4,
      sym_register,
      sym_device,
      sym_number,
      sym_logictype,
  [84] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_CR,
    STATE(11), 1,
      aux_sym_instruction_repeat1,
    STATE(14), 1,
      sym_operand,
    ACTIONS(80), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
    ACTIONS(64), 4,
      sym_register,
      sym_device,
      sym_number,
      sym_logictype,
  [111] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_CR,
    STATE(12), 1,
      aux_sym_instruction_repeat1,
    STATE(14), 1,
      sym_operand,
    ACTIONS(84), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
    ACTIONS(64), 4,
      sym_register,
      sym_device,
      sym_number,
      sym_logictype,
  [138] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(88), 2,
      anon_sym_CR,
      sym_identifier,
    ACTIONS(90), 7,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      sym_number,
      sym_logictype,
  [155] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(92), 2,
      anon_sym_CR,
      sym_identifier,
    ACTIONS(94), 7,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      sym_number,
      sym_logictype,
  [172] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(96), 2,
      anon_sym_CR,
      sym_identifier,
    ACTIONS(98), 7,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      sym_number,
      sym_logictype,
  [189] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_newline,
    STATE(19), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [209] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(102), 1,
      anon_sym_CR,
    ACTIONS(100), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
  [221] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    STATE(5), 1,
      sym_newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [235] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    STATE(8), 1,
      sym_newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [249] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(106), 1,
      anon_sym_CR,
    ACTIONS(104), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [260] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 30,
  [SMALL_STATE(11)] = 57,
  [SMALL_STATE(12)] = 84,
  [SMALL_STATE(13)] = 111,
  [SMALL_STATE(14)] = 138,
  [SMALL_STATE(15)] = 155,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 189,
  [SMALL_STATE(18)] = 209,
  [SMALL_STATE(19)] = 221,
  [SMALL_STATE(20)] = 235,
  [SMALL_STATE(21)] = 249,
  [SMALL_STATE(22)] = 260,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 5),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 5),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(15),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(15),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ic10(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
