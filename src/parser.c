#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 179
#define ALIAS_COUNT 2
#define TOKEN_COUNT 165
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_COLON = 2,
  anon_sym_LF = 3,
  anon_sym_CR_LF = 4,
  anon_sym_CR = 5,
  sym__whitespace = 6,
  aux_sym_comment_token1 = 7,
  sym_register = 8,
  sym_network_index = 9,
  sym_device = 10,
  anon_sym_nan = 11,
  anon_sym_pinf = 12,
  anon_sym_ninf = 13,
  anon_sym_pi = 14,
  anon_sym_deg2rad = 15,
  anon_sym_rad2deg = 16,
  anon_sym_epsilon = 17,
  sym_preproc_string = 18,
  anon_sym_HASH_LPAREN_DQUOTE = 19,
  anon_sym_DQUOTE_RPAREN = 20,
  aux_sym_number_token1 = 21,
  anon_sym_abs = 22,
  anon_sym_acos = 23,
  anon_sym_add = 24,
  anon_sym_alias = 25,
  anon_sym_and = 26,
  anon_sym_asin = 27,
  anon_sym_atan = 28,
  anon_sym_atan2 = 29,
  anon_sym_bap = 30,
  anon_sym_bapal = 31,
  anon_sym_bapz = 32,
  anon_sym_bapzal = 33,
  anon_sym_bdns = 34,
  anon_sym_bdnsal = 35,
  anon_sym_bdse = 36,
  anon_sym_bdseal = 37,
  anon_sym_beq = 38,
  anon_sym_beqal = 39,
  anon_sym_beqz = 40,
  anon_sym_beqzal = 41,
  anon_sym_bge = 42,
  anon_sym_bgeal = 43,
  anon_sym_bgez = 44,
  anon_sym_bgezal = 45,
  anon_sym_bgt = 46,
  anon_sym_bgtal = 47,
  anon_sym_bgtz = 48,
  anon_sym_bgtzal = 49,
  anon_sym_ble = 50,
  anon_sym_bleal = 51,
  anon_sym_blez = 52,
  anon_sym_blezal = 53,
  anon_sym_blt = 54,
  anon_sym_bltal = 55,
  anon_sym_bltz = 56,
  anon_sym_bltzal = 57,
  anon_sym_bna = 58,
  anon_sym_bnaal = 59,
  anon_sym_bnan = 60,
  anon_sym_bnaz = 61,
  anon_sym_bnazal = 62,
  anon_sym_bne = 63,
  anon_sym_bneal = 64,
  anon_sym_bnez = 65,
  anon_sym_bnezal = 66,
  anon_sym_brap = 67,
  anon_sym_brapz = 68,
  anon_sym_brdns = 69,
  anon_sym_brdse = 70,
  anon_sym_breq = 71,
  anon_sym_breqz = 72,
  anon_sym_brge = 73,
  anon_sym_brgez = 74,
  anon_sym_brgt = 75,
  anon_sym_brgtz = 76,
  anon_sym_brle = 77,
  anon_sym_brlez = 78,
  anon_sym_brlt = 79,
  anon_sym_brltz = 80,
  anon_sym_brna = 81,
  anon_sym_brnan = 82,
  anon_sym_brnaz = 83,
  anon_sym_brne = 84,
  anon_sym_brnez = 85,
  anon_sym_ceil = 86,
  anon_sym_cos = 87,
  anon_sym_define = 88,
  anon_sym_div = 89,
  anon_sym_exp = 90,
  anon_sym_floor = 91,
  anon_sym_get = 92,
  anon_sym_getd = 93,
  anon_sym_hcf = 94,
  anon_sym_j = 95,
  anon_sym_jal = 96,
  anon_sym_jr = 97,
  anon_sym_l = 98,
  anon_sym_label = 99,
  anon_sym_lb = 100,
  anon_sym_lbn = 101,
  anon_sym_lbns = 102,
  anon_sym_lbs = 103,
  anon_sym_ld = 104,
  anon_sym_log = 105,
  anon_sym_lr = 106,
  anon_sym_ls = 107,
  anon_sym_max = 108,
  anon_sym_min = 109,
  anon_sym_mod = 110,
  anon_sym_move = 111,
  anon_sym_mul = 112,
  anon_sym_nor = 113,
  anon_sym_not = 114,
  anon_sym_or = 115,
  anon_sym_peek = 116,
  anon_sym_poke = 117,
  anon_sym_pop = 118,
  anon_sym_push = 119,
  anon_sym_put = 120,
  anon_sym_putd = 121,
  anon_sym_rand = 122,
  anon_sym_round = 123,
  anon_sym_s = 124,
  anon_sym_sap = 125,
  anon_sym_sapz = 126,
  anon_sym_sb = 127,
  anon_sym_sbn = 128,
  anon_sym_sbs = 129,
  anon_sym_sd = 130,
  anon_sym_sdns = 131,
  anon_sym_sdse = 132,
  anon_sym_select = 133,
  anon_sym_seq = 134,
  anon_sym_seqz = 135,
  anon_sym_sge = 136,
  anon_sym_sgez = 137,
  anon_sym_sgt = 138,
  anon_sym_sgtz = 139,
  anon_sym_sin = 140,
  anon_sym_sla = 141,
  anon_sym_sle = 142,
  anon_sym_sleep = 143,
  anon_sym_slez = 144,
  anon_sym_sll = 145,
  anon_sym_slt = 146,
  anon_sym_sltz = 147,
  anon_sym_sna = 148,
  anon_sym_snan = 149,
  anon_sym_snanz = 150,
  anon_sym_snaz = 151,
  anon_sym_sne = 152,
  anon_sym_snez = 153,
  anon_sym_sqrt = 154,
  anon_sym_sra = 155,
  anon_sym_srl = 156,
  anon_sym_ss = 157,
  anon_sym_sub = 158,
  anon_sym_tan = 159,
  anon_sym_trunc = 160,
  anon_sym_xor = 161,
  anon_sym_yield = 162,
  sym_logictype = 163,
  sym_enum = 164,
  sym_source_file = 165,
  sym_line = 166,
  sym_label = 167,
  sym_newline = 168,
  sym_comment = 169,
  sym_instruction = 170,
  sym_operand = 171,
  sym_device_spec = 172,
  sym_constant = 173,
  sym_hash_preproc = 174,
  sym_number = 175,
  sym_operation = 176,
  aux_sym_source_file_repeat1 = 177,
  aux_sym_instruction_repeat1 = 178,
  alias_sym_invalid_instruction = 179,
  alias_sym_program = 180,
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
  [sym_network_index] = "network_index",
  [sym_device] = "device",
  [anon_sym_nan] = "nan",
  [anon_sym_pinf] = "pinf",
  [anon_sym_ninf] = "ninf",
  [anon_sym_pi] = "pi",
  [anon_sym_deg2rad] = "deg2rad",
  [anon_sym_rad2deg] = "rad2deg",
  [anon_sym_epsilon] = "epsilon",
  [sym_preproc_string] = "preproc_string",
  [anon_sym_HASH_LPAREN_DQUOTE] = "HASH(\"",
  [anon_sym_DQUOTE_RPAREN] = "\")",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_abs] = "abs",
  [anon_sym_acos] = "acos",
  [anon_sym_add] = "add",
  [anon_sym_alias] = "alias",
  [anon_sym_and] = "and",
  [anon_sym_asin] = "asin",
  [anon_sym_atan] = "atan",
  [anon_sym_atan2] = "atan2",
  [anon_sym_bap] = "bap",
  [anon_sym_bapal] = "bapal",
  [anon_sym_bapz] = "bapz",
  [anon_sym_bapzal] = "bapzal",
  [anon_sym_bdns] = "bdns",
  [anon_sym_bdnsal] = "bdnsal",
  [anon_sym_bdse] = "bdse",
  [anon_sym_bdseal] = "bdseal",
  [anon_sym_beq] = "beq",
  [anon_sym_beqal] = "beqal",
  [anon_sym_beqz] = "beqz",
  [anon_sym_beqzal] = "beqzal",
  [anon_sym_bge] = "bge",
  [anon_sym_bgeal] = "bgeal",
  [anon_sym_bgez] = "bgez",
  [anon_sym_bgezal] = "bgezal",
  [anon_sym_bgt] = "bgt",
  [anon_sym_bgtal] = "bgtal",
  [anon_sym_bgtz] = "bgtz",
  [anon_sym_bgtzal] = "bgtzal",
  [anon_sym_ble] = "ble",
  [anon_sym_bleal] = "bleal",
  [anon_sym_blez] = "blez",
  [anon_sym_blezal] = "blezal",
  [anon_sym_blt] = "blt",
  [anon_sym_bltal] = "bltal",
  [anon_sym_bltz] = "bltz",
  [anon_sym_bltzal] = "bltzal",
  [anon_sym_bna] = "bna",
  [anon_sym_bnaal] = "bnaal",
  [anon_sym_bnan] = "bnan",
  [anon_sym_bnaz] = "bnaz",
  [anon_sym_bnazal] = "bnazal",
  [anon_sym_bne] = "bne",
  [anon_sym_bneal] = "bneal",
  [anon_sym_bnez] = "bnez",
  [anon_sym_bnezal] = "bnezal",
  [anon_sym_brap] = "brap",
  [anon_sym_brapz] = "brapz",
  [anon_sym_brdns] = "brdns",
  [anon_sym_brdse] = "brdse",
  [anon_sym_breq] = "breq",
  [anon_sym_breqz] = "breqz",
  [anon_sym_brge] = "brge",
  [anon_sym_brgez] = "brgez",
  [anon_sym_brgt] = "brgt",
  [anon_sym_brgtz] = "brgtz",
  [anon_sym_brle] = "brle",
  [anon_sym_brlez] = "brlez",
  [anon_sym_brlt] = "brlt",
  [anon_sym_brltz] = "brltz",
  [anon_sym_brna] = "brna",
  [anon_sym_brnan] = "brnan",
  [anon_sym_brnaz] = "brnaz",
  [anon_sym_brne] = "brne",
  [anon_sym_brnez] = "brnez",
  [anon_sym_ceil] = "ceil",
  [anon_sym_cos] = "cos",
  [anon_sym_define] = "define",
  [anon_sym_div] = "div",
  [anon_sym_exp] = "exp",
  [anon_sym_floor] = "floor",
  [anon_sym_get] = "get",
  [anon_sym_getd] = "getd",
  [anon_sym_hcf] = "hcf",
  [anon_sym_j] = "j",
  [anon_sym_jal] = "jal",
  [anon_sym_jr] = "jr",
  [anon_sym_l] = "l",
  [anon_sym_label] = "label",
  [anon_sym_lb] = "lb",
  [anon_sym_lbn] = "lbn",
  [anon_sym_lbns] = "lbns",
  [anon_sym_lbs] = "lbs",
  [anon_sym_ld] = "ld",
  [anon_sym_log] = "log",
  [anon_sym_lr] = "lr",
  [anon_sym_ls] = "ls",
  [anon_sym_max] = "max",
  [anon_sym_min] = "min",
  [anon_sym_mod] = "mod",
  [anon_sym_move] = "move",
  [anon_sym_mul] = "mul",
  [anon_sym_nor] = "nor",
  [anon_sym_not] = "not",
  [anon_sym_or] = "or",
  [anon_sym_peek] = "peek",
  [anon_sym_poke] = "poke",
  [anon_sym_pop] = "pop",
  [anon_sym_push] = "push",
  [anon_sym_put] = "put",
  [anon_sym_putd] = "putd",
  [anon_sym_rand] = "rand",
  [anon_sym_round] = "round",
  [anon_sym_s] = "s",
  [anon_sym_sap] = "sap",
  [anon_sym_sapz] = "sapz",
  [anon_sym_sb] = "sb",
  [anon_sym_sbn] = "sbn",
  [anon_sym_sbs] = "sbs",
  [anon_sym_sd] = "sd",
  [anon_sym_sdns] = "sdns",
  [anon_sym_sdse] = "sdse",
  [anon_sym_select] = "select",
  [anon_sym_seq] = "seq",
  [anon_sym_seqz] = "seqz",
  [anon_sym_sge] = "sge",
  [anon_sym_sgez] = "sgez",
  [anon_sym_sgt] = "sgt",
  [anon_sym_sgtz] = "sgtz",
  [anon_sym_sin] = "sin",
  [anon_sym_sla] = "sla",
  [anon_sym_sle] = "sle",
  [anon_sym_sleep] = "sleep",
  [anon_sym_slez] = "slez",
  [anon_sym_sll] = "sll",
  [anon_sym_slt] = "slt",
  [anon_sym_sltz] = "sltz",
  [anon_sym_sna] = "sna",
  [anon_sym_snan] = "snan",
  [anon_sym_snanz] = "snanz",
  [anon_sym_snaz] = "snaz",
  [anon_sym_sne] = "sne",
  [anon_sym_snez] = "snez",
  [anon_sym_sqrt] = "sqrt",
  [anon_sym_sra] = "sra",
  [anon_sym_srl] = "srl",
  [anon_sym_ss] = "ss",
  [anon_sym_sub] = "sub",
  [anon_sym_tan] = "tan",
  [anon_sym_trunc] = "trunc",
  [anon_sym_xor] = "xor",
  [anon_sym_yield] = "yield",
  [sym_logictype] = "logictype",
  [sym_enum] = "enum",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_label] = "label",
  [sym_newline] = "newline",
  [sym_comment] = "comment",
  [sym_instruction] = "instruction",
  [sym_operand] = "operand",
  [sym_device_spec] = "device_spec",
  [sym_constant] = "constant",
  [sym_hash_preproc] = "hash_preproc",
  [sym_number] = "number",
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
  [sym_network_index] = sym_network_index,
  [sym_device] = sym_device,
  [anon_sym_nan] = anon_sym_nan,
  [anon_sym_pinf] = anon_sym_pinf,
  [anon_sym_ninf] = anon_sym_ninf,
  [anon_sym_pi] = anon_sym_pi,
  [anon_sym_deg2rad] = anon_sym_deg2rad,
  [anon_sym_rad2deg] = anon_sym_rad2deg,
  [anon_sym_epsilon] = anon_sym_epsilon,
  [sym_preproc_string] = sym_preproc_string,
  [anon_sym_HASH_LPAREN_DQUOTE] = anon_sym_HASH_LPAREN_DQUOTE,
  [anon_sym_DQUOTE_RPAREN] = anon_sym_DQUOTE_RPAREN,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_abs] = anon_sym_abs,
  [anon_sym_acos] = anon_sym_acos,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_asin] = anon_sym_asin,
  [anon_sym_atan] = anon_sym_atan,
  [anon_sym_atan2] = anon_sym_atan2,
  [anon_sym_bap] = anon_sym_bap,
  [anon_sym_bapal] = anon_sym_bapal,
  [anon_sym_bapz] = anon_sym_bapz,
  [anon_sym_bapzal] = anon_sym_bapzal,
  [anon_sym_bdns] = anon_sym_bdns,
  [anon_sym_bdnsal] = anon_sym_bdnsal,
  [anon_sym_bdse] = anon_sym_bdse,
  [anon_sym_bdseal] = anon_sym_bdseal,
  [anon_sym_beq] = anon_sym_beq,
  [anon_sym_beqal] = anon_sym_beqal,
  [anon_sym_beqz] = anon_sym_beqz,
  [anon_sym_beqzal] = anon_sym_beqzal,
  [anon_sym_bge] = anon_sym_bge,
  [anon_sym_bgeal] = anon_sym_bgeal,
  [anon_sym_bgez] = anon_sym_bgez,
  [anon_sym_bgezal] = anon_sym_bgezal,
  [anon_sym_bgt] = anon_sym_bgt,
  [anon_sym_bgtal] = anon_sym_bgtal,
  [anon_sym_bgtz] = anon_sym_bgtz,
  [anon_sym_bgtzal] = anon_sym_bgtzal,
  [anon_sym_ble] = anon_sym_ble,
  [anon_sym_bleal] = anon_sym_bleal,
  [anon_sym_blez] = anon_sym_blez,
  [anon_sym_blezal] = anon_sym_blezal,
  [anon_sym_blt] = anon_sym_blt,
  [anon_sym_bltal] = anon_sym_bltal,
  [anon_sym_bltz] = anon_sym_bltz,
  [anon_sym_bltzal] = anon_sym_bltzal,
  [anon_sym_bna] = anon_sym_bna,
  [anon_sym_bnaal] = anon_sym_bnaal,
  [anon_sym_bnan] = anon_sym_bnan,
  [anon_sym_bnaz] = anon_sym_bnaz,
  [anon_sym_bnazal] = anon_sym_bnazal,
  [anon_sym_bne] = anon_sym_bne,
  [anon_sym_bneal] = anon_sym_bneal,
  [anon_sym_bnez] = anon_sym_bnez,
  [anon_sym_bnezal] = anon_sym_bnezal,
  [anon_sym_brap] = anon_sym_brap,
  [anon_sym_brapz] = anon_sym_brapz,
  [anon_sym_brdns] = anon_sym_brdns,
  [anon_sym_brdse] = anon_sym_brdse,
  [anon_sym_breq] = anon_sym_breq,
  [anon_sym_breqz] = anon_sym_breqz,
  [anon_sym_brge] = anon_sym_brge,
  [anon_sym_brgez] = anon_sym_brgez,
  [anon_sym_brgt] = anon_sym_brgt,
  [anon_sym_brgtz] = anon_sym_brgtz,
  [anon_sym_brle] = anon_sym_brle,
  [anon_sym_brlez] = anon_sym_brlez,
  [anon_sym_brlt] = anon_sym_brlt,
  [anon_sym_brltz] = anon_sym_brltz,
  [anon_sym_brna] = anon_sym_brna,
  [anon_sym_brnan] = anon_sym_brnan,
  [anon_sym_brnaz] = anon_sym_brnaz,
  [anon_sym_brne] = anon_sym_brne,
  [anon_sym_brnez] = anon_sym_brnez,
  [anon_sym_ceil] = anon_sym_ceil,
  [anon_sym_cos] = anon_sym_cos,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_exp] = anon_sym_exp,
  [anon_sym_floor] = anon_sym_floor,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_getd] = anon_sym_getd,
  [anon_sym_hcf] = anon_sym_hcf,
  [anon_sym_j] = anon_sym_j,
  [anon_sym_jal] = anon_sym_jal,
  [anon_sym_jr] = anon_sym_jr,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_lb] = anon_sym_lb,
  [anon_sym_lbn] = anon_sym_lbn,
  [anon_sym_lbns] = anon_sym_lbns,
  [anon_sym_lbs] = anon_sym_lbs,
  [anon_sym_ld] = anon_sym_ld,
  [anon_sym_log] = anon_sym_log,
  [anon_sym_lr] = anon_sym_lr,
  [anon_sym_ls] = anon_sym_ls,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_nor] = anon_sym_nor,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_peek] = anon_sym_peek,
  [anon_sym_poke] = anon_sym_poke,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_putd] = anon_sym_putd,
  [anon_sym_rand] = anon_sym_rand,
  [anon_sym_round] = anon_sym_round,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_sap] = anon_sym_sap,
  [anon_sym_sapz] = anon_sym_sapz,
  [anon_sym_sb] = anon_sym_sb,
  [anon_sym_sbn] = anon_sym_sbn,
  [anon_sym_sbs] = anon_sym_sbs,
  [anon_sym_sd] = anon_sym_sd,
  [anon_sym_sdns] = anon_sym_sdns,
  [anon_sym_sdse] = anon_sym_sdse,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_seqz] = anon_sym_seqz,
  [anon_sym_sge] = anon_sym_sge,
  [anon_sym_sgez] = anon_sym_sgez,
  [anon_sym_sgt] = anon_sym_sgt,
  [anon_sym_sgtz] = anon_sym_sgtz,
  [anon_sym_sin] = anon_sym_sin,
  [anon_sym_sla] = anon_sym_sla,
  [anon_sym_sle] = anon_sym_sle,
  [anon_sym_sleep] = anon_sym_sleep,
  [anon_sym_slez] = anon_sym_slez,
  [anon_sym_sll] = anon_sym_sll,
  [anon_sym_slt] = anon_sym_slt,
  [anon_sym_sltz] = anon_sym_sltz,
  [anon_sym_sna] = anon_sym_sna,
  [anon_sym_snan] = anon_sym_snan,
  [anon_sym_snanz] = anon_sym_snanz,
  [anon_sym_snaz] = anon_sym_snaz,
  [anon_sym_sne] = anon_sym_sne,
  [anon_sym_snez] = anon_sym_snez,
  [anon_sym_sqrt] = anon_sym_sqrt,
  [anon_sym_sra] = anon_sym_sra,
  [anon_sym_srl] = anon_sym_srl,
  [anon_sym_ss] = anon_sym_ss,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_tan] = anon_sym_tan,
  [anon_sym_trunc] = anon_sym_trunc,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_yield] = anon_sym_yield,
  [sym_logictype] = sym_logictype,
  [sym_enum] = sym_enum,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_label] = sym_label,
  [sym_newline] = sym_newline,
  [sym_comment] = sym_comment,
  [sym_instruction] = sym_instruction,
  [sym_operand] = sym_operand,
  [sym_device_spec] = sym_device_spec,
  [sym_constant] = sym_constant,
  [sym_hash_preproc] = sym_hash_preproc,
  [sym_number] = sym_number,
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
  [sym_network_index] = {
    .visible = true,
    .named = true,
  },
  [sym_device] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ninf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deg2rad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rad2deg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_epsilon] = {
    .visible = true,
    .named = false,
  },
  [sym_preproc_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HASH_LPAREN_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_abs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atan2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bapal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bapz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bapzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdnsal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bdseal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beqal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beqz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_beqzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgeal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgezal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgtal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgtz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bgtzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bleal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blezal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bltal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bltz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bltzal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnaal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnaz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnazal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bneal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnezal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brapz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brdns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brdse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breqz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brgez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brgtz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brlez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brlt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brltz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brnan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brnaz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brnez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_getd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hcf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_j] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lbs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ls] = {
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
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_peek] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_putd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_round] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sapz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sdse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seqz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgtz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sleep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sltz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snanz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snaz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sqrt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [sym_logictype] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
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
  [sym_device_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_preproc] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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

enum ts_field_identifiers {
  field_operand = 1,
  field_operation = 2,
  field_string = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_operand] = "operand",
  [field_operation] = "operation",
  [field_string] = "string",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 2, .length = 2},
  [7] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 1},
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
  [6] =
    {field_string, 1},
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(18);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_network_index);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_preproc_string);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_preproc_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_HASH_LPAREN_DQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DQUOTE_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
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
      if (lookahead == 'U') ADVANCE(19);
      if (lookahead == 'V') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'g') ADVANCE(28);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'j') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'q') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '5') ||
          lookahead == 'b') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(140);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 36:
      if (lookahead == '1') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(168);
      if (lookahead == 'q') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(209);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == 'v') ADVANCE(212);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == 'x') ADVANCE(240);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 84:
      if (lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_logictype);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 'q') ADVANCE(264);
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(270);
      if (lookahead == 'z') ADVANCE(271);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 113:
      if (lookahead == 'k') ADVANCE(284);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 128:
      if (lookahead == 'q') ADVANCE(302);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'g') ADVANCE(312);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_device);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(317);
      if (lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 137:
      if (lookahead == 'v') ADVANCE(319);
      END_STATE();
    case 138:
      if (lookahead == '1') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 143:
      if (lookahead == 'f') ADVANCE(325);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_jr);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(327);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_lb);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_ld);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(330);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_lr);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ls);
      END_STATE();
    case 152:
      if (lookahead == 'x') ADVANCE(331);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead == 'v') ADVANCE(334);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 162:
      if (lookahead == 'k') ADVANCE(342);
      if (lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 167:
      if (lookahead == '1') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_sb);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_sd);
      if (lookahead == 'n') ADVANCE(350);
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 'q') ADVANCE(353);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(366);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 187:
      if (lookahead == 'C') ADVANCE(373);
      if (lookahead == 'R') ADVANCE(374);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(375);
      END_STATE();
    case 189:
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(383);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(388);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 207:
      if (lookahead == 'M') ADVANCE(396);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 210:
      if (lookahead == 'v') ADVANCE(399);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(402);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(407);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(409);
      if (lookahead == 'w') ADVANCE(410);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 222:
      if (lookahead == 'T') ADVANCE(411);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 224:
      if (lookahead == 'w') ADVANCE(413);
      END_STATE();
    case 225:
      if (lookahead == 'v') ADVANCE(414);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(415);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 235:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 240:
      if (lookahead == 'Q') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 241:
      if (lookahead == 'W') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 245:
      if (lookahead == 'E') ADVANCE(432);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(435);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(437);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 256:
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(445);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(449);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 264:
      if (lookahead == 'u') ADVANCE(452);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(453);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 277:
      if (lookahead == 'g') ADVANCE(465);
      END_STATE();
    case 278:
      if (lookahead == 'p') ADVANCE(466);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(477);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 290:
      if (lookahead == 'g') ADVANCE(479);
      END_STATE();
    case 291:
      if (lookahead == 'k') ADVANCE(480);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_abs);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_bap);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'z') ADVANCE(486);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(487);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_beq);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'z') ADVANCE(490);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_bge);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == 'z') ADVANCE(492);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_bgt);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'z') ADVANCE(494);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_ble);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead == 'z') ADVANCE(496);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_blt);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'z') ADVANCE(498);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_bna);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead == 'z') ADVANCE(501);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_bne);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'z') ADVANCE(503);
      END_STATE();
    case 309:
      if (lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 's') ADVANCE(506);
      END_STATE();
    case 311:
      if (lookahead == 'q') ADVANCE(507);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 315:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_cos);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 318:
      if (lookahead == '2') ADVANCE(516);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_device);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(135);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == 'd') ADVANCE(519);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_hcf);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_jal);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_lbn);
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_lbs);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(523);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 340:
      if (lookahead == 'k') ADVANCE(524);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(525);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 344:
      if (lookahead == 'h') ADVANCE(527);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == 'd') ADVANCE(528);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_sap);
      if (lookahead == 'z') ADVANCE(530);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_sbn);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_sbs);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_seq);
      if (lookahead == 'z') ADVANCE(534);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_sge);
      if (lookahead == 'z') ADVANCE(535);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (lookahead == 'z') ADVANCE(536);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_sin);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_sla);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_sle);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'z') ADVANCE(538);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_sll);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_slt);
      if (lookahead == 'z') ADVANCE(539);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_sna);
      if (lookahead == 'n') ADVANCE(540);
      if (lookahead == 'z') ADVANCE(541);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_sne);
      if (lookahead == 'z') ADVANCE(542);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_sra);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_srl);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_tan);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(545);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(546);
      END_STATE();
    case 372:
      if (lookahead == 'v') ADVANCE(547);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 376:
      if (lookahead == 'L') ADVANCE(551);
      if (lookahead == 'S') ADVANCE(552);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 378:
      if (lookahead == 'T') ADVANCE(554);
      END_STATE();
    case 379:
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(556);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 382:
      if (lookahead == 'g') ADVANCE(558);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 387:
      if (lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(563);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(567);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 398:
      if (lookahead == 'c') ADVANCE(574);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(578);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 404:
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 407:
      if (lookahead == 'h') ADVANCE(583);
      END_STATE();
    case 408:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(585);
      END_STATE();
    case 411:
      if (lookahead == 'y') ADVANCE(586);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 416:
      if (lookahead == 'z') ADVANCE(591);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 419:
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_enum);
      END_STATE();
    case 422:
      if (lookahead == 'N') ADVANCE(595);
      END_STATE();
    case 423:
      if (lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 426:
      if (lookahead == 'u') ADVANCE(599);
      END_STATE();
    case 427:
      if (lookahead == 'm') ADVANCE(600);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 430:
      if (lookahead == 'm') ADVANCE(603);
      END_STATE();
    case 431:
      if (lookahead == 'W') ADVANCE(604);
      END_STATE();
    case 432:
      if (lookahead == 'q') ADVANCE(605);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(606);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 437:
      if (lookahead == 'u') ADVANCE(610);
      END_STATE();
    case 438:
      if (lookahead == 'S') ADVANCE(611);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 447:
      if (lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 450:
      if (lookahead == 'p') ADVANCE(623);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(627);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(628);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 456:
      if (lookahead == 'M') ADVANCE(630);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 458:
      if (lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 459:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 460:
      if (lookahead == 'C') ADVANCE(633);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 463:
      if (lookahead == 'd') ADVANCE(636);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(637);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(640);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'T') ADVANCE(642);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 471:
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 472:
      if (lookahead == 'A') ADVANCE(645);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 474:
      if (lookahead == 'c') ADVANCE(647);
      END_STATE();
    case 475:
      if (lookahead == '.') ADVANCE(648);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(649);
      END_STATE();
    case 477:
      if (lookahead == 'm') ADVANCE(650);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 479:
      if (lookahead == 'h') ADVANCE(652);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(653);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_acos);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_asin);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_atan);
      if (lookahead == '2') ADVANCE(655);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_bapz);
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_bdns);
      if (lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_bdse);
      if (lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(660);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_beqz);
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_bgez);
      if (lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(664);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_bgtz);
      if (lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(666);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_blez);
      if (lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(668);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_bltz);
      if (lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(670);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_bnan);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_bnaz);
      if (lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_bnez);
      if (lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_brap);
      if (lookahead == 'z') ADVANCE(674);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_breq);
      if (lookahead == 'z') ADVANCE(677);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_brge);
      if (lookahead == 'z') ADVANCE(678);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_brgt);
      if (lookahead == 'z') ADVANCE(679);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_brle);
      if (lookahead == 'z') ADVANCE(680);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_brlt);
      if (lookahead == 'z') ADVANCE(681);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_brna);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead == 'z') ADVANCE(683);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_brne);
      if (lookahead == 'z') ADVANCE(684);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_ceil);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(685);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(686);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_getd);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(689);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_lbns);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ninf);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_peek);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_pinf);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_poke);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_putd);
      END_STATE();
    case 529:
      if (lookahead == 'd') ADVANCE(690);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_sapz);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_sdns);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_sdse);
      END_STATE();
    case 533:
      if (lookahead == 'c') ADVANCE(691);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_seqz);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_sgez);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_sgtz);
      END_STATE();
    case 537:
      if (lookahead == 'p') ADVANCE(692);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_slez);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_sltz);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_snan);
      if (lookahead == 'z') ADVANCE(693);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_snaz);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_snez);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_sqrt);
      END_STATE();
    case 544:
      if (lookahead == 'c') ADVANCE(694);
      END_STATE();
    case 545:
      if (lookahead == 'd') ADVANCE(695);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 547:
      if (lookahead == 'a') ADVANCE(697);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 549:
      if (lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 550:
      if (lookahead == 'm') ADVANCE(700);
      END_STATE();
    case 551:
      if (lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 552:
      if (lookahead == 'h') ADVANCE(702);
      END_STATE();
    case 553:
      if (lookahead == 'g') ADVANCE(703);
      END_STATE();
    case 554:
      if (lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 557:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 558:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 559:
      if (lookahead == 'M') ADVANCE(708);
      END_STATE();
    case 560:
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '.') ADVANCE(710);
      END_STATE();
    case 562:
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 563:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 564:
      if (lookahead == 'c') ADVANCE(713);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(714);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 568:
      if (lookahead == 'g') ADVANCE(716);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(717);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 571:
      if (lookahead == 'C') ADVANCE(719);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(720);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 576:
      if (lookahead == 'y') ADVANCE(724);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 579:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(727);
      END_STATE();
    case 581:
      if (lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 582:
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(730);
      END_STATE();
    case 584:
      if (lookahead == 'W') ADVANCE(731);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(732);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(733);
      END_STATE();
    case 587:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 588:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 589:
      if (lookahead == 's') ADVANCE(735);
      END_STATE();
    case 590:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(736);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(737);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 595:
      if (lookahead == 'u') ADVANCE(740);
      END_STATE();
    case 596:
      if (lookahead == 'S') ADVANCE(741);
      if (lookahead == 'T') ADVANCE(742);
      END_STATE();
    case 597:
      if (lookahead == 'l') ADVANCE(743);
      END_STATE();
    case 598:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 599:
      if (lookahead == 'a') ADVANCE(744);
      END_STATE();
    case 600:
      if (lookahead == 'u') ADVANCE(745);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(746);
      END_STATE();
    case 602:
      if (lookahead == 'b') ADVANCE(747);
      END_STATE();
    case 603:
      if (lookahead == 'u') ADVANCE(748);
      END_STATE();
    case 604:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 605:
      if (lookahead == 'u') ADVANCE(750);
      END_STATE();
    case 606:
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead == 'i') ADVANCE(752);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(753);
      END_STATE();
    case 608:
      if (lookahead == 'P') ADVANCE(754);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(755);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 611:
      if (lookahead == 'h') ADVANCE(756);
      END_STATE();
    case 612:
      if (lookahead == 'd') ADVANCE(757);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'E') ADVANCE(758);
      if (lookahead == 'G') ADVANCE(759);
      if (lookahead == 'H') ADVANCE(760);
      END_STATE();
    case 614:
      if (lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'A') ADVANCE(762);
      if (lookahead == 'G') ADVANCE(763);
      if (lookahead == 'M') ADVANCE(764);
      if (lookahead == 'P') ADVANCE(765);
      if (lookahead == 'R') ADVANCE(766);
      END_STATE();
    case 616:
      if (lookahead == 'b') ADVANCE(767);
      END_STATE();
    case 617:
      if (lookahead == 'u') ADVANCE(768);
      END_STATE();
    case 618:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 619:
      if (lookahead == 'i') ADVANCE(770);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'C') ADVANCE(771);
      if (lookahead == 'L') ADVANCE(772);
      if (lookahead == 'N') ADVANCE(773);
      if (lookahead == 'O') ADVANCE(774);
      if (lookahead == 'P') ADVANCE(775);
      if (lookahead == 'S') ADVANCE(776);
      if (lookahead == 'V') ADVANCE(777);
      if (lookahead == 'W') ADVANCE(778);
      END_STATE();
    case 621:
      if (lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 622:
      if (lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 623:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 624:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(783);
      END_STATE();
    case 626:
      if (lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(785);
      END_STATE();
    case 628:
      if (lookahead == 'M') ADVANCE(786);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(787);
      END_STATE();
    case 630:
      if (lookahead == 'a') ADVANCE(788);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 632:
      if (lookahead == 'l') ADVANCE(790);
      END_STATE();
    case 633:
      if (lookahead == 'l') ADVANCE(791);
      END_STATE();
    case 634:
      if (lookahead == 'A') ADVANCE(792);
      if (lookahead == 'C') ADVANCE(793);
      if (lookahead == 'I') ADVANCE(794);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 636:
      if (lookahead == 'A') ADVANCE(796);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 639:
      if (lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(799);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 643:
      if (lookahead == 'M') ADVANCE(802);
      END_STATE();
    case 644:
      if (lookahead == 'm') ADVANCE(803);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 646:
      if (lookahead == 'w') ADVANCE(805);
      END_STATE();
    case 647:
      if (lookahead == 'i') ADVANCE(806);
      END_STATE();
    case 648:
      if (lookahead == 'I') ADVANCE(807);
      if (lookahead == 'O') ADVANCE(808);
      END_STATE();
    case 649:
      if (lookahead == 'c') ADVANCE(809);
      END_STATE();
    case 650:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 651:
      if (lookahead == 'R') ADVANCE(811);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 653:
      if (lookahead == 'n') ADVANCE(812);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_atan2);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_bapal);
      END_STATE();
    case 657:
      if (lookahead == 'l') ADVANCE(813);
      END_STATE();
    case 658:
      if (lookahead == 'l') ADVANCE(814);
      END_STATE();
    case 659:
      if (lookahead == 'l') ADVANCE(815);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_beqal);
      END_STATE();
    case 661:
      if (lookahead == 'l') ADVANCE(816);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_bgeal);
      END_STATE();
    case 663:
      if (lookahead == 'l') ADVANCE(817);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_bgtal);
      END_STATE();
    case 665:
      if (lookahead == 'l') ADVANCE(818);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_bleal);
      END_STATE();
    case 667:
      if (lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_bltal);
      END_STATE();
    case 669:
      if (lookahead == 'l') ADVANCE(820);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_bnaal);
      END_STATE();
    case 671:
      if (lookahead == 'l') ADVANCE(821);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_bneal);
      END_STATE();
    case 673:
      if (lookahead == 'l') ADVANCE(822);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_brapz);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_brdns);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_brdse);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_breqz);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_brgez);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_brgtz);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_brlez);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_brltz);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_brnan);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_brnaz);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_brnez);
      END_STATE();
    case 685:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 686:
      if (lookahead == 'a') ADVANCE(824);
      END_STATE();
    case 687:
      if (lookahead == 'o') ADVANCE(825);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_floor);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_round);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(826);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_sleep);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_snanz);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_trunc);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 698:
      if (lookahead == '.') ADVANCE(829);
      if (lookahead == 't') ADVANCE(830);
      END_STATE();
    case 699:
      if (lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 700:
      if (lookahead == 'e') ADVANCE(832);
      END_STATE();
    case 701:
      if (lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 702:
      if (lookahead == 'u') ADVANCE(834);
      END_STATE();
    case 703:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 704:
      if (lookahead == 'm') ADVANCE(835);
      END_STATE();
    case 705:
      if (lookahead == 'i') ADVANCE(836);
      END_STATE();
    case 706:
      if (lookahead == 'l') ADVANCE(837);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'R') ADVANCE(838);
      END_STATE();
    case 708:
      if (lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 710:
      if (lookahead == 'B') ADVANCE(841);
      if (lookahead == 'G') ADVANCE(842);
      if (lookahead == 'K') ADVANCE(843);
      if (lookahead == 'O') ADVANCE(844);
      if (lookahead == 'P') ADVANCE(845);
      if (lookahead == 'R') ADVANCE(846);
      if (lookahead == 'W') ADVANCE(847);
      if (lookahead == 'Y') ADVANCE(848);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(849);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(850);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(851);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(852);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(853);
      END_STATE();
    case 716:
      if (lookahead == 'h') ADVANCE(854);
      END_STATE();
    case 717:
      if (lookahead == 'a') ADVANCE(855);
      END_STATE();
    case 718:
      if (lookahead == 'c') ADVANCE(856);
      END_STATE();
    case 719:
      if (lookahead == 'o') ADVANCE(857);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(858);
      END_STATE();
    case 722:
      if (lookahead == 'e') ADVANCE(859);
      END_STATE();
    case 723:
      if (lookahead == 'o') ADVANCE(860);
      END_STATE();
    case 724:
      if (lookahead == 'S') ADVANCE(861);
      END_STATE();
    case 725:
      if (lookahead == 'n') ADVANCE(862);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(863);
      END_STATE();
    case 727:
      if (lookahead == 'C') ADVANCE(864);
      if (lookahead == 'Q') ADVANCE(865);
      if (lookahead == 'S') ADVANCE(866);
      END_STATE();
    case 728:
      if (lookahead == 'T') ADVANCE(867);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(868);
      END_STATE();
    case 730:
      if (lookahead == 'C') ADVANCE(869);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 732:
      if (lookahead == 'd') ADVANCE(871);
      END_STATE();
    case 733:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 736:
      if (lookahead == 'n') ADVANCE(873);
      END_STATE();
    case 737:
      if (lookahead == 'C') ADVANCE(874);
      if (lookahead == 'Q') ADVANCE(875);
      if (lookahead == 'S') ADVANCE(876);
      END_STATE();
    case 738:
      if (lookahead == 'a') ADVANCE(877);
      END_STATE();
    case 739:
      if (lookahead == 'o') ADVANCE(878);
      END_STATE();
    case 740:
      if (lookahead == 'm') ADVANCE(879);
      END_STATE();
    case 741:
      if (lookahead == 'l') ADVANCE(880);
      END_STATE();
    case 742:
      if (lookahead == 'y') ADVANCE(881);
      END_STATE();
    case 743:
      if (lookahead == 'R') ADVANCE(882);
      END_STATE();
    case 744:
      if (lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 745:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 747:
      if (lookahead == 'l') ADVANCE(885);
      END_STATE();
    case 748:
      if (lookahead == 'm') ADVANCE(886);
      END_STATE();
    case 749:
      if (lookahead == 'a') ADVANCE(887);
      END_STATE();
    case 750:
      if (lookahead == 'a') ADVANCE(888);
      END_STATE();
    case 751:
      if (lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 752:
      if (lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 753:
      if (lookahead == 'i') ADVANCE(891);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 755:
      if (lookahead == 'a') ADVANCE(893);
      END_STATE();
    case 756:
      if (lookahead == 'o') ADVANCE(894);
      END_STATE();
    case 757:
      if (lookahead == 'M') ADVANCE(895);
      END_STATE();
    case 758:
      if (lookahead == 'f') ADVANCE(896);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(897);
      END_STATE();
    case 760:
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 761:
      if (lookahead == 'o') ADVANCE(900);
      END_STATE();
    case 762:
      if (lookahead == 'c') ADVANCE(901);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 764:
      if (lookahead == 'o') ADVANCE(903);
      END_STATE();
    case 765:
      if (lookahead == 'o') ADVANCE(904);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 767:
      if (lookahead == 'H') ADVANCE(906);
      END_STATE();
    case 768:
      if (lookahead == 'r') ADVANCE(907);
      END_STATE();
    case 769:
      if (lookahead == 's') ADVANCE(908);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(909);
      END_STATE();
    case 771:
      if (lookahead == 'a') ADVANCE(910);
      END_STATE();
    case 772:
      if (lookahead == 'i') ADVANCE(911);
      END_STATE();
    case 773:
      if (lookahead == 'i') ADVANCE(912);
      END_STATE();
    case 774:
      if (lookahead == 'x') ADVANCE(913);
      END_STATE();
    case 775:
      if (lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(915);
      END_STATE();
    case 777:
      if (lookahead == 'o') ADVANCE(916);
      END_STATE();
    case 778:
      if (lookahead == 'a') ADVANCE(917);
      END_STATE();
    case 779:
      if (lookahead == 'y') ADVANCE(918);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(919);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'H') ADVANCE(920);
      END_STATE();
    case 782:
      if (lookahead == 'n') ADVANCE(921);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(922);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 785:
      if (lookahead == 'F') ADVANCE(924);
      END_STATE();
    case 786:
      if (lookahead == 'o') ADVANCE(925);
      END_STATE();
    case 787:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 788:
      if (lookahead == 'j') ADVANCE(926);
      END_STATE();
    case 789:
      if (lookahead == 'g') ADVANCE(927);
      END_STATE();
    case 790:
      if (lookahead == 'I') ADVANCE(928);
      if (lookahead == 'S') ADVANCE(929);
      END_STATE();
    case 791:
      if (lookahead == 'a') ADVANCE(930);
      END_STATE();
    case 792:
      if (lookahead == 'n') ADVANCE(931);
      END_STATE();
    case 793:
      if (lookahead == 'o') ADVANCE(932);
      END_STATE();
    case 794:
      if (lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 795:
      if (lookahead == 'g') ADVANCE(934);
      END_STATE();
    case 796:
      if (lookahead == 'l') ADVANCE(935);
      END_STATE();
    case 797:
      if (lookahead == 'P') ADVANCE(936);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 798:
      if (lookahead == 'a') ADVANCE(937);
      END_STATE();
    case 799:
      if (lookahead == 'l') ADVANCE(938);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'T') ADVANCE(939);
      END_STATE();
    case 801:
      if (lookahead == 'D') ADVANCE(940);
      END_STATE();
    case 802:
      if (lookahead == 'o') ADVANCE(941);
      END_STATE();
    case 803:
      if (lookahead == 'i') ADVANCE(942);
      END_STATE();
    case 804:
      if (lookahead == 'o') ADVANCE(943);
      END_STATE();
    case 805:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(944);
      END_STATE();
    case 807:
      if (lookahead == 'n') ADVANCE(945);
      END_STATE();
    case 808:
      if (lookahead == 'u') ADVANCE(946);
      END_STATE();
    case 809:
      if (lookahead == 'a') ADVANCE(947);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'O') ADVANCE(948);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 812:
      if (lookahead == 'g') ADVANCE(950);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_bapzal);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_bdnsal);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_bdseal);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_beqzal);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_bgezal);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_bgtzal);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_blezal);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_bltzal);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_bnazal);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_bnezal);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 824:
      if (lookahead == 'd') ADVANCE(951);
      END_STATE();
    case 825:
      if (lookahead == 'n') ADVANCE(952);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 827:
      if (lookahead == 'a') ADVANCE(953);
      END_STATE();
    case 828:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 829:
      if (lookahead == 'C') ADVANCE(954);
      if (lookahead == 'H') ADVANCE(955);
      END_STATE();
    case 830:
      if (lookahead == 'r') ADVANCE(956);
      END_STATE();
    case 831:
      if (lookahead == 'a') ADVANCE(957);
      END_STATE();
    case 832:
      if (lookahead == 'n') ADVANCE(958);
      END_STATE();
    case 833:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(959);
      END_STATE();
    case 835:
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 836:
      if (lookahead == 'a') ADVANCE(961);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_logictype);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 838:
      if (lookahead == 'a') ADVANCE(962);
      END_STATE();
    case 839:
      if (lookahead == 'm') ADVANCE(963);
      END_STATE();
    case 840:
      if (lookahead == 'a') ADVANCE(964);
      END_STATE();
    case 841:
      if (lookahead == 'l') ADVANCE(965);
      if (lookahead == 'r') ADVANCE(966);
      END_STATE();
    case 842:
      if (lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 843:
      if (lookahead == 'h') ADVANCE(968);
      END_STATE();
    case 844:
      if (lookahead == 'r') ADVANCE(969);
      END_STATE();
    case 845:
      if (lookahead == 'i') ADVANCE(970);
      if (lookahead == 'u') ADVANCE(971);
      END_STATE();
    case 846:
      if (lookahead == 'e') ADVANCE(972);
      END_STATE();
    case 847:
      if (lookahead == 'h') ADVANCE(973);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(974);
      END_STATE();
    case 849:
      if (lookahead == 'i') ADVANCE(975);
      END_STATE();
    case 850:
      if (lookahead == 'i') ADVANCE(976);
      END_STATE();
    case 851:
      if (lookahead == 'T') ADVANCE(977);
      END_STATE();
    case 852:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 853:
      if (lookahead == 'R') ADVANCE(978);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(979);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(980);
      END_STATE();
    case 856:
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 857:
      if (lookahead == 'n') ADVANCE(982);
      END_STATE();
    case 858:
      if (lookahead == 'i') ADVANCE(983);
      END_STATE();
    case 859:
      if (lookahead == 'n') ADVANCE(984);
      END_STATE();
    case 860:
      if (lookahead == 'r') ADVANCE(985);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(986);
      END_STATE();
    case 862:
      if (lookahead == 'm') ADVANCE(987);
      END_STATE();
    case 863:
      if (lookahead == 'V') ADVANCE(988);
      END_STATE();
    case 864:
      if (lookahead == 'o') ADVANCE(989);
      END_STATE();
    case 865:
      if (lookahead == 'u') ADVANCE(990);
      END_STATE();
    case 866:
      if (lookahead == 'l') ADVANCE(991);
      END_STATE();
    case 867:
      if (lookahead == 'y') ADVANCE(992);
      END_STATE();
    case 868:
      if (lookahead == 'i') ADVANCE(993);
      END_STATE();
    case 869:
      if (lookahead == 'o') ADVANCE(994);
      END_STATE();
    case 870:
      if (lookahead == 'i') ADVANCE(995);
      END_STATE();
    case 871:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 872:
      if (lookahead == '.') ADVANCE(996);
      END_STATE();
    case 873:
      if (lookahead == 't') ADVANCE(997);
      END_STATE();
    case 874:
      if (lookahead == 'o') ADVANCE(998);
      END_STATE();
    case 875:
      if (lookahead == 'u') ADVANCE(999);
      END_STATE();
    case 876:
      if (lookahead == 'l') ADVANCE(1000);
      END_STATE();
    case 877:
      if (lookahead == 't') ADVANCE(1001);
      END_STATE();
    case 878:
      if (lookahead == 'g') ADVANCE(1002);
      END_STATE();
    case 879:
      if (lookahead == 'b') ADVANCE(1003);
      END_STATE();
    case 880:
      if (lookahead == 'o') ADVANCE(1004);
      END_STATE();
    case 881:
      if (lookahead == 'p') ADVANCE(1005);
      END_STATE();
    case 882:
      if (lookahead == 'e') ADVANCE(1006);
      END_STATE();
    case 883:
      if (lookahead == 't') ADVANCE(1007);
      END_STATE();
    case 884:
      if (lookahead == 's') ADVANCE(1008);
      END_STATE();
    case 885:
      if (lookahead == 'e') ADVANCE(1009);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'W') ADVANCE(1010);
      END_STATE();
    case 887:
      if (lookahead == 't') ADVANCE(1011);
      END_STATE();
    case 888:
      if (lookahead == 'l') ADVANCE(1012);
      END_STATE();
    case 889:
      if (lookahead == 't') ADVANCE(1013);
      END_STATE();
    case 890:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 891:
      if (lookahead == 'o') ADVANCE(1014);
      END_STATE();
    case 892:
      if (lookahead == 'r') ADVANCE(1015);
      END_STATE();
    case 893:
      if (lookahead == 't') ADVANCE(1016);
      END_STATE();
    case 894:
      if (lookahead == 'o') ADVANCE(1017);
      END_STATE();
    case 895:
      if (lookahead == 'o') ADVANCE(1018);
      END_STATE();
    case 896:
      if (lookahead == 'f') ADVANCE(1019);
      END_STATE();
    case 897:
      if (lookahead == 'o') ADVANCE(1020);
      END_STATE();
    case 898:
      if (lookahead == 's') ADVANCE(1021);
      END_STATE();
    case 899:
      if (lookahead == 'a') ADVANCE(1022);
      END_STATE();
    case 900:
      if (lookahead == 'n') ADVANCE(1023);
      END_STATE();
    case 901:
      if (lookahead == 't') ADVANCE(1024);
      END_STATE();
    case 902:
      if (lookahead == 'n') ADVANCE(1025);
      END_STATE();
    case 903:
      if (lookahead == 'd') ADVANCE(1026);
      END_STATE();
    case 904:
      if (lookahead == 't') ADVANCE(1027);
      END_STATE();
    case 905:
      if (lookahead == 'q') ADVANCE(1028);
      END_STATE();
    case 906:
      if (lookahead == 'a') ADVANCE(1029);
      END_STATE();
    case 907:
      if (lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 908:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 909:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 910:
      if (lookahead == 'r') ADVANCE(1031);
      END_STATE();
    case 911:
      if (lookahead == 'q') ADVANCE(1032);
      END_STATE();
    case 912:
      if (lookahead == 't') ADVANCE(1033);
      END_STATE();
    case 913:
      if (lookahead == 'y') ADVANCE(1034);
      END_STATE();
    case 914:
      if (lookahead == 'l') ADVANCE(1035);
      END_STATE();
    case 915:
      if (lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 916:
      if (lookahead == 'l') ADVANCE(1037);
      END_STATE();
    case 917:
      if (lookahead == 't') ADVANCE(1038);
      END_STATE();
    case 918:
      if (lookahead == 'A') ADVANCE(1039);
      END_STATE();
    case 919:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 920:
      if (lookahead == 'a') ADVANCE(1040);
      END_STATE();
    case 921:
      if (lookahead == 'c') ADVANCE(1041);
      END_STATE();
    case 922:
      if (lookahead == 'H') ADVANCE(1042);
      END_STATE();
    case 923:
      if (lookahead == 'd') ADVANCE(1043);
      END_STATE();
    case 924:
      if (lookahead == 'u') ADVANCE(1044);
      END_STATE();
    case 925:
      if (lookahead == 'd') ADVANCE(1045);
      END_STATE();
    case 926:
      if (lookahead == 'o') ADVANCE(1046);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1047);
      if (lookahead == 'O') ADVANCE(1048);
      END_STATE();
    case 928:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 929:
      if (lookahead == 't') ADVANCE(1049);
      END_STATE();
    case 930:
      if (lookahead == 's') ADVANCE(1050);
      END_STATE();
    case 931:
      if (lookahead == 'g') ADVANCE(1051);
      END_STATE();
    case 932:
      if (lookahead == 'n') ADVANCE(1052);
      END_STATE();
    case 933:
      if (lookahead == 'r') ADVANCE(1053);
      END_STATE();
    case 934:
      if (lookahead == 'C') ADVANCE(1054);
      END_STATE();
    case 935:
      if (lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 936:
      if (lookahead == 'a') ADVANCE(1056);
      END_STATE();
    case 937:
      if (lookahead == 't') ADVANCE(1057);
      END_STATE();
    case 938:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 939:
      if (lookahead == 'o') ADVANCE(1058);
      END_STATE();
    case 940:
      if (lookahead == 'e') ADVANCE(1059);
      END_STATE();
    case 941:
      if (lookahead == 'l') ADVANCE(1060);
      END_STATE();
    case 942:
      if (lookahead == 't') ADVANCE(1061);
      END_STATE();
    case 943:
      if (lookahead == 'm') ADVANCE(1062);
      END_STATE();
    case 944:
      if (lookahead == 'y') ADVANCE(1063);
      END_STATE();
    case 945:
      if (lookahead == 'w') ADVANCE(1064);
      END_STATE();
    case 946:
      if (lookahead == 't') ADVANCE(1065);
      END_STATE();
    case 947:
      if (lookahead == 'l') ADVANCE(1066);
      END_STATE();
    case 948:
      if (lookahead == 'f') ADVANCE(1067);
      END_STATE();
    case 949:
      if (lookahead == 'a') ADVANCE(1068);
      END_STATE();
    case 950:
      if (lookahead == 'G') ADVANCE(1069);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_deg2rad);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_epsilon);
      END_STATE();
    case 953:
      if (lookahead == 't') ADVANCE(1070);
      END_STATE();
    case 954:
      if (lookahead == 'o') ADVANCE(1071);
      END_STATE();
    case 955:
      if (lookahead == 'o') ADVANCE(1072);
      END_STATE();
    case 956:
      if (lookahead == 'o') ADVANCE(1073);
      END_STATE();
    case 957:
      if (lookahead == 's') ADVANCE(1074);
      END_STATE();
    case 958:
      if (lookahead == 't') ADVANCE(1075);
      END_STATE();
    case 959:
      if (lookahead == 'O') ADVANCE(1076);
      END_STATE();
    case 960:
      if (lookahead == 'R') ADVANCE(1077);
      END_STATE();
    case 961:
      if (lookahead == 'l') ADVANCE(1078);
      END_STATE();
    case 962:
      if (lookahead == 't') ADVANCE(1079);
      END_STATE();
    case 963:
      if (lookahead == 'o') ADVANCE(1080);
      END_STATE();
    case 964:
      if (lookahead == 'b') ADVANCE(1081);
      END_STATE();
    case 965:
      if (lookahead == 'a') ADVANCE(1082);
      if (lookahead == 'u') ADVANCE(1083);
      END_STATE();
    case 966:
      if (lookahead == 'o') ADVANCE(1084);
      END_STATE();
    case 967:
      if (lookahead == 'a') ADVANCE(1085);
      if (lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 968:
      if (lookahead == 'a') ADVANCE(1087);
      END_STATE();
    case 969:
      if (lookahead == 'a') ADVANCE(1088);
      END_STATE();
    case 970:
      if (lookahead == 'n') ADVANCE(1089);
      END_STATE();
    case 971:
      if (lookahead == 'r') ADVANCE(1090);
      END_STATE();
    case 972:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 973:
      if (lookahead == 'i') ADVANCE(1091);
      END_STATE();
    case 974:
      if (lookahead == 'l') ADVANCE(1092);
      END_STATE();
    case 975:
      if (lookahead == 'o') ADVANCE(1093);
      END_STATE();
    case 976:
      if (lookahead == 'o') ADVANCE(1094);
      END_STATE();
    case 977:
      if (lookahead == 'y') ADVANCE(1095);
      END_STATE();
    case 978:
      if (lookahead == 'e') ADVANCE(1096);
      END_STATE();
    case 979:
      if (lookahead == 'S') ADVANCE(1097);
      END_STATE();
    case 980:
      if (lookahead == 'i') ADVANCE(1098);
      END_STATE();
    case 981:
      if (lookahead == 'A') ADVANCE(1099);
      if (lookahead == 'K') ADVANCE(1100);
      END_STATE();
    case 982:
      if (lookahead == 'd') ADVANCE(1101);
      END_STATE();
    case 983:
      if (lookahead == 'c') ADVANCE(1102);
      END_STATE();
    case 984:
      if (lookahead == 'c') ADVANCE(1103);
      END_STATE();
    case 985:
      if (lookahead == 'L') ADVANCE(1104);
      if (lookahead == 'M') ADVANCE(1105);
      if (lookahead == 'S') ADVANCE(1106);
      END_STATE();
    case 986:
      if (lookahead == 'a') ADVANCE(1107);
      END_STATE();
    case 987:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 988:
      if (lookahead == 'e') ADVANCE(1109);
      END_STATE();
    case 989:
      if (lookahead == 'u') ADVANCE(1110);
      END_STATE();
    case 990:
      if (lookahead == 'a') ADVANCE(1111);
      END_STATE();
    case 991:
      if (lookahead == 'o') ADVANCE(1112);
      END_STATE();
    case 992:
      if (lookahead == 'p') ADVANCE(1113);
      END_STATE();
    case 993:
      if (lookahead == 'o') ADVANCE(1114);
      END_STATE();
    case 994:
      if (lookahead == 'n') ADVANCE(1115);
      END_STATE();
    case 995:
      if (lookahead == 't') ADVANCE(1116);
      END_STATE();
    case 996:
      if (lookahead == 'C') ADVANCE(1117);
      if (lookahead == 'L') ADVANCE(1118);
      if (lookahead == 'N') ADVANCE(1119);
      if (lookahead == 'O') ADVANCE(1120);
      if (lookahead == 'P') ADVANCE(1121);
      if (lookahead == 'S') ADVANCE(1122);
      if (lookahead == 'U') ADVANCE(1123);
      if (lookahead == 'V') ADVANCE(1124);
      if (lookahead == 'W') ADVANCE(1125);
      END_STATE();
    case 997:
      if (lookahead == 'a') ADVANCE(1126);
      END_STATE();
    case 998:
      if (lookahead == 'u') ADVANCE(1127);
      END_STATE();
    case 999:
      if (lookahead == 'a') ADVANCE(1128);
      END_STATE();
    case 1000:
      if (lookahead == 'o') ADVANCE(1129);
      END_STATE();
    case 1001:
      if (lookahead == 'i') ADVANCE(1130);
      END_STATE();
    case 1002:
      if (lookahead == 'a') ADVANCE(1131);
      END_STATE();
    case 1003:
      if (lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 1004:
      if (lookahead == 't') ADVANCE(1133);
      END_STATE();
    case 1005:
      if (lookahead == 'e') ADVANCE(1134);
      END_STATE();
    case 1006:
      if (lookahead == 's') ADVANCE(1135);
      END_STATE();
    case 1007:
      if (lookahead == 'i') ADVANCE(1136);
      END_STATE();
    case 1008:
      if (lookahead == 'T') ADVANCE(1137);
      END_STATE();
    case 1009:
      if (lookahead == 's') ADVANCE(1138);
      END_STATE();
    case 1010:
      if (lookahead == 'a') ADVANCE(1139);
      END_STATE();
    case 1011:
      if (lookahead == 'h') ADVANCE(1140);
      END_STATE();
    case 1012:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 1013:
      if (lookahead == 'H') ADVANCE(1141);
      END_STATE();
    case 1014:
      if (lookahead == 'n') ADVANCE(1142);
      END_STATE();
    case 1015:
      if (lookahead == 'i') ADVANCE(1143);
      END_STATE();
    case 1016:
      if (lookahead == 'i') ADVANCE(1144);
      END_STATE();
    case 1017:
      if (lookahead == 't') ADVANCE(1145);
      END_STATE();
    case 1018:
      if (lookahead == 'l') ADVANCE(1146);
      END_STATE();
    case 1019:
      if (lookahead == 'i') ADVANCE(1147);
      END_STATE();
    case 1020:
      if (lookahead == 'w') ADVANCE(1148);
      END_STATE();
    case 1021:
      if (lookahead == 'h') ADVANCE(1149);
      END_STATE();
    case 1022:
      if (lookahead == 'l') ADVANCE(1150);
      END_STATE();
    case 1023:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 1024:
      if (lookahead == 'u') ADVANCE(1151);
      END_STATE();
    case 1025:
      if (lookahead == 'e') ADVANCE(1152);
      END_STATE();
    case 1026:
      if (lookahead == 'e') ADVANCE(1153);
      END_STATE();
    case 1027:
      if (lookahead == 'e') ADVANCE(1154);
      END_STATE();
    case 1028:
      if (lookahead == 'u') ADVANCE(1155);
      END_STATE();
    case 1029:
      if (lookahead == 's') ADVANCE(1156);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'A') ADVANCE(1157);
      if (lookahead == 'E') ADVANCE(1158);
      if (lookahead == 'I') ADVANCE(1159);
      if (lookahead == 'O') ADVANCE(1160);
      if (lookahead == 'S') ADVANCE(1161);
      if (lookahead == 'W') ADVANCE(1162);
      END_STATE();
    case 1031:
      if (lookahead == 'b') ADVANCE(1163);
      END_STATE();
    case 1032:
      if (lookahead == 'u') ADVANCE(1164);
      END_STATE();
    case 1033:
      if (lookahead == 'r') ADVANCE(1165);
      END_STATE();
    case 1034:
      if (lookahead == 'g') ADVANCE(1166);
      END_STATE();
    case 1035:
      if (lookahead == 'l') ADVANCE(1167);
      END_STATE();
    case 1036:
      if (lookahead == 'a') ADVANCE(1168);
      END_STATE();
    case 1037:
      if (lookahead == 'a') ADVANCE(1169);
      END_STATE();
    case 1038:
      if (lookahead == 'e') ADVANCE(1170);
      END_STATE();
    case 1039:
      if (lookahead == 'l') ADVANCE(1171);
      END_STATE();
    case 1040:
      if (lookahead == 's') ADVANCE(1172);
      END_STATE();
    case 1041:
      if (lookahead == 'e') ADVANCE(1173);
      END_STATE();
    case 1042:
      if (lookahead == 'a') ADVANCE(1174);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'P') ADVANCE(1175);
      END_STATE();
    case 1044:
      if (lookahead == 'e') ADVANCE(1176);
      END_STATE();
    case 1045:
      if (lookahead == 'e') ADVANCE(1177);
      END_STATE();
    case 1046:
      if (lookahead == 'r') ADVANCE(1178);
      END_STATE();
    case 1047:
      if (lookahead == 'n') ADVANCE(1179);
      END_STATE();
    case 1048:
      if (lookahead == 'u') ADVANCE(1180);
      END_STATE();
    case 1049:
      if (lookahead == 'r') ADVANCE(1181);
      END_STATE();
    case 1050:
      if (lookahead == 's') ADVANCE(1182);
      END_STATE();
    case 1051:
      if (lookahead == 'l') ADVANCE(1183);
      END_STATE();
    case 1052:
      if (lookahead == 's') ADVANCE(1184);
      END_STATE();
    case 1053:
      if (lookahead == 'a') ADVANCE(1185);
      END_STATE();
    case 1054:
      if (lookahead == 'l') ADVANCE(1186);
      END_STATE();
    case 1055:
      if (lookahead == 'r') ADVANCE(1187);
      END_STATE();
    case 1056:
      if (lookahead == 'd') ADVANCE(1188);
      END_STATE();
    case 1057:
      if (lookahead == 'u') ADVANCE(1189);
      END_STATE();
    case 1058:
      if (lookahead == 'W') ADVANCE(1190);
      END_STATE();
    case 1059:
      if (lookahead == 's') ADVANCE(1191);
      END_STATE();
    case 1060:
      if (lookahead == 'e') ADVANCE(1192);
      END_STATE();
    case 1061:
      if (lookahead == 't') ADVANCE(1193);
      END_STATE();
    case 1062:
      if (lookahead == 'a') ADVANCE(1194);
      END_STATE();
    case 1063:
      if (lookahead == 'M') ADVANCE(1195);
      if (lookahead == 'R') ADVANCE(1196);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 1064:
      if (lookahead == 'a') ADVANCE(1197);
      END_STATE();
    case 1065:
      if (lookahead == 'w') ADVANCE(1198);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'R') ADVANCE(1199);
      END_STATE();
    case 1067:
      if (lookahead == 'L') ADVANCE(1200);
      END_STATE();
    case 1068:
      if (lookahead == 'c') ADVANCE(1201);
      END_STATE();
    case 1069:
      if (lookahead == 'a') ADVANCE(1202);
      END_STATE();
    case 1070:
      if (lookahead == 'i') ADVANCE(1203);
      END_STATE();
    case 1071:
      if (lookahead == 'l') ADVANCE(1204);
      END_STATE();
    case 1072:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 1073:
      if (lookahead == 'l') ADVANCE(1205);
      END_STATE();
    case 1074:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 1075:
      if (lookahead == 'E') ADVANCE(1206);
      END_STATE();
    case 1076:
      if (lookahead == 'f') ADVANCE(1207);
      END_STATE();
    case 1077:
      if (lookahead == 'e') ADVANCE(1208);
      END_STATE();
    case 1078:
      if (lookahead == 'H') ADVANCE(1209);
      if (lookahead == 'P') ADVANCE(1210);
      END_STATE();
    case 1079:
      if (lookahead == 'i') ADVANCE(1211);
      END_STATE();
    case 1080:
      if (lookahead == 'r') ADVANCE(1212);
      END_STATE();
    case 1081:
      if (lookahead == 'l') ADVANCE(1213);
      END_STATE();
    case 1082:
      if (lookahead == 'c') ADVANCE(1214);
      END_STATE();
    case 1083:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 1084:
      if (lookahead == 'w') ADVANCE(1215);
      END_STATE();
    case 1085:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 1086:
      if (lookahead == 'e') ADVANCE(1216);
      END_STATE();
    case 1087:
      if (lookahead == 'k') ADVANCE(1217);
      END_STATE();
    case 1088:
      if (lookahead == 'n') ADVANCE(1218);
      END_STATE();
    case 1089:
      if (lookahead == 'k') ADVANCE(421);
      END_STATE();
    case 1090:
      if (lookahead == 'p') ADVANCE(1219);
      END_STATE();
    case 1091:
      if (lookahead == 't') ADVANCE(1220);
      END_STATE();
    case 1092:
      if (lookahead == 'l') ADVANCE(1221);
      END_STATE();
    case 1093:
      if (lookahead == 'n') ADVANCE(1222);
      END_STATE();
    case 1094:
      if (lookahead == 'n') ADVANCE(1223);
      END_STATE();
    case 1095:
      if (lookahead == 'p') ADVANCE(1224);
      END_STATE();
    case 1096:
      if (lookahead == 's') ADVANCE(1225);
      END_STATE();
    case 1097:
      if (lookahead == 'e') ADVANCE(1226);
      END_STATE();
    case 1098:
      if (lookahead == 'o') ADVANCE(1227);
      END_STATE();
    case 1099:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 1100:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 1101:
      if (lookahead == 'i') ADVANCE(1228);
      END_STATE();
    case 1102:
      if (lookahead == 'i') ADVANCE(1229);
      END_STATE();
    case 1103:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 1104:
      if (lookahead == 'e') ADVANCE(1230);
      END_STATE();
    case 1105:
      if (lookahead == 'o') ADVANCE(1231);
      END_STATE();
    case 1106:
      if (lookahead == 'p') ADVANCE(1232);
      END_STATE();
    case 1107:
      if (lookahead == 't') ADVANCE(1233);
      END_STATE();
    case 1108:
      if (lookahead == 'n') ADVANCE(1234);
      END_STATE();
    case 1109:
      if (lookahead == 'l') ADVANCE(1235);
      END_STATE();
    case 1110:
      if (lookahead == 'n') ADVANCE(1236);
      END_STATE();
    case 1111:
      if (lookahead == 'n') ADVANCE(1237);
      END_STATE();
    case 1112:
      if (lookahead == 't') ADVANCE(1238);
      END_STATE();
    case 1113:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 1114:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 1115:
      if (lookahead == 't') ADVANCE(1239);
      END_STATE();
    case 1116:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 1117:
      if (lookahead == 'a') ADVANCE(1240);
      END_STATE();
    case 1118:
      if (lookahead == 'i') ADVANCE(1241);
      END_STATE();
    case 1119:
      if (lookahead == 'i') ADVANCE(1242);
      END_STATE();
    case 1120:
      if (lookahead == 'x') ADVANCE(1243);
      END_STATE();
    case 1121:
      if (lookahead == 'o') ADVANCE(1244);
      END_STATE();
    case 1122:
      if (lookahead == 't') ADVANCE(1245);
      END_STATE();
    case 1123:
      if (lookahead == 'n') ADVANCE(1246);
      END_STATE();
    case 1124:
      if (lookahead == 'o') ADVANCE(1247);
      END_STATE();
    case 1125:
      if (lookahead == 'a') ADVANCE(1248);
      END_STATE();
    case 1126:
      if (lookahead == 'l') ADVANCE(1249);
      END_STATE();
    case 1127:
      if (lookahead == 'n') ADVANCE(1250);
      END_STATE();
    case 1128:
      if (lookahead == 'n') ADVANCE(1251);
      END_STATE();
    case 1129:
      if (lookahead == 't') ADVANCE(1252);
      END_STATE();
    case 1130:
      if (lookahead == 'o') ADVANCE(1253);
      END_STATE();
    case 1131:
      if (lookahead == 't') ADVANCE(1254);
      END_STATE();
    case 1132:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 1133:
      if (lookahead == 'T') ADVANCE(1255);
      END_STATE();
    case 1134:
      if (lookahead == '.') ADVANCE(1256);
      END_STATE();
    case 1135:
      if (lookahead == 'e') ADVANCE(1257);
      END_STATE();
    case 1136:
      if (lookahead == 't') ADVANCE(1258);
      END_STATE();
    case 1137:
      if (lookahead == 'o') ADVANCE(1259);
      END_STATE();
    case 1138:
      if (lookahead == 'I') ADVANCE(1260);
      END_STATE();
    case 1139:
      if (lookahead == 't') ADVANCE(1261);
      END_STATE();
    case 1140:
      if (lookahead == 'e') ADVANCE(1262);
      END_STATE();
    case 1141:
      if (lookahead == 'a') ADVANCE(1263);
      END_STATE();
    case 1142:
      if (lookahead == 'a') ADVANCE(1264);
      END_STATE();
    case 1143:
      if (lookahead == 'o') ADVANCE(1265);
      END_STATE();
    case 1144:
      if (lookahead == 'o') ADVANCE(1266);
      END_STATE();
    case 1145:
      if (lookahead == 'T') ADVANCE(1267);
      END_STATE();
    case 1146:
      if (lookahead == 'e') ADVANCE(1268);
      END_STATE();
    case 1147:
      if (lookahead == 'c') ADVANCE(1269);
      END_STATE();
    case 1148:
      if (lookahead == 't') ADVANCE(1270);
      END_STATE();
    case 1149:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(87);
      END_STATE();
    case 1150:
      if (lookahead == 't') ADVANCE(1271);
      END_STATE();
    case 1151:
      if (lookahead == 'a') ADVANCE(1272);
      END_STATE();
    case 1152:
      if (lookahead == 'r') ADVANCE(1273);
      END_STATE();
    case 1153:
      if (lookahead == '.') ADVANCE(1274);
      END_STATE();
    case 1154:
      if (lookahead == 'n') ADVANCE(1275);
      END_STATE();
    case 1155:
      if (lookahead == 'i') ADVANCE(1276);
      END_STATE();
    case 1156:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 1157:
      if (lookahead == 'i') ADVANCE(1277);
      END_STATE();
    case 1158:
      if (lookahead == 'f') ADVANCE(1278);
      if (lookahead == 'x') ADVANCE(1279);
      END_STATE();
    case 1159:
      if (lookahead == 'n') ADVANCE(1280);
      END_STATE();
    case 1160:
      if (lookahead == 'u') ADVANCE(1281);
      END_STATE();
    case 1161:
      if (lookahead == 'e') ADVANCE(1282);
      END_STATE();
    case 1162:
      if (lookahead == 'a') ADVANCE(1283);
      END_STATE();
    case 1163:
      if (lookahead == 'o') ADVANCE(1284);
      END_STATE();
    case 1164:
      if (lookahead == 'i') ADVANCE(1285);
      END_STATE();
    case 1165:
      if (lookahead == 'o') ADVANCE(1286);
      END_STATE();
    case 1166:
      if (lookahead == 'e') ADVANCE(1287);
      END_STATE();
    case 1167:
      if (lookahead == 'u') ADVANCE(1288);
      END_STATE();
    case 1168:
      if (lookahead == 'm') ADVANCE(1289);
      END_STATE();
    case 1169:
      if (lookahead == 't') ADVANCE(1290);
      END_STATE();
    case 1170:
      if (lookahead == 'r') ADVANCE(1291);
      END_STATE();
    case 1171:
      if (lookahead == 't') ADVANCE(1292);
      END_STATE();
    case 1172:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 1173:
      if (lookahead == 'I') ADVANCE(1293);
      END_STATE();
    case 1174:
      if (lookahead == 's') ADVANCE(1294);
      END_STATE();
    case 1175:
      if (lookahead == 'o') ADVANCE(1295);
      END_STATE();
    case 1176:
      if (lookahead == 'l') ADVANCE(1296);
      END_STATE();
    case 1177:
      if (lookahead == '.') ADVANCE(1297);
      END_STATE();
    case 1178:
      if (lookahead == 'A') ADVANCE(1298);
      END_STATE();
    case 1179:
      if (lookahead == 'p') ADVANCE(1299);
      END_STATE();
    case 1180:
      if (lookahead == 't') ADVANCE(1300);
      END_STATE();
    case 1181:
      if (lookahead == 'e') ADVANCE(1301);
      END_STATE();
    case 1182:
      if (lookahead == '.') ADVANCE(1302);
      END_STATE();
    case 1183:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 1184:
      if (lookahead == 't') ADVANCE(1303);
      END_STATE();
    case 1185:
      if (lookahead == 'd') ADVANCE(1304);
      END_STATE();
    case 1186:
      if (lookahead == 'a') ADVANCE(1305);
      END_STATE();
    case 1187:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 1188:
      if (lookahead == 'I') ADVANCE(1306);
      END_STATE();
    case 1189:
      if (lookahead == 'r') ADVANCE(1307);
      END_STATE();
    case 1190:
      if (lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 1191:
      if (lookahead == 't') ADVANCE(1309);
      END_STATE();
    case 1192:
      if (lookahead == 's') ADVANCE(1310);
      END_STATE();
    case 1193:
      if (lookahead == 'e') ADVANCE(1311);
      END_STATE();
    case 1194:
      if (lookahead == 'l') ADVANCE(1312);
      END_STATE();
    case 1195:
      if (lookahead == 'a') ADVANCE(1313);
      END_STATE();
    case 1196:
      if (lookahead == 'e') ADVANCE(1314);
      END_STATE();
    case 1197:
      if (lookahead == 'r') ADVANCE(1315);
      END_STATE();
    case 1198:
      if (lookahead == 'a') ADVANCE(1316);
      END_STATE();
    case 1199:
      if (lookahead == 'a') ADVANCE(1317);
      END_STATE();
    case 1200:
      if (lookahead == 'i') ADVANCE(1318);
      END_STATE();
    case 1201:
      if (lookahead == 'h') ADVANCE(1319);
      END_STATE();
    case 1202:
      if (lookahead == 's') ADVANCE(1320);
      END_STATE();
    case 1203:
      if (lookahead == 'o') ADVANCE(1321);
      END_STATE();
    case 1204:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 1205:
      if (lookahead == '.') ADVANCE(1322);
      END_STATE();
    case 1206:
      if (lookahead == 'r') ADVANCE(1323);
      END_STATE();
    case 1207:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 1208:
      if (lookahead == 'm') ADVANCE(1324);
      END_STATE();
    case 1209:
      if (lookahead == 'a') ADVANCE(1325);
      END_STATE();
    case 1210:
      if (lookahead == 'a') ADVANCE(1326);
      END_STATE();
    case 1211:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 1212:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 1213:
      if (lookahead == 'e') ADVANCE(1327);
      END_STATE();
    case 1214:
      if (lookahead == 'k') ADVANCE(421);
      END_STATE();
    case 1215:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 1216:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 1217:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 1218:
      if (lookahead == 'g') ADVANCE(1328);
      END_STATE();
    case 1219:
      if (lookahead == 'l') ADVANCE(1329);
      END_STATE();
    case 1220:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 1221:
      if (lookahead == 'o') ADVANCE(1330);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1331);
      if (lookahead == 'L') ADVANCE(1332);
      if (lookahead == 'O') ADVANCE(1333);
      END_STATE();
    case 1223:
      if (lookahead == 'R') ADVANCE(1334);
      END_STATE();
    case 1224:
      if (lookahead == 'e') ADVANCE(1335);
      END_STATE();
    case 1225:
      if (lookahead == 'e') ADVANCE(1336);
      END_STATE();
    case 1226:
      if (lookahead == 'n') ADVANCE(1337);
      END_STATE();
    case 1227:
      if (lookahead == 'n') ADVANCE(1338);
      END_STATE();
    case 1228:
      if (lookahead == 't') ADVANCE(1339);
      END_STATE();
    case 1229:
      if (lookahead == 't') ADVANCE(1340);
      END_STATE();
    case 1230:
      if (lookahead == 'v') ADVANCE(1341);
      END_STATE();
    case 1231:
      if (lookahead == 'd') ADVANCE(1342);
      END_STATE();
    case 1232:
      if (lookahead == 'e') ADVANCE(1343);
      END_STATE();
    case 1233:
      if (lookahead == 'e') ADVANCE(1344);
      END_STATE();
    case 1234:
      if (lookahead == 't') ADVANCE(1345);
      END_STATE();
    case 1235:
      if (lookahead == 'o') ADVANCE(1346);
      END_STATE();
    case 1236:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 1237:
      if (lookahead == 't') ADVANCE(1347);
      END_STATE();
    case 1238:
      if (lookahead == 'H') ADVANCE(1348);
      if (lookahead == 'O') ADVANCE(1349);
      END_STATE();
    case 1239:
      if (lookahead == 'r') ADVANCE(1350);
      END_STATE();
    case 1240:
      if (lookahead == 'r') ADVANCE(1351);
      END_STATE();
    case 1241:
      if (lookahead == 'q') ADVANCE(1352);
      END_STATE();
    case 1242:
      if (lookahead == 't') ADVANCE(1353);
      END_STATE();
    case 1243:
      if (lookahead == 'y') ADVANCE(1354);
      END_STATE();
    case 1244:
      if (lookahead == 'l') ADVANCE(1355);
      END_STATE();
    case 1245:
      if (lookahead == 'e') ADVANCE(1356);
      END_STATE();
    case 1246:
      if (lookahead == 'd') ADVANCE(1357);
      END_STATE();
    case 1247:
      if (lookahead == 'l') ADVANCE(1358);
      END_STATE();
    case 1248:
      if (lookahead == 't') ADVANCE(1359);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'R') ADVANCE(1360);
      END_STATE();
    case 1250:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 1251:
      if (lookahead == 't') ADVANCE(1361);
      END_STATE();
    case 1252:
      if (lookahead == 'H') ADVANCE(1362);
      if (lookahead == 'O') ADVANCE(1363);
      END_STATE();
    case 1253:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 1254:
      if (lookahead == 'i') ADVANCE(1364);
      END_STATE();
    case 1255:
      if (lookahead == 'y') ADVANCE(1365);
      END_STATE();
    case 1256:
      if (lookahead == 'A') ADVANCE(1366);
      if (lookahead == 'B') ADVANCE(1367);
      if (lookahead == 'C') ADVANCE(1368);
      if (lookahead == 'D') ADVANCE(1369);
      if (lookahead == 'E') ADVANCE(1370);
      if (lookahead == 'F') ADVANCE(1371);
      if (lookahead == 'H') ADVANCE(1372);
      if (lookahead == 'I') ADVANCE(1373);
      if (lookahead == 'L') ADVANCE(1374);
      if (lookahead == 'M') ADVANCE(1375);
      if (lookahead == 'N') ADVANCE(1376);
      if (lookahead == 'O') ADVANCE(1377);
      if (lookahead == 'P') ADVANCE(1378);
      if (lookahead == 'Q') ADVANCE(1379);
      if (lookahead == 'R') ADVANCE(1380);
      if (lookahead == 'S') ADVANCE(1381);
      if (lookahead == 'T') ADVANCE(1382);
      if (lookahead == 'V') ADVANCE(1383);
      if (lookahead == 'W') ADVANCE(1384);
      END_STATE();
    case 1257:
      if (lookahead == 'a') ADVANCE(1385);
      END_STATE();
    case 1258:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 1259:
      if (lookahead == 'C') ADVANCE(1386);
      END_STATE();
    case 1260:
      if (lookahead == 'n') ADVANCE(1387);
      END_STATE();
    case 1261:
      if (lookahead == 't') ADVANCE(1388);
      END_STATE();
    case 1262:
      if (lookahead == 'r') ADVANCE(1389);
      END_STATE();
    case 1263:
      if (lookahead == 's') ADVANCE(1390);
      END_STATE();
    case 1264:
      if (lookahead == 'l') ADVANCE(1391);
      END_STATE();
    case 1265:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 1266:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 1267:
      if (lookahead == 'a') ADVANCE(1392);
      END_STATE();
    case 1268:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 1269:
      if (lookahead == 'i') ADVANCE(1393);
      END_STATE();
    case 1270:
      if (lookahead == 'h') ADVANCE(1394);
      END_STATE();
    case 1271:
      if (lookahead == 'h') ADVANCE(1395);
      END_STATE();
    case 1272:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 1273:
      if (lookahead == 'a') ADVANCE(1396);
      END_STATE();
    case 1274:
      if (lookahead == 'C') ADVANCE(1397);
      if (lookahead == 'D') ADVANCE(1398);
      if (lookahead == 'I') ADVANCE(1399);
      END_STATE();
    case 1275:
      if (lookahead == 't') ADVANCE(1400);
      END_STATE();
    case 1276:
      if (lookahead == 'r') ADVANCE(1401);
      END_STATE();
    case 1277:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 1278:
      if (lookahead == 'f') ADVANCE(1402);
      END_STATE();
    case 1279:
      if (lookahead == 't') ADVANCE(1403);
      END_STATE();
    case 1280:
      if (lookahead == 'p') ADVANCE(1404);
      if (lookahead == 't') ADVANCE(1405);
      END_STATE();
    case 1281:
      if (lookahead == 't') ADVANCE(1406);
      END_STATE();
    case 1282:
      if (lookahead == 't') ADVANCE(1407);
      END_STATE();
    case 1283:
      if (lookahead == 's') ADVANCE(1408);
      END_STATE();
    case 1284:
      if (lookahead == 'n') ADVANCE(1409);
      END_STATE();
    case 1285:
      if (lookahead == 'd') ADVANCE(1410);
      END_STATE();
    case 1286:
      if (lookahead == 'g') ADVANCE(1411);
      if (lookahead == 'u') ADVANCE(1412);
      END_STATE();
    case 1287:
      if (lookahead == 'n') ADVANCE(1413);
      END_STATE();
    case 1288:
      if (lookahead == 't') ADVANCE(1414);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1415);
      if (lookahead == 'O') ADVANCE(1416);
      END_STATE();
    case 1290:
      if (lookahead == 'i') ADVANCE(1417);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1418);
      if (lookahead == 'O') ADVANCE(1419);
      END_STATE();
    case 1292:
      if (lookahead == 'i') ADVANCE(1420);
      END_STATE();
    case 1293:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 1294:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 1295:
      if (lookahead == 'w') ADVANCE(1421);
      END_STATE();
    case 1296:
      if (lookahead == 'C') ADVANCE(1422);
      END_STATE();
    case 1297:
      if (lookahead == 'F') ADVANCE(1423);
      if (lookahead == 'M') ADVANCE(1424);
      if (lookahead == 'N') ADVANCE(1425);
      if (lookahead == 'P') ADVANCE(1426);
      if (lookahead == 'R') ADVANCE(1427);
      if (lookahead == 'S') ADVANCE(1428);
      if (lookahead == 'U') ADVANCE(1429);
      END_STATE();
    case 1298:
      if (lookahead == 'x') ADVANCE(1430);
      END_STATE();
    case 1299:
      if (lookahead == 'u') ADVANCE(1431);
      END_STATE();
    case 1300:
      if (lookahead == 'p') ADVANCE(1432);
      END_STATE();
    case 1301:
      if (lookahead == 'n') ADVANCE(1433);
      END_STATE();
    case 1302:
      if (lookahead == 'A') ADVANCE(1434);
      if (lookahead == 'B') ADVANCE(1435);
      if (lookahead == 'C') ADVANCE(1436);
      if (lookahead == 'D') ADVANCE(1437);
      if (lookahead == 'E') ADVANCE(1438);
      if (lookahead == 'F') ADVANCE(1439);
      if (lookahead == 'G') ADVANCE(1440);
      if (lookahead == 'H') ADVANCE(1441);
      if (lookahead == 'I') ADVANCE(1442);
      if (lookahead == 'L') ADVANCE(1443);
      if (lookahead == 'M') ADVANCE(1444);
      if (lookahead == 'N') ADVANCE(1445);
      if (lookahead == 'O') ADVANCE(1446);
      if (lookahead == 'P') ADVANCE(1447);
      if (lookahead == 'S') ADVANCE(1448);
      if (lookahead == 'T') ADVANCE(1449);
      if (lookahead == 'U') ADVANCE(1450);
      if (lookahead == 'W') ADVANCE(1451);
      END_STATE();
    case 1303:
      if (lookahead == 'a') ADVANCE(1452);
      END_STATE();
    case 1304:
      if (lookahead == 'i') ADVANCE(1453);
      END_STATE();
    case 1305:
      if (lookahead == 's') ADVANCE(1454);
      END_STATE();
    case 1306:
      if (lookahead == 'n') ADVANCE(1455);
      END_STATE();
    case 1307:
      if (lookahead == 'e') ADVANCE(1456);
      END_STATE();
    case 1308:
      if (lookahead == 'i') ADVANCE(1457);
      END_STATE();
    case 1309:
      if (lookahead == 'i') ADVANCE(1458);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1459);
      if (lookahead == 'O') ADVANCE(1460);
      END_STATE();
    case 1311:
      if (lookahead == 'r') ADVANCE(1461);
      END_STATE();
    case 1312:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 1313:
      if (lookahead == 'g') ADVANCE(1462);
      END_STATE();
    case 1314:
      if (lookahead == 'l') ADVANCE(1463);
      END_STATE();
    case 1315:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 1316:
      if (lookahead == 'r') ADVANCE(1464);
      END_STATE();
    case 1317:
      if (lookahead == 't') ADVANCE(1465);
      END_STATE();
    case 1318:
      if (lookahead == 'q') ADVANCE(1466);
      END_STATE();
    case 1319:
      if (lookahead == 'i') ADVANCE(1467);
      END_STATE();
    case 1320:
      if (lookahead == 'E') ADVANCE(1468);
      END_STATE();
    case 1321:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 1322:
      if (lookahead == 'D') ADVANCE(1469);
      if (lookahead == 'N') ADVANCE(1470);
      if (lookahead == 'O') ADVANCE(1471);
      if (lookahead == 'P') ADVANCE(1472);
      END_STATE();
    case 1323:
      if (lookahead == 'r') ADVANCE(1473);
      END_STATE();
    case 1324:
      if (lookahead == 'a') ADVANCE(1474);
      END_STATE();
    case 1325:
      if (lookahead == 's') ADVANCE(1475);
      END_STATE();
    case 1326:
      if (lookahead == 'r') ADVANCE(1476);
      END_STATE();
    case 1327:
      if (lookahead == 'G') ADVANCE(1477);
      END_STATE();
    case 1328:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 1329:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 1330:
      if (lookahead == 'w') ADVANCE(421);
      END_STATE();
    case 1331:
      if (lookahead == 'n') ADVANCE(1478);
      END_STATE();
    case 1332:
      if (lookahead == 'i') ADVANCE(1479);
      END_STATE();
    case 1333:
      if (lookahead == 'u') ADVANCE(1480);
      END_STATE();
    case 1334:
      if (lookahead == 'a') ADVANCE(1481);
      END_STATE();
    case 1335:
      if (lookahead == 'I') ADVANCE(1482);
      END_STATE();
    case 1336:
      if (lookahead == 'a') ADVANCE(1483);
      END_STATE();
    case 1337:
      if (lookahead == 's') ADVANCE(1484);
      END_STATE();
    case 1338:
      if (lookahead == 'C') ADVANCE(1485);
      END_STATE();
    case 1339:
      if (lookahead == 'i') ADVANCE(1486);
      END_STATE();
    case 1340:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 1341:
      if (lookahead == 'e') ADVANCE(1487);
      END_STATE();
    case 1342:
      if (lookahead == 'e') ADVANCE(1488);
      END_STATE();
    case 1343:
      if (lookahead == 'e') ADVANCE(1489);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '.') ADVANCE(1490);
      END_STATE();
    case 1345:
      if (lookahead == 'E') ADVANCE(1491);
      END_STATE();
    case 1346:
      if (lookahead == 'c') ADVANCE(1492);
      END_STATE();
    case 1347:
      if (lookahead == 'i') ADVANCE(1493);
      END_STATE();
    case 1348:
      if (lookahead == 'a') ADVANCE(1494);
      END_STATE();
    case 1349:
      if (lookahead == 'c') ADVANCE(1495);
      END_STATE();
    case 1350:
      if (lookahead == 'o') ADVANCE(1496);
      END_STATE();
    case 1351:
      if (lookahead == 'b') ADVANCE(1497);
      END_STATE();
    case 1352:
      if (lookahead == 'u') ADVANCE(1498);
      END_STATE();
    case 1353:
      if (lookahead == 'r') ADVANCE(1499);
      END_STATE();
    case 1354:
      if (lookahead == 'g') ADVANCE(1500);
      END_STATE();
    case 1355:
      if (lookahead == 'l') ADVANCE(1501);
      END_STATE();
    case 1356:
      if (lookahead == 'a') ADVANCE(1502);
      END_STATE();
    case 1357:
      if (lookahead == 'e') ADVANCE(1503);
      END_STATE();
    case 1358:
      if (lookahead == 'a') ADVANCE(1504);
      END_STATE();
    case 1359:
      if (lookahead == 'e') ADVANCE(1505);
      END_STATE();
    case 1360:
      if (lookahead == 'a') ADVANCE(1506);
      END_STATE();
    case 1361:
      if (lookahead == 'i') ADVANCE(1507);
      END_STATE();
    case 1362:
      if (lookahead == 'a') ADVANCE(1508);
      END_STATE();
    case 1363:
      if (lookahead == 'c') ADVANCE(1509);
      END_STATE();
    case 1364:
      if (lookahead == 'o') ADVANCE(1510);
      END_STATE();
    case 1365:
      if (lookahead == 'p') ADVANCE(1511);
      END_STATE();
    case 1366:
      if (lookahead == 'c') ADVANCE(1512);
      if (lookahead == 'i') ADVANCE(1513);
      if (lookahead == 'l') ADVANCE(1514);
      if (lookahead == 'p') ADVANCE(1515);
      if (lookahead == 'u') ADVANCE(1516);
      END_STATE();
    case 1367:
      if (lookahead == 'p') ADVANCE(1517);
      if (lookahead == 'u') ADVANCE(1518);
      END_STATE();
    case 1368:
      if (lookahead == 'e') ADVANCE(1519);
      if (lookahead == 'h') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1521);
      if (lookahead == 'o') ADVANCE(1522);
      if (lookahead == 'u') ADVANCE(1523);
      END_STATE();
    case 1369:
      if (lookahead == 'e') ADVANCE(1524);
      if (lookahead == 'i') ADVANCE(1525);
      if (lookahead == 'r') ADVANCE(1526);
      END_STATE();
    case 1370:
      if (lookahead == 'c') ADVANCE(1527);
      if (lookahead == 'l') ADVANCE(1528);
      if (lookahead == 'n') ADVANCE(1529);
      if (lookahead == 'r') ADVANCE(1530);
      if (lookahead == 'x') ADVANCE(1531);
      END_STATE();
    case 1371:
      if (lookahead == 'i') ADVANCE(1532);
      if (lookahead == 'l') ADVANCE(1533);
      if (lookahead == 'o') ADVANCE(1534);
      if (lookahead == 'u') ADVANCE(1535);
      END_STATE();
    case 1372:
      if (lookahead == 'a') ADVANCE(1536);
      if (lookahead == 'o') ADVANCE(1537);
      END_STATE();
    case 1373:
      if (lookahead == 'd') ADVANCE(1538);
      if (lookahead == 'm') ADVANCE(1539);
      if (lookahead == 'n') ADVANCE(1540);
      END_STATE();
    case 1374:
      if (lookahead == 'i') ADVANCE(1541);
      if (lookahead == 'o') ADVANCE(1542);
      END_STATE();
    case 1375:
      if (lookahead == 'a') ADVANCE(1543);
      if (lookahead == 'i') ADVANCE(1544);
      if (lookahead == 'o') ADVANCE(1545);
      END_STATE();
    case 1376:
      if (lookahead == 'e') ADVANCE(1546);
      END_STATE();
    case 1377:
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == 'p') ADVANCE(1547);
      if (lookahead == 'r') ADVANCE(1548);
      if (lookahead == 'u') ADVANCE(1549);
      END_STATE();
    case 1378:
      if (lookahead == 'a') ADVANCE(1550);
      if (lookahead == 'l') ADVANCE(1551);
      if (lookahead == 'o') ADVANCE(1552);
      if (lookahead == 'r') ADVANCE(1553);
      END_STATE();
    case 1379:
      if (lookahead == 'u') ADVANCE(1554);
      END_STATE();
    case 1380:
      if (lookahead == 'a') ADVANCE(1555);
      if (lookahead == 'e') ADVANCE(1556);
      if (lookahead == 'p') ADVANCE(1557);
      END_STATE();
    case 1381:
      if (lookahead == 'e') ADVANCE(1558);
      if (lookahead == 'i') ADVANCE(1559);
      if (lookahead == 'o') ADVANCE(1560);
      if (lookahead == 't') ADVANCE(1561);
      END_STATE();
    case 1382:
      if (lookahead == 'a') ADVANCE(1562);
      if (lookahead == 'e') ADVANCE(1563);
      if (lookahead == 'h') ADVANCE(1564);
      if (lookahead == 'i') ADVANCE(1565);
      if (lookahead == 'o') ADVANCE(1566);
      if (lookahead == 'r') ADVANCE(1567);
      END_STATE();
    case 1383:
      if (lookahead == 'e') ADVANCE(1568);
      if (lookahead == 'o') ADVANCE(1569);
      END_STATE();
    case 1384:
      if (lookahead == 'a') ADVANCE(1570);
      if (lookahead == 'e') ADVANCE(1571);
      if (lookahead == 'o') ADVANCE(1572);
      END_STATE();
    case 1385:
      if (lookahead == 'r') ADVANCE(1573);
      END_STATE();
    case 1386:
      if (lookahead == 'o') ADVANCE(1574);
      END_STATE();
    case 1387:
      if (lookahead == 'Q') ADVANCE(1575);
      if (lookahead == 'V') ADVANCE(1576);
      END_STATE();
    case 1388:
      if (lookahead == 's') ADVANCE(1577);
      END_STATE();
    case 1389:
      if (lookahead == 'E') ADVANCE(1578);
      END_STATE();
    case 1390:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 1391:
      if (lookahead == 'T') ADVANCE(1579);
      END_STATE();
    case 1392:
      if (lookahead == 'r') ADVANCE(1580);
      END_STATE();
    case 1393:
      if (lookahead == 'e') ADVANCE(1581);
      END_STATE();
    case 1394:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(87);
      END_STATE();
    case 1395:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(87);
      END_STATE();
    case 1396:
      if (lookahead == 't') ADVANCE(1582);
      END_STATE();
    case 1397:
      if (lookahead == 'h') ADVANCE(1583);
      END_STATE();
    case 1398:
      if (lookahead == 'i') ADVANCE(1584);
      END_STATE();
    case 1399:
      if (lookahead == 'd') ADVANCE(1585);
      END_STATE();
    case 1400:
      if (lookahead == 'i') ADVANCE(1586);
      END_STATE();
    case 1401:
      if (lookahead == 'e') ADVANCE(1587);
      END_STATE();
    case 1402:
      if (lookahead == 'i') ADVANCE(1588);
      END_STATE();
    case 1403:
      if (lookahead == 'e') ADVANCE(1589);
      END_STATE();
    case 1404:
      if (lookahead == 'u') ADVANCE(1590);
      END_STATE();
    case 1405:
      if (lookahead == 'e') ADVANCE(1591);
      END_STATE();
    case 1406:
      if (lookahead == 'p') ADVANCE(1592);
      END_STATE();
    case 1407:
      if (lookahead == 't') ADVANCE(1593);
      END_STATE();
    case 1408:
      if (lookahead == 't') ADVANCE(1594);
      END_STATE();
    case 1409:
      if (lookahead == 'D') ADVANCE(1595);
      END_STATE();
    case 1410:
      if (lookahead == 'C') ADVANCE(1596);
      if (lookahead == 'N') ADVANCE(1597);
      if (lookahead == 'O') ADVANCE(1598);
      if (lookahead == 'P') ADVANCE(1599);
      if (lookahead == 'V') ADVANCE(1600);
      END_STATE();
    case 1411:
      if (lookahead == 'e') ADVANCE(1601);
      END_STATE();
    case 1412:
      if (lookahead == 's') ADVANCE(1602);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1603);
      if (lookahead == 'O') ADVANCE(1604);
      END_STATE();
    case 1414:
      if (lookahead == 'a') ADVANCE(1605);
      END_STATE();
    case 1415:
      if (lookahead == 'n') ADVANCE(1606);
      END_STATE();
    case 1416:
      if (lookahead == 'u') ADVANCE(1607);
      END_STATE();
    case 1417:
      if (lookahead == 'l') ADVANCE(1608);
      END_STATE();
    case 1418:
      if (lookahead == 'n') ADVANCE(1609);
      END_STATE();
    case 1419:
      if (lookahead == 'u') ADVANCE(1610);
      END_STATE();
    case 1420:
      if (lookahead == 't') ADVANCE(1611);
      END_STATE();
    case 1421:
      if (lookahead == 'e') ADVANCE(1612);
      END_STATE();
    case 1422:
      if (lookahead == 'o') ADVANCE(1613);
      END_STATE();
    case 1423:
      if (lookahead == 'o') ADVANCE(1614);
      END_STATE();
    case 1424:
      if (lookahead == 'o') ADVANCE(1615);
      END_STATE();
    case 1425:
      if (lookahead == 'o') ADVANCE(1616);
      END_STATE();
    case 1426:
      if (lookahead == 'a') ADVANCE(1617);
      END_STATE();
    case 1427:
      if (lookahead == 'o') ADVANCE(1618);
      END_STATE();
    case 1428:
      if (lookahead == 't') ADVANCE(1619);
      END_STATE();
    case 1429:
      if (lookahead == 'n') ADVANCE(1620);
      END_STATE();
    case 1430:
      if (lookahead == 'i') ADVANCE(1621);
      END_STATE();
    case 1431:
      if (lookahead == 't') ADVANCE(1622);
      END_STATE();
    case 1432:
      if (lookahead == 'u') ADVANCE(1623);
      END_STATE();
    case 1433:
      if (lookahead == 'g') ADVANCE(1624);
      END_STATE();
    case 1434:
      if (lookahead == 'c') ADVANCE(1625);
      if (lookahead == 'p') ADVANCE(1626);
      END_STATE();
    case 1435:
      if (lookahead == 'a') ADVANCE(1627);
      if (lookahead == 'e') ADVANCE(1628);
      if (lookahead == 'l') ADVANCE(1629);
      if (lookahead == 'o') ADVANCE(1630);
      END_STATE();
    case 1436:
      if (lookahead == 'a') ADVANCE(1631);
      if (lookahead == 'i') ADVANCE(1632);
      if (lookahead == 'r') ADVANCE(1633);
      END_STATE();
    case 1437:
      if (lookahead == 'a') ADVANCE(1634);
      if (lookahead == 'i') ADVANCE(1635);
      if (lookahead == 'r') ADVANCE(1636);
      END_STATE();
    case 1438:
      if (lookahead == 'g') ADVANCE(1637);
      END_STATE();
    case 1439:
      if (lookahead == 'l') ADVANCE(1638);
      END_STATE();
    case 1440:
      if (lookahead == 'a') ADVANCE(1639);
      if (lookahead == 'l') ADVANCE(1640);
      END_STATE();
    case 1441:
      if (lookahead == 'e') ADVANCE(1641);
      END_STATE();
    case 1442:
      if (lookahead == 'n') ADVANCE(1642);
      END_STATE();
    case 1443:
      if (lookahead == 'i') ADVANCE(1643);
      END_STATE();
    case 1444:
      if (lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'o') ADVANCE(1645);
      END_STATE();
    case 1445:
      if (lookahead == 'o') ADVANCE(1646);
      END_STATE();
    case 1446:
      if (lookahead == 'r') ADVANCE(1647);
      END_STATE();
    case 1447:
      if (lookahead == 'l') ADVANCE(1648);
      if (lookahead == 'r') ADVANCE(1649);
      END_STATE();
    case 1448:
      if (lookahead == 'c') ADVANCE(1650);
      if (lookahead == 'e') ADVANCE(1651);
      if (lookahead == 'o') ADVANCE(1652);
      if (lookahead == 'u') ADVANCE(1653);
      END_STATE();
    case 1449:
      if (lookahead == 'o') ADVANCE(1654);
      END_STATE();
    case 1450:
      if (lookahead == 'n') ADVANCE(1655);
      END_STATE();
    case 1451:
      if (lookahead == 'r') ADVANCE(1656);
      END_STATE();
    case 1452:
      if (lookahead == 'n') ADVANCE(1657);
      END_STATE();
    case 1453:
      if (lookahead == 'a') ADVANCE(1658);
      END_STATE();
    case 1454:
      if (lookahead == 's') ADVANCE(1659);
      END_STATE();
    case 1455:
      if (lookahead == 'd') ADVANCE(1660);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'D') ADVANCE(1661);
      if (lookahead == 'E') ADVANCE(1662);
      if (lookahead == 'I') ADVANCE(1663);
      if (lookahead == 'O') ADVANCE(1664);
      if (lookahead == 'S') ADVANCE(1665);
      END_STATE();
    case 1457:
      if (lookahead == 'g') ADVANCE(1666);
      END_STATE();
    case 1458:
      if (lookahead == 'n') ADVANCE(1667);
      END_STATE();
    case 1459:
      if (lookahead == 'n') ADVANCE(1668);
      END_STATE();
    case 1460:
      if (lookahead == 'u') ADVANCE(1669);
      END_STATE();
    case 1461:
      if (lookahead == 'M') ADVANCE(1670);
      END_STATE();
    case 1462:
      if (lookahead == 'n') ADVANCE(1671);
      END_STATE();
    case 1463:
      if (lookahead == 'a') ADVANCE(1672);
      END_STATE();
    case 1464:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 1465:
      if (lookahead == 'i') ADVANCE(1673);
      END_STATE();
    case 1466:
      if (lookahead == 'u') ADVANCE(1674);
      END_STATE();
    case 1467:
      if (lookahead == 'n') ADVANCE(1675);
      END_STATE();
    case 1468:
      if (lookahead == 'f') ADVANCE(1676);
      END_STATE();
    case 1469:
      if (lookahead == 'r') ADVANCE(1677);
      END_STATE();
    case 1470:
      if (lookahead == 'o') ADVANCE(1678);
      END_STATE();
    case 1471:
      if (lookahead == 'f') ADVANCE(1679);
      END_STATE();
    case 1472:
      if (lookahead == 'r') ADVANCE(1680);
      END_STATE();
    case 1473:
      if (lookahead == 'o') ADVANCE(1681);
      END_STATE();
    case 1474:
      if (lookahead == 'i') ADVANCE(1682);
      END_STATE();
    case 1475:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 1476:
      if (lookahead == 'e') ADVANCE(1683);
      END_STATE();
    case 1477:
      if (lookahead == 'o') ADVANCE(1684);
      END_STATE();
    case 1478:
      if (lookahead == 'p') ADVANCE(1685);
      END_STATE();
    case 1479:
      if (lookahead == 'm') ADVANCE(1686);
      END_STATE();
    case 1480:
      if (lookahead == 't') ADVANCE(1687);
      END_STATE();
    case 1481:
      if (lookahead == 't') ADVANCE(1688);
      END_STATE();
    case 1482:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 1483:
      if (lookahead == 'r') ADVANCE(1689);
      END_STATE();
    case 1484:
      if (lookahead == 'o') ADVANCE(1690);
      END_STATE();
    case 1485:
      if (lookahead == 'o') ADVANCE(1691);
      END_STATE();
    case 1486:
      if (lookahead == 'o') ADVANCE(1692);
      END_STATE();
    case 1487:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 1488:
      if (lookahead == '.') ADVANCE(1693);
      END_STATE();
    case 1489:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 1490:
      if (lookahead == 'A') ADVANCE(1694);
      if (lookahead == 'D') ADVANCE(1695);
      if (lookahead == 'U') ADVANCE(1696);
      END_STATE();
    case 1491:
      if (lookahead == 'f') ADVANCE(1697);
      END_STATE();
    case 1492:
      if (lookahead == 'i') ADVANCE(1698);
      END_STATE();
    case 1493:
      if (lookahead == 't') ADVANCE(1699);
      END_STATE();
    case 1494:
      if (lookahead == 's') ADVANCE(1700);
      END_STATE();
    case 1495:
      if (lookahead == 'c') ADVANCE(1701);
      END_STATE();
    case 1496:
      if (lookahead == 'l') ADVANCE(1702);
      END_STATE();
    case 1497:
      if (lookahead == 'o') ADVANCE(1703);
      END_STATE();
    case 1498:
      if (lookahead == 'i') ADVANCE(1704);
      END_STATE();
    case 1499:
      if (lookahead == 'o') ADVANCE(1705);
      END_STATE();
    case 1500:
      if (lookahead == 'e') ADVANCE(1706);
      END_STATE();
    case 1501:
      if (lookahead == 'u') ADVANCE(1707);
      END_STATE();
    case 1502:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 1503:
      if (lookahead == 'f') ADVANCE(1708);
      END_STATE();
    case 1504:
      if (lookahead == 't') ADVANCE(1709);
      END_STATE();
    case 1505:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 1506:
      if (lookahead == 't') ADVANCE(1710);
      END_STATE();
    case 1507:
      if (lookahead == 't') ADVANCE(1711);
      END_STATE();
    case 1508:
      if (lookahead == 's') ADVANCE(1712);
      END_STATE();
    case 1509:
      if (lookahead == 'c') ADVANCE(1713);
      END_STATE();
    case 1510:
      if (lookahead == 'n') ADVANCE(1714);
      END_STATE();
    case 1511:
      if (lookahead == 'e') ADVANCE(1715);
      END_STATE();
    case 1512:
      if (lookahead == 'c') ADVANCE(1716);
      if (lookahead == 't') ADVANCE(1717);
      END_STATE();
    case 1513:
      if (lookahead == 'r') ADVANCE(1718);
      END_STATE();
    case 1514:
      if (lookahead == 'i') ADVANCE(1719);
      END_STATE();
    case 1515:
      if (lookahead == 'e') ADVANCE(1720);
      END_STATE();
    case 1516:
      if (lookahead == 't') ADVANCE(1721);
      END_STATE();
    case 1517:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 1518:
      if (lookahead == 'r') ADVANCE(1722);
      END_STATE();
    case 1519:
      if (lookahead == 'l') ADVANCE(1723);
      END_STATE();
    case 1520:
      if (lookahead == 'a') ADVANCE(1724);
      END_STATE();
    case 1521:
      if (lookahead == 'e') ADVANCE(1725);
      END_STATE();
    case 1522:
      if (lookahead == 'l') ADVANCE(1726);
      if (lookahead == 'm') ADVANCE(1727);
      if (lookahead == 'n') ADVANCE(1728);
      END_STATE();
    case 1523:
      if (lookahead == 'r') ADVANCE(1729);
      END_STATE();
    case 1524:
      if (lookahead == 's') ADVANCE(1730);
      END_STATE();
    case 1525:
      if (lookahead == 's') ADVANCE(1731);
      END_STATE();
    case 1526:
      if (lookahead == 'i') ADVANCE(1732);
      if (lookahead == 'y') ADVANCE(1733);
      END_STATE();
    case 1527:
      if (lookahead == 'c') ADVANCE(1734);
      END_STATE();
    case 1528:
      if (lookahead == 'e') ADVANCE(1735);
      END_STATE();
    case 1529:
      if (lookahead == 't') ADVANCE(1736);
      if (lookahead == 'v') ADVANCE(1737);
      END_STATE();
    case 1530:
      if (lookahead == 'r') ADVANCE(1738);
      END_STATE();
    case 1531:
      if (lookahead == 'h') ADVANCE(1739);
      if (lookahead == 'p') ADVANCE(1740);
      END_STATE();
    case 1532:
      if (lookahead == 'l') ADVANCE(1741);
      END_STATE();
    case 1533:
      if (lookahead == 'i') ADVANCE(1742);
      if (lookahead == 'u') ADVANCE(1743);
      END_STATE();
    case 1534:
      if (lookahead == 'r') ADVANCE(1744);
      END_STATE();
    case 1535:
      if (lookahead == 'e') ADVANCE(1745);
      END_STATE();
    case 1536:
      if (lookahead == 'r') ADVANCE(1746);
      END_STATE();
    case 1537:
      if (lookahead == 'r') ADVANCE(1747);
      END_STATE();
    case 1538:
      if (lookahead == 'l') ADVANCE(1748);
      END_STATE();
    case 1539:
      if (lookahead == 'p') ADVANCE(1749);
      END_STATE();
    case 1540:
      if (lookahead == 'c') ADVANCE(1750);
      if (lookahead == 'd') ADVANCE(1751);
      if (lookahead == 't') ADVANCE(1752);
      END_STATE();
    case 1541:
      if (lookahead == 'n') ADVANCE(1753);
      END_STATE();
    case 1542:
      if (lookahead == 'c') ADVANCE(1754);
      END_STATE();
    case 1543:
      if (lookahead == 'n') ADVANCE(1755);
      if (lookahead == 's') ADVANCE(1756);
      if (lookahead == 'x') ADVANCE(1757);
      END_STATE();
    case 1544:
      if (lookahead == 'n') ADVANCE(1758);
      END_STATE();
    case 1545:
      if (lookahead == 'd') ADVANCE(1759);
      END_STATE();
    case 1546:
      if (lookahead == 'x') ADVANCE(1760);
      END_STATE();
    case 1547:
      if (lookahead == 'e') ADVANCE(1761);
      END_STATE();
    case 1548:
      if (lookahead == 'b') ADVANCE(1762);
      if (lookahead == 'i') ADVANCE(1763);
      END_STATE();
    case 1549:
      if (lookahead == 't') ADVANCE(1764);
      END_STATE();
    case 1550:
      if (lookahead == 's') ADVANCE(1765);
      END_STATE();
    case 1551:
      if (lookahead == 'a') ADVANCE(1766);
      END_STATE();
    case 1552:
      if (lookahead == 's') ADVANCE(1767);
      if (lookahead == 'w') ADVANCE(1768);
      END_STATE();
    case 1553:
      if (lookahead == 'e') ADVANCE(1769);
      if (lookahead == 'o') ADVANCE(1770);
      END_STATE();
    case 1554:
      if (lookahead == 'a') ADVANCE(1771);
      END_STATE();
    case 1555:
      if (lookahead == 't') ADVANCE(1772);
      END_STATE();
    case 1556:
      if (lookahead == 'E') ADVANCE(1773);
      if (lookahead == 'a') ADVANCE(1774);
      if (lookahead == 'c') ADVANCE(1775);
      if (lookahead == 'f') ADVANCE(1776);
      if (lookahead == 'q') ADVANCE(1777);
      if (lookahead == 't') ADVANCE(1778);
      END_STATE();
    case 1557:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 1558:
      if (lookahead == 'm') ADVANCE(1779);
      if (lookahead == 't') ADVANCE(1780);
      END_STATE();
    case 1559:
      if (lookahead == 'g') ADVANCE(1781);
      if (lookahead == 'z') ADVANCE(1782);
      END_STATE();
    case 1560:
      if (lookahead == 'l') ADVANCE(1783);
      if (lookahead == 'u') ADVANCE(1784);
      END_STATE();
    case 1561:
      if (lookahead == 'r') ADVANCE(1785);
      END_STATE();
    case 1562:
      if (lookahead == 'r') ADVANCE(1786);
      END_STATE();
    case 1563:
      if (lookahead == 'm') ADVANCE(1787);
      END_STATE();
    case 1564:
      if (lookahead == 'r') ADVANCE(1788);
      END_STATE();
    case 1565:
      if (lookahead == 'm') ADVANCE(1789);
      END_STATE();
    case 1566:
      if (lookahead == 't') ADVANCE(1790);
      END_STATE();
    case 1567:
      if (lookahead == 'u') ADVANCE(1791);
      END_STATE();
    case 1568:
      if (lookahead == 'l') ADVANCE(1792);
      if (lookahead == 'r') ADVANCE(1793);
      END_STATE();
    case 1569:
      if (lookahead == 'l') ADVANCE(1794);
      END_STATE();
    case 1570:
      if (lookahead == 't') ADVANCE(1795);
      END_STATE();
    case 1571:
      if (lookahead == 'i') ADVANCE(1796);
      END_STATE();
    case 1572:
      if (lookahead == 'r') ADVANCE(1797);
      END_STATE();
    case 1573:
      if (lookahead == 'c') ADVANCE(1798);
      END_STATE();
    case 1574:
      if (lookahead == 'n') ADVANCE(1799);
      END_STATE();
    case 1575:
      if (lookahead == 'u') ADVANCE(1800);
      END_STATE();
    case 1576:
      if (lookahead == 'i') ADVANCE(1801);
      END_STATE();
    case 1577:
      if (lookahead == 'T') ADVANCE(1802);
      END_STATE();
    case 1578:
      if (lookahead == 'v') ADVANCE(1803);
      END_STATE();
    case 1579:
      if (lookahead == 'e') ADVANCE(1804);
      END_STATE();
    case 1580:
      if (lookahead == 'g') ADVANCE(1805);
      END_STATE();
    case 1581:
      if (lookahead == 'n') ADVANCE(1806);
      END_STATE();
    case 1582:
      if (lookahead == 'i') ADVANCE(1807);
      END_STATE();
    case 1583:
      if (lookahead == 'a') ADVANCE(1808);
      END_STATE();
    case 1584:
      if (lookahead == 's') ADVANCE(1809);
      END_STATE();
    case 1585:
      if (lookahead == 'l') ADVANCE(1810);
      END_STATE();
    case 1586:
      if (lookahead == 'a') ADVANCE(1811);
      END_STATE();
    case 1587:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 1588:
      if (lookahead == 'c') ADVANCE(1812);
      END_STATE();
    case 1589:
      if (lookahead == 'r') ADVANCE(1813);
      END_STATE();
    case 1590:
      if (lookahead == 't') ADVANCE(1814);
      END_STATE();
    case 1591:
      if (lookahead == 'r') ADVANCE(1815);
      END_STATE();
    case 1592:
      if (lookahead == 'u') ADVANCE(1816);
      END_STATE();
    case 1593:
      if (lookahead == 'i') ADVANCE(1817);
      END_STATE();
    case 1594:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 1595:
      if (lookahead == 'i') ADVANCE(1818);
      END_STATE();
    case 1596:
      if (lookahead == 'a') ADVANCE(1819);
      END_STATE();
    case 1597:
      if (lookahead == 'i') ADVANCE(1820);
      END_STATE();
    case 1598:
      if (lookahead == 'x') ADVANCE(1821);
      END_STATE();
    case 1599:
      if (lookahead == 'o') ADVANCE(1822);
      END_STATE();
    case 1600:
      if (lookahead == 'o') ADVANCE(1823);
      END_STATE();
    case 1601:
      if (lookahead == 'n') ADVANCE(1824);
      END_STATE();
    case 1602:
      if (lookahead == 'O') ADVANCE(1825);
      END_STATE();
    case 1603:
      if (lookahead == 'n') ADVANCE(1826);
      END_STATE();
    case 1604:
      if (lookahead == 'u') ADVANCE(1827);
      END_STATE();
    case 1605:
      if (lookahead == 'n') ADVANCE(1828);
      END_STATE();
    case 1606:
      if (lookahead == 'p') ADVANCE(1829);
      END_STATE();
    case 1607:
      if (lookahead == 't') ADVANCE(1830);
      END_STATE();
    case 1608:
      if (lookahead == 'e') ADVANCE(1831);
      END_STATE();
    case 1609:
      if (lookahead == 'p') ADVANCE(1832);
      END_STATE();
    case 1610:
      if (lookahead == 't') ADVANCE(1833);
      END_STATE();
    case 1611:
      if (lookahead == 'u') ADVANCE(1834);
      END_STATE();
    case 1612:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 1613:
      if (lookahead == 's') ADVANCE(1835);
      END_STATE();
    case 1614:
      if (lookahead == 'l') ADVANCE(1836);
      END_STATE();
    case 1615:
      if (lookahead == 'v') ADVANCE(1837);
      END_STATE();
    case 1616:
      if (lookahead == 'n') ADVANCE(1838);
      END_STATE();
    case 1617:
      if (lookahead == 't') ADVANCE(1839);
      END_STATE();
    case 1618:
      if (lookahead == 'a') ADVANCE(1840);
      END_STATE();
    case 1619:
      if (lookahead == 'o') ADVANCE(1841);
      END_STATE();
    case 1620:
      if (lookahead == 'l') ADVANCE(1842);
      END_STATE();
    case 1621:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'H') ADVANCE(1843);
      END_STATE();
    case 1623:
      if (lookahead == 't') ADVANCE(1844);
      END_STATE();
    case 1624:
      if (lookahead == 't') ADVANCE(1845);
      END_STATE();
    case 1625:
      if (lookahead == 'c') ADVANCE(1846);
      END_STATE();
    case 1626:
      if (lookahead == 'p') ADVANCE(1847);
      END_STATE();
    case 1627:
      if (lookahead == 'c') ADVANCE(1848);
      if (lookahead == 't') ADVANCE(1849);
      END_STATE();
    case 1628:
      if (lookahead == 'l') ADVANCE(1850);
      END_STATE();
    case 1629:
      if (lookahead == 'o') ADVANCE(1851);
      END_STATE();
    case 1630:
      if (lookahead == 't') ADVANCE(1852);
      END_STATE();
    case 1631:
      if (lookahead == 'r') ADVANCE(1853);
      END_STATE();
    case 1632:
      if (lookahead == 'r') ADVANCE(1854);
      END_STATE();
    case 1633:
      if (lookahead == 'e') ADVANCE(1855);
      END_STATE();
    case 1634:
      if (lookahead == 't') ADVANCE(1856);
      END_STATE();
    case 1635:
      if (lookahead == 'r') ADVANCE(1857);
      END_STATE();
    case 1636:
      if (lookahead == 'i') ADVANCE(1858);
      END_STATE();
    case 1637:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 1638:
      if (lookahead == 'a') ADVANCE(1859);
      END_STATE();
    case 1639:
      if (lookahead == 's') ADVANCE(1860);
      END_STATE();
    case 1640:
      if (lookahead == 'a') ADVANCE(1861);
      END_STATE();
    case 1641:
      if (lookahead == 'l') ADVANCE(1862);
      END_STATE();
    case 1642:
      if (lookahead == 'g') ADVANCE(1863);
      END_STATE();
    case 1643:
      if (lookahead == 'q') ADVANCE(1864);
      END_STATE();
    case 1644:
      if (lookahead == 'g') ADVANCE(1865);
      END_STATE();
    case 1645:
      if (lookahead == 't') ADVANCE(1866);
      END_STATE();
    case 1646:
      if (lookahead == 'n') ADVANCE(1867);
      END_STATE();
    case 1647:
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'g') ADVANCE(1868);
      END_STATE();
    case 1648:
      if (lookahead == 'a') ADVANCE(1869);
      END_STATE();
    case 1649:
      if (lookahead == 'o') ADVANCE(1870);
      END_STATE();
    case 1650:
      if (lookahead == 'a') ADVANCE(1871);
      END_STATE();
    case 1651:
      if (lookahead == 'n') ADVANCE(1872);
      END_STATE();
    case 1652:
      if (lookahead == 'u') ADVANCE(1873);
      END_STATE();
    case 1653:
      if (lookahead == 'i') ADVANCE(1874);
      END_STATE();
    case 1654:
      if (lookahead == 'o') ADVANCE(1875);
      if (lookahead == 'r') ADVANCE(1876);
      END_STATE();
    case 1655:
      if (lookahead == 'i') ADVANCE(1877);
      END_STATE();
    case 1656:
      if (lookahead == 'e') ADVANCE(1878);
      END_STATE();
    case 1657:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 1658:
      if (lookahead == 'n') ADVANCE(1879);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '.') ADVANCE(1880);
      END_STATE();
    case 1660:
      if (lookahead == 'e') ADVANCE(1881);
      END_STATE();
    case 1661:
      if (lookahead == 'i') ADVANCE(1882);
      END_STATE();
    case 1662:
      if (lookahead == 'x') ADVANCE(1883);
      END_STATE();
    case 1663:
      if (lookahead == 'n') ADVANCE(1884);
      END_STATE();
    case 1664:
      if (lookahead == 'u') ADVANCE(1885);
      END_STATE();
    case 1665:
      if (lookahead == 'e') ADVANCE(1886);
      END_STATE();
    case 1666:
      if (lookahead == 'h') ADVANCE(1887);
      END_STATE();
    case 1667:
      if (lookahead == 'a') ADVANCE(1888);
      END_STATE();
    case 1668:
      if (lookahead == 'p') ADVANCE(1889);
      END_STATE();
    case 1669:
      if (lookahead == 't') ADVANCE(1890);
      END_STATE();
    case 1670:
      if (lookahead == 'o') ADVANCE(1891);
      END_STATE();
    case 1671:
      if (lookahead == 'i') ADVANCE(1892);
      END_STATE();
    case 1672:
      if (lookahead == 't') ADVANCE(1893);
      END_STATE();
    case 1673:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 1674:
      if (lookahead == 'i') ADVANCE(1894);
      END_STATE();
    case 1675:
      if (lookahead == 'g') ADVANCE(1895);
      END_STATE();
    case 1676:
      if (lookahead == 'f') ADVANCE(1896);
      END_STATE();
    case 1677:
      if (lookahead == 'a') ADVANCE(1897);
      END_STATE();
    case 1678:
      if (lookahead == 'n') ADVANCE(1898);
      END_STATE();
    case 1679:
      if (lookahead == 'f') ADVANCE(1899);
      END_STATE();
    case 1680:
      if (lookahead == 'e') ADVANCE(1900);
      END_STATE();
    case 1681:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 1682:
      if (lookahead == 'n') ADVANCE(1901);
      END_STATE();
    case 1683:
      if (lookahead == 'n') ADVANCE(1902);
      END_STATE();
    case 1684:
      if (lookahead == 'o') ADVANCE(1903);
      END_STATE();
    case 1685:
      if (lookahead == 'u') ADVANCE(1904);
      END_STATE();
    case 1686:
      if (lookahead == 'i') ADVANCE(1905);
      END_STATE();
    case 1687:
      if (lookahead == 'p') ADVANCE(1906);
      END_STATE();
    case 1688:
      if (lookahead == 'i') ADVANCE(1907);
      END_STATE();
    case 1689:
      if (lookahead == 'c') ADVANCE(1908);
      END_STATE();
    case 1690:
      if (lookahead == 'r') ADVANCE(1909);
      END_STATE();
    case 1691:
      if (lookahead == 'd') ADVANCE(1910);
      END_STATE();
    case 1692:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 1693:
      if (lookahead == 'D') ADVANCE(1911);
      if (lookahead == 'S') ADVANCE(1912);
      if (lookahead == 'U') ADVANCE(1913);
      END_STATE();
    case 1694:
      if (lookahead == 'l') ADVANCE(1914);
      END_STATE();
    case 1695:
      if (lookahead == 'e') ADVANCE(1915);
      END_STATE();
    case 1696:
      if (lookahead == 'n') ADVANCE(1916);
      END_STATE();
    case 1697:
      if (lookahead == 'f') ADVANCE(1917);
      END_STATE();
    case 1698:
      if (lookahead == 't') ADVANCE(1918);
      END_STATE();
    case 1699:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 1700:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 1701:
      if (lookahead == 'u') ADVANCE(1919);
      END_STATE();
    case 1702:
      if (lookahead == 'R') ADVANCE(1920);
      END_STATE();
    case 1703:
      if (lookahead == 'n') ADVANCE(1921);
      END_STATE();
    case 1704:
      if (lookahead == 'd') ADVANCE(1922);
      END_STATE();
    case 1705:
      if (lookahead == 'g') ADVANCE(1923);
      if (lookahead == 'u') ADVANCE(1924);
      END_STATE();
    case 1706:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 1707:
      if (lookahead == 't') ADVANCE(1925);
      END_STATE();
    case 1708:
      if (lookahead == 'i') ADVANCE(1926);
      END_STATE();
    case 1709:
      if (lookahead == 'i') ADVANCE(1927);
      END_STATE();
    case 1710:
      if (lookahead == 'i') ADVANCE(1928);
      END_STATE();
    case 1711:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 1712:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 1713:
      if (lookahead == 'u') ADVANCE(1929);
      END_STATE();
    case 1714:
      if (lookahead == 'P') ADVANCE(1930);
      END_STATE();
    case 1715:
      if (lookahead == '.') ADVANCE(1931);
      END_STATE();
    case 1716:
      if (lookahead == 'e') ADVANCE(1932);
      END_STATE();
    case 1717:
      if (lookahead == 'i') ADVANCE(1933);
      END_STATE();
    case 1718:
      if (lookahead == 'R') ADVANCE(1934);
      END_STATE();
    case 1719:
      if (lookahead == 'g') ADVANCE(1935);
      END_STATE();
    case 1720:
      if (lookahead == 'x') ADVANCE(421);
      END_STATE();
    case 1721:
      if (lookahead == 'o') ADVANCE(1936);
      END_STATE();
    case 1722:
      if (lookahead == 'n') ADVANCE(1937);
      END_STATE();
    case 1723:
      if (lookahead == 'e') ADVANCE(1938);
      END_STATE();
    case 1724:
      if (lookahead == 'n') ADVANCE(1939);
      if (lookahead == 'r') ADVANCE(1940);
      END_STATE();
    case 1725:
      if (lookahead == 'a') ADVANCE(1941);
      END_STATE();
    case 1726:
      if (lookahead == 'l') ADVANCE(1942);
      if (lookahead == 'o') ADVANCE(1943);
      END_STATE();
    case 1727:
      if (lookahead == 'b') ADVANCE(1944);
      if (lookahead == 'p') ADVANCE(1945);
      END_STATE();
    case 1728:
      if (lookahead == 't') ADVANCE(1946);
      END_STATE();
    case 1729:
      if (lookahead == 'r') ADVANCE(1947);
      END_STATE();
    case 1730:
      if (lookahead == 't') ADVANCE(1948);
      END_STATE();
    case 1731:
      if (lookahead == 't') ADVANCE(1949);
      END_STATE();
    case 1732:
      if (lookahead == 'l') ADVANCE(1950);
      END_STATE();
    case 1733:
      if (lookahead == 'M') ADVANCE(1951);
      END_STATE();
    case 1734:
      if (lookahead == 'e') ADVANCE(1952);
      END_STATE();
    case 1735:
      if (lookahead == 'v') ADVANCE(1953);
      END_STATE();
    case 1736:
      if (lookahead == 'i') ADVANCE(1954);
      END_STATE();
    case 1737:
      if (lookahead == 'i') ADVANCE(1955);
      END_STATE();
    case 1738:
      if (lookahead == 'o') ADVANCE(1956);
      END_STATE();
    case 1739:
      if (lookahead == 'a') ADVANCE(1957);
      END_STATE();
    case 1740:
      if (lookahead == 'o') ADVANCE(1958);
      END_STATE();
    case 1741:
      if (lookahead == 't') ADVANCE(1959);
      END_STATE();
    case 1742:
      if (lookahead == 'g') ADVANCE(1960);
      END_STATE();
    case 1743:
      if (lookahead == 's') ADVANCE(1961);
      END_STATE();
    case 1744:
      if (lookahead == 'c') ADVANCE(1962);
      if (lookahead == 'w') ADVANCE(1963);
      END_STATE();
    case 1745:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 1746:
      if (lookahead == 'v') ADVANCE(1964);
      END_STATE();
    case 1747:
      if (lookahead == 'i') ADVANCE(1965);
      END_STATE();
    case 1748:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 1749:
      if (lookahead == 'o') ADVANCE(1966);
      END_STATE();
    case 1750:
      if (lookahead == 'l') ADVANCE(1967);
      END_STATE();
    case 1751:
      if (lookahead == 'e') ADVANCE(1968);
      END_STATE();
    case 1752:
      if (lookahead == 'e') ADVANCE(1969);
      END_STATE();
    case 1753:
      if (lookahead == 'e') ADVANCE(1970);
      END_STATE();
    case 1754:
      if (lookahead == 'k') ADVANCE(421);
      END_STATE();
    case 1755:
      if (lookahead == 'u') ADVANCE(1971);
      END_STATE();
    case 1756:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 1757:
      if (lookahead == 'i') ADVANCE(1972);
      END_STATE();
    case 1758:
      if (lookahead == 'e') ADVANCE(1973);
      if (lookahead == 'i') ADVANCE(1974);
      END_STATE();
    case 1759:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 1760:
      if (lookahead == 't') ADVANCE(1975);
      END_STATE();
    case 1761:
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(1976);
      END_STATE();
    case 1762:
      if (lookahead == 'i') ADVANCE(1977);
      END_STATE();
    case 1763:
      if (lookahead == 'e') ADVANCE(1978);
      END_STATE();
    case 1764:
      if (lookahead == 'p') ADVANCE(1979);
      END_STATE();
    case 1765:
      if (lookahead == 's') ADVANCE(1980);
      END_STATE();
    case 1766:
      if (lookahead == 'n') ADVANCE(1981);
      END_STATE();
    case 1767:
      if (lookahead == 'i') ADVANCE(1982);
      END_STATE();
    case 1768:
      if (lookahead == 'e') ADVANCE(1983);
      END_STATE();
    case 1769:
      if (lookahead == 'f') ADVANCE(1984);
      if (lookahead == 's') ADVANCE(1985);
      END_STATE();
    case 1770:
      if (lookahead == 'g') ADVANCE(1986);
      END_STATE();
    case 1771:
      if (lookahead == 'n') ADVANCE(1987);
      END_STATE();
    case 1772:
      if (lookahead == 'i') ADVANCE(1988);
      END_STATE();
    case 1773:
      if (lookahead == 'n') ADVANCE(1989);
      END_STATE();
    case 1774:
      if (lookahead == 'g') ADVANCE(1990);
      END_STATE();
    case 1775:
      if (lookahead == 'i') ADVANCE(1991);
      END_STATE();
    case 1776:
      if (lookahead == 'e') ADVANCE(1992);
      END_STATE();
    case 1777:
      if (lookahead == 'u') ADVANCE(1993);
      END_STATE();
    case 1778:
      if (lookahead == 'u') ADVANCE(1994);
      END_STATE();
    case 1779:
      if (lookahead == 'i') ADVANCE(1995);
      END_STATE();
    case 1780:
      if (lookahead == 't') ADVANCE(1996);
      END_STATE();
    case 1781:
      if (lookahead == 'n') ADVANCE(1997);
      END_STATE();
    case 1782:
      if (lookahead == 'e') ADVANCE(1998);
      END_STATE();
    case 1783:
      if (lookahead == 'a') ADVANCE(1999);
      END_STATE();
    case 1784:
      if (lookahead == 'n') ADVANCE(2000);
      END_STATE();
    case 1785:
      if (lookahead == 'e') ADVANCE(2001);
      END_STATE();
    case 1786:
      if (lookahead == 'g') ADVANCE(2002);
      END_STATE();
    case 1787:
      if (lookahead == 'p') ADVANCE(2003);
      END_STATE();
    case 1788:
      if (lookahead == 'o') ADVANCE(2004);
      if (lookahead == 'u') ADVANCE(2005);
      END_STATE();
    case 1789:
      if (lookahead == 'e') ADVANCE(2006);
      END_STATE();
    case 1790:
      if (lookahead == 'a') ADVANCE(2007);
      END_STATE();
    case 1791:
      if (lookahead == 'e') ADVANCE(2008);
      END_STATE();
    case 1792:
      if (lookahead == 'o') ADVANCE(2009);
      END_STATE();
    case 1793:
      if (lookahead == 't') ADVANCE(2010);
      END_STATE();
    case 1794:
      if (lookahead == 'u') ADVANCE(2011);
      END_STATE();
    case 1795:
      if (lookahead == 't') ADVANCE(2012);
      END_STATE();
    case 1796:
      if (lookahead == 'g') ADVANCE(2013);
      END_STATE();
    case 1797:
      if (lookahead == 'k') ADVANCE(2014);
      END_STATE();
    case 1798:
      if (lookahead == 'h') ADVANCE(2015);
      END_STATE();
    case 1799:
      if (lookahead == 't') ADVANCE(2016);
      END_STATE();
    case 1800:
      if (lookahead == 'e') ADVANCE(2017);
      END_STATE();
    case 1801:
      if (lookahead == 'c') ADVANCE(2018);
      END_STATE();
    case 1802:
      if (lookahead == 'o') ADVANCE(2019);
      END_STATE();
    case 1803:
      if (lookahead == 'e') ADVANCE(2020);
      END_STATE();
    case 1804:
      if (lookahead == 'm') ADVANCE(2021);
      END_STATE();
    case 1805:
      if (lookahead == 'e') ADVANCE(2022);
      END_STATE();
    case 1806:
      if (lookahead == 'c') ADVANCE(2023);
      END_STATE();
    case 1807:
      if (lookahead == 'o') ADVANCE(2024);
      END_STATE();
    case 1808:
      if (lookahead == 'r') ADVANCE(2025);
      END_STATE();
    case 1809:
      if (lookahead == 'c') ADVANCE(2026);
      END_STATE();
    case 1810:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 1811:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 1812:
      if (lookahead == 'i') ADVANCE(2027);
      END_STATE();
    case 1813:
      if (lookahead == 'n') ADVANCE(2028);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 1815:
      if (lookahead == 'n') ADVANCE(2029);
      END_STATE();
    case 1816:
      if (lookahead == 't') ADVANCE(2030);
      END_STATE();
    case 1817:
      if (lookahead == 'n') ADVANCE(2031);
      END_STATE();
    case 1818:
      if (lookahead == 'o') ADVANCE(2032);
      END_STATE();
    case 1819:
      if (lookahead == 'r') ADVANCE(2033);
      END_STATE();
    case 1820:
      if (lookahead == 't') ADVANCE(2034);
      END_STATE();
    case 1821:
      if (lookahead == 'y') ADVANCE(2035);
      END_STATE();
    case 1822:
      if (lookahead == 'l') ADVANCE(2036);
      END_STATE();
    case 1823:
      if (lookahead == 'l') ADVANCE(2037);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(2038);
      if (lookahead == 'O') ADVANCE(2039);
      END_STATE();
    case 1825:
      if (lookahead == 'x') ADVANCE(2040);
      END_STATE();
    case 1826:
      if (lookahead == 'p') ADVANCE(2041);
      END_STATE();
    case 1827:
      if (lookahead == 't') ADVANCE(2042);
      END_STATE();
    case 1828:
      if (lookahead == 't') ADVANCE(2043);
      END_STATE();
    case 1829:
      if (lookahead == 'u') ADVANCE(2044);
      END_STATE();
    case 1830:
      if (lookahead == 'p') ADVANCE(2045);
      END_STATE();
    case 1831:
      if (lookahead == 's') ADVANCE(2046);
      END_STATE();
    case 1832:
      if (lookahead == 'u') ADVANCE(2047);
      END_STATE();
    case 1833:
      if (lookahead == 'p') ADVANCE(2048);
      END_STATE();
    case 1834:
      if (lookahead == 'd') ADVANCE(2049);
      END_STATE();
    case 1835:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 1836:
      if (lookahead == 'l') ADVANCE(2050);
      END_STATE();
    case 1837:
      if (lookahead == 'e') ADVANCE(2051);
      END_STATE();
    case 1838:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 1839:
      if (lookahead == 'h') ADVANCE(2052);
      END_STATE();
    case 1840:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 1841:
      if (lookahead == 'r') ADVANCE(2053);
      END_STATE();
    case 1842:
      if (lookahead == 'o') ADVANCE(2054);
      END_STATE();
    case 1843:
      if (lookahead == 'a') ADVANCE(2055);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'H') ADVANCE(2056);
      END_STATE();
    case 1845:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 1846:
      if (lookahead == 'e') ADVANCE(2057);
      END_STATE();
    case 1847:
      if (lookahead == 'l') ADVANCE(2058);
      END_STATE();
    case 1848:
      if (lookahead == 'k') ADVANCE(421);
      END_STATE();
    case 1849:
      if (lookahead == 't') ADVANCE(2059);
      END_STATE();
    case 1850:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 1851:
      if (lookahead == 'c') ADVANCE(2060);
      END_STATE();
    case 1852:
      if (lookahead == 't') ADVANCE(2061);
      END_STATE();
    case 1853:
      if (lookahead == 't') ADVANCE(2062);
      END_STATE();
    case 1854:
      if (lookahead == 'c') ADVANCE(2063);
      END_STATE();
    case 1855:
      if (lookahead == 'd') ADVANCE(2064);
      END_STATE();
    case 1856:
      if (lookahead == 'a') ADVANCE(2065);
      END_STATE();
    case 1857:
      if (lookahead == 't') ADVANCE(2066);
      END_STATE();
    case 1858:
      if (lookahead == 'l') ADVANCE(2067);
      END_STATE();
    case 1859:
      if (lookahead == 'r') ADVANCE(2068);
      END_STATE();
    case 1860:
      if (lookahead == 'F') ADVANCE(2069);
      END_STATE();
    case 1861:
      if (lookahead == 's') ADVANCE(2070);
      END_STATE();
    case 1862:
      if (lookahead == 'm') ADVANCE(2071);
      END_STATE();
    case 1863:
      if (lookahead == 'o') ADVANCE(2072);
      END_STATE();
    case 1864:
      if (lookahead == 'u') ADVANCE(2073);
      END_STATE();
    case 1865:
      if (lookahead == 'a') ADVANCE(2074);
      END_STATE();
    case 1866:
      if (lookahead == 'h') ADVANCE(2075);
      END_STATE();
    case 1867:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 1868:
      if (lookahead == 'a') ADVANCE(2076);
      END_STATE();
    case 1869:
      if (lookahead == 'n') ADVANCE(2077);
      END_STATE();
    case 1870:
      if (lookahead == 'g') ADVANCE(2078);
      END_STATE();
    case 1871:
      if (lookahead == 'n') ADVANCE(2079);
      END_STATE();
    case 1872:
      if (lookahead == 's') ADVANCE(2080);
      END_STATE();
    case 1873:
      if (lookahead == 'n') ADVANCE(2081);
      END_STATE();
    case 1874:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 1875:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 1876:
      if (lookahead == 'p') ADVANCE(2082);
      END_STATE();
    case 1877:
      if (lookahead == 'f') ADVANCE(2083);
      END_STATE();
    case 1878:
      if (lookahead == 'c') ADVANCE(2084);
      END_STATE();
    case 1879:
      if (lookahead == 'c') ADVANCE(2085);
      END_STATE();
    case 1880:
      if (lookahead == 'A') ADVANCE(2086);
      if (lookahead == 'C') ADVANCE(2087);
      if (lookahead == 'D') ADVANCE(2088);
      if (lookahead == 'F') ADVANCE(2089);
      if (lookahead == 'I') ADVANCE(2090);
      if (lookahead == 'K') ADVANCE(2091);
      if (lookahead == 'O') ADVANCE(2092);
      if (lookahead == 'R') ADVANCE(2093);
      if (lookahead == 'S') ADVANCE(2094);
      if (lookahead == 'T') ADVANCE(2095);
      END_STATE();
    case 1881:
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 1882:
      if (lookahead == 'f') ADVANCE(2096);
      END_STATE();
    case 1883:
      if (lookahead == 't') ADVANCE(2097);
      END_STATE();
    case 1884:
      if (lookahead == 'p') ADVANCE(2098);
      END_STATE();
    case 1885:
      if (lookahead == 't') ADVANCE(2099);
      END_STATE();
    case 1886:
      if (lookahead == 't') ADVANCE(2100);
      END_STATE();
    case 1887:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 1888:
      if (lookahead == 't') ADVANCE(2101);
      END_STATE();
    case 1889:
      if (lookahead == 'u') ADVANCE(2102);
      END_STATE();
    case 1890:
      if (lookahead == 'p') ADVANCE(2103);
      END_STATE();
    case 1891:
      if (lookahead == 'd') ADVANCE(2104);
      END_STATE();
    case 1892:
      if (lookahead == 't') ADVANCE(2105);
      END_STATE();
    case 1893:
      if (lookahead == 'i') ADVANCE(2106);
      END_STATE();
    case 1894:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 1895:
      if (lookahead == 'C') ADVANCE(2107);
      END_STATE();
    case 1896:
      if (lookahead == 'i') ADVANCE(2108);
      END_STATE();
    case 1897:
      if (lookahead == 'u') ADVANCE(2109);
      END_STATE();
    case 1898:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 1899:
      if (lookahead == 'l') ADVANCE(2110);
      END_STATE();
    case 1900:
      if (lookahead == 's') ADVANCE(2111);
      END_STATE();
    case 1901:
      if (lookahead == 'i') ADVANCE(2112);
      END_STATE();
    case 1902:
      if (lookahead == 't') ADVANCE(2113);
      END_STATE();
    case 1903:
      if (lookahead == 'd') ADVANCE(2114);
      END_STATE();
    case 1904:
      if (lookahead == 't') ADVANCE(2115);
      END_STATE();
    case 1905:
      if (lookahead == 't') ADVANCE(2116);
      END_STATE();
    case 1906:
      if (lookahead == 'u') ADVANCE(2117);
      END_STATE();
    case 1907:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 1908:
      if (lookahead == 'h') ADVANCE(2118);
      END_STATE();
    case 1909:
      if (lookahead == 'M') ADVANCE(2119);
      END_STATE();
    case 1910:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 1911:
      if (lookahead == 'o') ADVANCE(2120);
      END_STATE();
    case 1912:
      if (lookahead == 't') ADVANCE(2121);
      END_STATE();
    case 1913:
      if (lookahead == 'p') ADVANCE(2122);
      END_STATE();
    case 1914:
      if (lookahead == 'i') ADVANCE(2123);
      END_STATE();
    case 1915:
      if (lookahead == 'a') ADVANCE(2124);
      if (lookahead == 'c') ADVANCE(2125);
      END_STATE();
    case 1916:
      if (lookahead == 'c') ADVANCE(2126);
      END_STATE();
    case 1917:
      if (lookahead == 'i') ADVANCE(2127);
      END_STATE();
    case 1918:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 1919:
      if (lookahead == 'p') ADVANCE(2128);
      END_STATE();
    case 1920:
      if (lookahead == 'u') ADVANCE(2129);
      END_STATE();
    case 1921:
      if (lookahead == 'D') ADVANCE(2130);
      END_STATE();
    case 1922:
      if (lookahead == 'C') ADVANCE(2131);
      if (lookahead == 'N') ADVANCE(2132);
      if (lookahead == 'P') ADVANCE(2133);
      if (lookahead == 'V') ADVANCE(2134);
      END_STATE();
    case 1923:
      if (lookahead == 'e') ADVANCE(2135);
      END_STATE();
    case 1924:
      if (lookahead == 's') ADVANCE(2136);
      END_STATE();
    case 1925:
      if (lookahead == 'a') ADVANCE(2137);
      END_STATE();
    case 1926:
      if (lookahead == 'n') ADVANCE(2138);
      END_STATE();
    case 1927:
      if (lookahead == 'l') ADVANCE(2139);
      END_STATE();
    case 1928:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 1929:
      if (lookahead == 'p') ADVANCE(2140);
      END_STATE();
    case 1930:
      if (lookahead == 'r') ADVANCE(2141);
      END_STATE();
    case 1931:
      if (lookahead == 'C') ADVANCE(2142);
      if (lookahead == 'D') ADVANCE(2143);
      if (lookahead == 'E') ADVANCE(2144);
      if (lookahead == 'F') ADVANCE(2145);
      if (lookahead == 'G') ADVANCE(2146);
      if (lookahead == 'H') ADVANCE(2147);
      if (lookahead == 'L') ADVANCE(2148);
      if (lookahead == 'M') ADVANCE(2149);
      if (lookahead == 'N') ADVANCE(2150);
      if (lookahead == 'O') ADVANCE(2151);
      if (lookahead == 'P') ADVANCE(2152);
      if (lookahead == 'Q') ADVANCE(2153);
      if (lookahead == 'R') ADVANCE(2154);
      if (lookahead == 'S') ADVANCE(2155);
      if (lookahead == 'T') ADVANCE(2156);
      if (lookahead == 'V') ADVANCE(2157);
      END_STATE();
    case 1932:
      if (lookahead == 'l') ADVANCE(2158);
      END_STATE();
    case 1933:
      if (lookahead == 'v') ADVANCE(2159);
      END_STATE();
    case 1934:
      if (lookahead == 'e') ADVANCE(2160);
      END_STATE();
    case 1935:
      if (lookahead == 'n') ADVANCE(2161);
      END_STATE();
    case 1936:
      if (lookahead == 'L') ADVANCE(2162);
      if (lookahead == 'S') ADVANCE(2163);
      END_STATE();
    case 1937:
      if (lookahead == 'T') ADVANCE(2164);
      END_STATE();
    case 1938:
      if (lookahead == 's') ADVANCE(2165);
      END_STATE();
    case 1939:
      if (lookahead == 'n') ADVANCE(2166);
      END_STATE();
    case 1940:
      if (lookahead == 'g') ADVANCE(2167);
      END_STATE();
    case 1941:
      if (lookahead == 'r') ADVANCE(2168);
      END_STATE();
    case 1942:
      if (lookahead == 'e') ADVANCE(2169);
      END_STATE();
    case 1943:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 1944:
      if (lookahead == 'u') ADVANCE(2170);
      END_STATE();
    case 1945:
      if (lookahead == 'l') ADVANCE(2171);
      END_STATE();
    case 1946:
      if (lookahead == 'a') ADVANCE(2172);
      END_STATE();
    case 1947:
      if (lookahead == 'e') ADVANCE(2173);
      END_STATE();
    case 1948:
      if (lookahead == 'i') ADVANCE(2174);
      END_STATE();
    case 1949:
      if (lookahead == 'a') ADVANCE(2175);
      END_STATE();
    case 1950:
      if (lookahead == 'l') ADVANCE(2176);
      END_STATE();
    case 1951:
      if (lookahead == 'a') ADVANCE(2177);
      END_STATE();
    case 1952:
      if (lookahead == 'n') ADVANCE(2178);
      END_STATE();
    case 1953:
      if (lookahead == 'a') ADVANCE(2179);
      END_STATE();
    case 1954:
      if (lookahead == 't') ADVANCE(2180);
      END_STATE();
    case 1955:
      if (lookahead == 'r') ADVANCE(2181);
      END_STATE();
    case 1956:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 1957:
      if (lookahead == 'u') ADVANCE(2182);
      END_STATE();
    case 1958:
      if (lookahead == 'r') ADVANCE(2183);
      END_STATE();
    case 1959:
      if (lookahead == 'r') ADVANCE(2184);
      END_STATE();
    case 1960:
      if (lookahead == 'h') ADVANCE(2185);
      END_STATE();
    case 1961:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 1962:
      if (lookahead == 'e') ADVANCE(2186);
      END_STATE();
    case 1963:
      if (lookahead == 'a') ADVANCE(2187);
      END_STATE();
    case 1964:
      if (lookahead == 'e') ADVANCE(2188);
      END_STATE();
    case 1965:
      if (lookahead == 'z') ADVANCE(2189);
      END_STATE();
    case 1966:
      if (lookahead == 'r') ADVANCE(2190);
      END_STATE();
    case 1967:
      if (lookahead == 'i') ADVANCE(2191);
      END_STATE();
    case 1968:
      if (lookahead == 'x') ADVANCE(421);
      END_STATE();
    case 1969:
      if (lookahead == 'r') ADVANCE(2192);
      END_STATE();
    case 1970:
      if (lookahead == 'N') ADVANCE(2193);
      END_STATE();
    case 1971:
      if (lookahead == 'a') ADVANCE(2194);
      END_STATE();
    case 1972:
      if (lookahead == 'm') ADVANCE(2195);
      END_STATE();
    case 1973:
      if (lookahead == 'a') ADVANCE(2196);
      END_STATE();
    case 1974:
      if (lookahead == 'm') ADVANCE(2197);
      END_STATE();
    case 1975:
      if (lookahead == 'W') ADVANCE(2198);
      END_STATE();
    case 1976:
      if (lookahead == 'a') ADVANCE(2199);
      END_STATE();
    case 1977:
      if (lookahead == 't') ADVANCE(2200);
      END_STATE();
    case 1978:
      if (lookahead == 'n') ADVANCE(2201);
      END_STATE();
    case 1979:
      if (lookahead == 'u') ADVANCE(2202);
      END_STATE();
    case 1980:
      if (lookahead == 'e') ADVANCE(2203);
      END_STATE();
    case 1981:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 1982:
      if (lookahead == 't') ADVANCE(2204);
      END_STATE();
    case 1983:
      if (lookahead == 'r') ADVANCE(2205);
      END_STATE();
    case 1984:
      if (lookahead == 'a') ADVANCE(2206);
      END_STATE();
    case 1985:
      if (lookahead == 's') ADVANCE(2207);
      END_STATE();
    case 1986:
      if (lookahead == 'r') ADVANCE(2208);
      END_STATE();
    case 1987:
      if (lookahead == 't') ADVANCE(2209);
      END_STATE();
    case 1988:
      if (lookahead == 'o') ADVANCE(2210);
      END_STATE();
    case 1989:
      if (lookahead == 't') ADVANCE(2211);
      END_STATE();
    case 1990:
      if (lookahead == 'e') ADVANCE(2212);
      END_STATE();
    case 1991:
      if (lookahead == 'p') ADVANCE(2213);
      END_STATE();
    case 1992:
      if (lookahead == 'r') ADVANCE(2214);
      END_STATE();
    case 1993:
      if (lookahead == 'e') ADVANCE(2215);
      if (lookahead == 'i') ADVANCE(2216);
      END_STATE();
    case 1994:
      if (lookahead == 'r') ADVANCE(2217);
      END_STATE();
    case 1995:
      if (lookahead == 'M') ADVANCE(2218);
      END_STATE();
    case 1996:
      if (lookahead == 'i') ADVANCE(2219);
      END_STATE();
    case 1997:
      if (lookahead == 'a') ADVANCE(2220);
      END_STATE();
    case 1998:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(421);
      END_STATE();
    case 1999:
      if (lookahead == 'r') ADVANCE(2221);
      END_STATE();
    case 2000:
      if (lookahead == 'd') ADVANCE(2222);
      END_STATE();
    case 2001:
      if (lookahead == 's') ADVANCE(2223);
      END_STATE();
    case 2002:
      if (lookahead == 'e') ADVANCE(2224);
      END_STATE();
    case 2003:
      if (lookahead == 'e') ADVANCE(2225);
      END_STATE();
    case 2004:
      if (lookahead == 't') ADVANCE(2226);
      END_STATE();
    case 2005:
      if (lookahead == 's') ADVANCE(2227);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'T') ADVANCE(2228);
      END_STATE();
    case 2007:
      if (lookahead == 'l') ADVANCE(2229);
      END_STATE();
    case 2008:
      if (lookahead == 'A') ADVANCE(2230);
      END_STATE();
    case 2009:
      if (lookahead == 'c') ADVANCE(2231);
      END_STATE();
    case 2010:
      if (lookahead == 'i') ADVANCE(2232);
      END_STATE();
    case 2011:
      if (lookahead == 'm') ADVANCE(2233);
      END_STATE();
    case 2012:
      if (lookahead == 's') ADVANCE(2234);
      END_STATE();
    case 2013:
      if (lookahead == 'h') ADVANCE(2235);
      END_STATE();
    case 2014:
      if (lookahead == 'i') ADVANCE(2236);
      END_STATE();
    case 2015:
      if (lookahead == 'R') ADVANCE(2237);
      END_STATE();
    case 2016:
      if (lookahead == 'a') ADVANCE(2238);
      END_STATE();
    case 2017:
      if (lookahead == 'u') ADVANCE(2239);
      END_STATE();
    case 2018:
      if (lookahead == 'i') ADVANCE(2240);
      END_STATE();
    case 2019:
      if (lookahead == 'C') ADVANCE(2241);
      END_STATE();
    case 2020:
      if (lookahead == 'n') ADVANCE(2242);
      END_STATE();
    case 2021:
      if (lookahead == 'p') ADVANCE(2243);
      END_STATE();
    case 2022:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 2023:
      if (lookahead == 'y') ADVANCE(2244);
      END_STATE();
    case 2024:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 2025:
      if (lookahead == 'g') ADVANCE(2245);
      END_STATE();
    case 2026:
      if (lookahead == 'h') ADVANCE(2246);
      END_STATE();
    case 2027:
      if (lookahead == 'e') ADVANCE(2247);
      END_STATE();
    case 2028:
      if (lookahead == 'a') ADVANCE(2248);
      END_STATE();
    case 2029:
      if (lookahead == 'a') ADVANCE(2249);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2031:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 2032:
      if (lookahead == 'x') ADVANCE(2250);
      END_STATE();
    case 2033:
      if (lookahead == 'b') ADVANCE(2251);
      END_STATE();
    case 2034:
      if (lookahead == 'r') ADVANCE(2252);
      END_STATE();
    case 2035:
      if (lookahead == 'g') ADVANCE(2253);
      END_STATE();
    case 2036:
      if (lookahead == 'l') ADVANCE(2254);
      END_STATE();
    case 2037:
      if (lookahead == 'a') ADVANCE(2255);
      END_STATE();
    case 2038:
      if (lookahead == 'n') ADVANCE(2256);
      END_STATE();
    case 2039:
      if (lookahead == 'u') ADVANCE(2257);
      END_STATE();
    case 2040:
      if (lookahead == 'i') ADVANCE(2258);
      END_STATE();
    case 2041:
      if (lookahead == 'u') ADVANCE(2259);
      END_STATE();
    case 2042:
      if (lookahead == 'p') ADVANCE(2260);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(2261);
      if (lookahead == 'O') ADVANCE(2262);
      END_STATE();
    case 2044:
      if (lookahead == 't') ADVANCE(2263);
      END_STATE();
    case 2045:
      if (lookahead == 'u') ADVANCE(2264);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(2265);
      if (lookahead == 'O') ADVANCE(2266);
      END_STATE();
    case 2047:
      if (lookahead == 't') ADVANCE(2267);
      END_STATE();
    case 2048:
      if (lookahead == 'u') ADVANCE(2268);
      END_STATE();
    case 2049:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 2050:
      if (lookahead == 'o') ADVANCE(2269);
      END_STATE();
    case 2051:
      if (lookahead == 'T') ADVANCE(2270);
      END_STATE();
    case 2052:
      if (lookahead == 'T') ADVANCE(2271);
      END_STATE();
    case 2053:
      if (lookahead == 'a') ADVANCE(2272);
      END_STATE();
    case 2054:
      if (lookahead == 'a') ADVANCE(2273);
      END_STATE();
    case 2055:
      if (lookahead == 's') ADVANCE(2274);
      END_STATE();
    case 2056:
      if (lookahead == 'a') ADVANCE(2275);
      END_STATE();
    case 2057:
      if (lookahead == 's') ADVANCE(2276);
      END_STATE();
    case 2058:
      if (lookahead == 'i') ADVANCE(2277);
      END_STATE();
    case 2059:
      if (lookahead == 'e') ADVANCE(2278);
      END_STATE();
    case 2060:
      if (lookahead == 'k') ADVANCE(2279);
      END_STATE();
    case 2061:
      if (lookahead == 'l') ADVANCE(2280);
      END_STATE();
    case 2062:
      if (lookahead == 'r') ADVANCE(2281);
      END_STATE();
    case 2063:
      if (lookahead == 'u') ADVANCE(2282);
      END_STATE();
    case 2064:
      if (lookahead == 'i') ADVANCE(2283);
      END_STATE();
    case 2065:
      if (lookahead == 'D') ADVANCE(2284);
      END_STATE();
    case 2066:
      if (lookahead == 'C') ADVANCE(2285);
      END_STATE();
    case 2067:
      if (lookahead == 'l') ADVANCE(2286);
      END_STATE();
    case 2068:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2069:
      if (lookahead == 'i') ADVANCE(2287);
      END_STATE();
    case 2070:
      if (lookahead == 's') ADVANCE(2288);
      END_STATE();
    case 2071:
      if (lookahead == 'e') ADVANCE(2289);
      END_STATE();
    case 2072:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 2073:
      if (lookahead == 'i') ADVANCE(2290);
      END_STATE();
    case 2074:
      if (lookahead == 'z') ADVANCE(2291);
      END_STATE();
    case 2075:
      if (lookahead == 'e') ADVANCE(2292);
      END_STATE();
    case 2076:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 2077:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 2078:
      if (lookahead == 'r') ADVANCE(2293);
      END_STATE();
    case 2079:
      if (lookahead == 'n') ADVANCE(2294);
      END_STATE();
    case 2080:
      if (lookahead == 'o') ADVANCE(2295);
      END_STATE();
    case 2081:
      if (lookahead == 'd') ADVANCE(2296);
      END_STATE();
    case 2082:
      if (lookahead == 'e') ADVANCE(2297);
      END_STATE();
    case 2083:
      if (lookahead == 'o') ADVANCE(2298);
      END_STATE();
    case 2084:
      if (lookahead == 'k') ADVANCE(2299);
      END_STATE();
    case 2085:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 2086:
      if (lookahead == 'p') ADVANCE(2300);
      if (lookahead == 't') ADVANCE(2301);
      END_STATE();
    case 2087:
      if (lookahead == 'l') ADVANCE(2302);
      END_STATE();
    case 2088:
      if (lookahead == 'e') ADVANCE(2303);
      END_STATE();
    case 2089:
      if (lookahead == 'o') ADVANCE(2304);
      END_STATE();
    case 2090:
      if (lookahead == 'c') ADVANCE(2305);
      END_STATE();
    case 2091:
      if (lookahead == 'i') ADVANCE(2306);
      END_STATE();
    case 2092:
      if (lookahead == 'r') ADVANCE(2307);
      END_STATE();
    case 2093:
      if (lookahead == 'e') ADVANCE(2308);
      END_STATE();
    case 2094:
      if (lookahead == 't') ADVANCE(2309);
      END_STATE();
    case 2095:
      if (lookahead == 'o') ADVANCE(2310);
      END_STATE();
    case 2096:
      if (lookahead == 'f') ADVANCE(2311);
      END_STATE();
    case 2097:
      if (lookahead == 'e') ADVANCE(2312);
      END_STATE();
    case 2098:
      if (lookahead == 'u') ADVANCE(2313);
      END_STATE();
    case 2099:
      if (lookahead == 'p') ADVANCE(2314);
      END_STATE();
    case 2100:
      if (lookahead == 't') ADVANCE(2315);
      END_STATE();
    case 2101:
      if (lookahead == 'i') ADVANCE(2316);
      END_STATE();
    case 2102:
      if (lookahead == 't') ADVANCE(2317);
      END_STATE();
    case 2103:
      if (lookahead == 'u') ADVANCE(2318);
      END_STATE();
    case 2104:
      if (lookahead == 'e') ADVANCE(2319);
      END_STATE();
    case 2105:
      if (lookahead == 'u') ADVANCE(2320);
      END_STATE();
    case 2106:
      if (lookahead == 'v') ADVANCE(2321);
      END_STATE();
    case 2107:
      if (lookahead == 'o') ADVANCE(2322);
      END_STATE();
    case 2108:
      if (lookahead == 'c') ADVANCE(2323);
      END_STATE();
    case 2109:
      if (lookahead == 'g') ADVANCE(2324);
      END_STATE();
    case 2110:
      if (lookahead == 'i') ADVANCE(2325);
      END_STATE();
    case 2111:
      if (lookahead == 's') ADVANCE(2326);
      END_STATE();
    case 2112:
      if (lookahead == 'n') ADVANCE(2327);
      END_STATE();
    case 2113:
      if (lookahead == 'H') ADVANCE(2328);
      END_STATE();
    case 2114:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2116:
      if (lookahead == 'e') ADVANCE(2329);
      END_STATE();
    case 2117:
      if (lookahead == 't') ADVANCE(2330);
      END_STATE();
    case 2118:
      if (lookahead == 'P') ADVANCE(2331);
      END_STATE();
    case 2119:
      if (lookahead == 'o') ADVANCE(2332);
      END_STATE();
    case 2120:
      if (lookahead == 'w') ADVANCE(2333);
      END_STATE();
    case 2121:
      if (lookahead == 'a') ADVANCE(2334);
      END_STATE();
    case 2122:
      if (lookahead == 'w') ADVANCE(2335);
      END_STATE();
    case 2123:
      if (lookahead == 'v') ADVANCE(2336);
      END_STATE();
    case 2124:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2125:
      if (lookahead == 'a') ADVANCE(2337);
      END_STATE();
    case 2126:
      if (lookahead == 'o') ADVANCE(2338);
      END_STATE();
    case 2127:
      if (lookahead == 'c') ADVANCE(2339);
      END_STATE();
    case 2128:
      if (lookahead == 'a') ADVANCE(2340);
      END_STATE();
    case 2129:
      if (lookahead == 'l') ADVANCE(2341);
      END_STATE();
    case 2130:
      if (lookahead == 'i') ADVANCE(2342);
      END_STATE();
    case 2131:
      if (lookahead == 'a') ADVANCE(2343);
      END_STATE();
    case 2132:
      if (lookahead == 'i') ADVANCE(2344);
      END_STATE();
    case 2133:
      if (lookahead == 'o') ADVANCE(2345);
      END_STATE();
    case 2134:
      if (lookahead == 'o') ADVANCE(2346);
      END_STATE();
    case 2135:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 2136:
      if (lookahead == 'O') ADVANCE(2347);
      END_STATE();
    case 2137:
      if (lookahead == 'n') ADVANCE(2348);
      END_STATE();
    case 2138:
      if (lookahead == 'e') ADVANCE(2349);
      END_STATE();
    case 2139:
      if (lookahead == 'e') ADVANCE(2350);
      END_STATE();
    case 2140:
      if (lookahead == 'a') ADVANCE(2351);
      END_STATE();
    case 2141:
      if (lookahead == 'o') ADVANCE(2352);
      END_STATE();
    case 2142:
      if (lookahead == 'h') ADVANCE(2353);
      if (lookahead == 'l') ADVANCE(2354);
      END_STATE();
    case 2143:
      if (lookahead == 'a') ADVANCE(2355);
      END_STATE();
    case 2144:
      if (lookahead == 'f') ADVANCE(2356);
      END_STATE();
    case 2145:
      if (lookahead == 'i') ADVANCE(2357);
      END_STATE();
    case 2146:
      if (lookahead == 'r') ADVANCE(2358);
      END_STATE();
    case 2147:
      if (lookahead == 'e') ADVANCE(2359);
      END_STATE();
    case 2148:
      if (lookahead == 'i') ADVANCE(2360);
      if (lookahead == 'o') ADVANCE(2361);
      END_STATE();
    case 2149:
      if (lookahead == 'a') ADVANCE(2362);
      END_STATE();
    case 2150:
      if (lookahead == 'o') ADVANCE(2363);
      END_STATE();
    case 2151:
      if (lookahead == 'c') ADVANCE(2364);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == 'p') ADVANCE(2365);
      END_STATE();
    case 2152:
      if (lookahead == 'r') ADVANCE(2366);
      END_STATE();
    case 2153:
      if (lookahead == 'u') ADVANCE(2367);
      END_STATE();
    case 2154:
      if (lookahead == 'e') ADVANCE(2368);
      END_STATE();
    case 2155:
      if (lookahead == 'e') ADVANCE(2369);
      if (lookahead == 'o') ADVANCE(2370);
      END_STATE();
    case 2156:
      if (lookahead == 'e') ADVANCE(2371);
      END_STATE();
    case 2157:
      if (lookahead == 'o') ADVANCE(2372);
      END_STATE();
    case 2158:
      if (lookahead == 'e') ADVANCE(2373);
      END_STATE();
    case 2159:
      if (lookahead == 'a') ADVANCE(2374);
      END_STATE();
    case 2160:
      if (lookahead == 'l') ADVANCE(2375);
      END_STATE();
    case 2161:
      if (lookahead == 'm') ADVANCE(2376);
      END_STATE();
    case 2162:
      if (lookahead == 'a') ADVANCE(2377);
      END_STATE();
    case 2163:
      if (lookahead == 'h') ADVANCE(2378);
      END_STATE();
    case 2164:
      if (lookahead == 'i') ADVANCE(2379);
      END_STATE();
    case 2165:
      if (lookahead == 't') ADVANCE(2380);
      END_STATE();
    case 2166:
      if (lookahead == 'e') ADVANCE(2381);
      END_STATE();
    case 2167:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2168:
      if (lookahead == 'M') ADVANCE(2382);
      END_STATE();
    case 2169:
      if (lookahead == 'c') ADVANCE(2383);
      END_STATE();
    case 2170:
      if (lookahead == 's') ADVANCE(2384);
      END_STATE();
    case 2171:
      if (lookahead == 'e') ADVANCE(2385);
      END_STATE();
    case 2172:
      if (lookahead == 'c') ADVANCE(2386);
      END_STATE();
    case 2173:
      if (lookahead == 'n') ADVANCE(2387);
      END_STATE();
    case 2174:
      if (lookahead == 'n') ADVANCE(2388);
      END_STATE();
    case 2175:
      if (lookahead == 'n') ADVANCE(2389);
      END_STATE();
    case 2176:
      if (lookahead == 'C') ADVANCE(2390);
      END_STATE();
    case 2177:
      if (lookahead == 's') ADVANCE(2391);
      END_STATE();
    case 2178:
      if (lookahead == 't') ADVANCE(2392);
      END_STATE();
    case 2179:
      if (lookahead == 't') ADVANCE(2393);
      END_STATE();
    case 2180:
      if (lookahead == 'y') ADVANCE(2394);
      END_STATE();
    case 2181:
      if (lookahead == 'o') ADVANCE(2395);
      END_STATE();
    case 2182:
      if (lookahead == 's') ADVANCE(2396);
      END_STATE();
    case 2183:
      if (lookahead == 't') ADVANCE(2397);
      END_STATE();
    case 2184:
      if (lookahead == 'a') ADVANCE(2398);
      END_STATE();
    case 2185:
      if (lookahead == 't') ADVANCE(2399);
      END_STATE();
    case 2186:
      if (lookahead == 'W') ADVANCE(2400);
      END_STATE();
    case 2187:
      if (lookahead == 'r') ADVANCE(2401);
      END_STATE();
    case 2188:
      if (lookahead == 's') ADVANCE(2402);
      END_STATE();
    case 2189:
      if (lookahead == 'o') ADVANCE(2403);
      END_STATE();
    case 2190:
      if (lookahead == 't') ADVANCE(2404);
      END_STATE();
    case 2191:
      if (lookahead == 'n') ADVANCE(2405);
      END_STATE();
    case 2192:
      if (lookahead == 'r') ADVANCE(2406);
      END_STATE();
    case 2193:
      if (lookahead == 'u') ADVANCE(2407);
      END_STATE();
    case 2194:
      if (lookahead == 'l') ADVANCE(2408);
      END_STATE();
    case 2195:
      if (lookahead == 'u') ADVANCE(2409);
      END_STATE();
    case 2196:
      if (lookahead == 'b') ADVANCE(2410);
      END_STATE();
    case 2197:
      if (lookahead == 'u') ADVANCE(2411);
      END_STATE();
    case 2198:
      if (lookahead == 'e') ADVANCE(2412);
      END_STATE();
    case 2199:
      if (lookahead == 't') ADVANCE(2413);
      END_STATE();
    case 2200:
      if (lookahead == 'P') ADVANCE(2414);
      END_STATE();
    case 2201:
      if (lookahead == 't') ADVANCE(2415);
      END_STATE();
    case 2202:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 2203:
      if (lookahead == 'd') ADVANCE(2416);
      END_STATE();
    case 2204:
      if (lookahead == 'i') ADVANCE(2417);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'A') ADVANCE(2418);
      if (lookahead == 'G') ADVANCE(2419);
      if (lookahead == 'P') ADVANCE(2420);
      if (lookahead == 'R') ADVANCE(2421);
      END_STATE();
    case 2206:
      if (lookahead == 'b') ADVANCE(2422);
      END_STATE();
    case 2207:
      if (lookahead == 'u') ADVANCE(2423);
      END_STATE();
    case 2208:
      if (lookahead == 'e') ADVANCE(2424);
      END_STATE();
    case 2209:
      if (lookahead == 'i') ADVANCE(2425);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'C') ADVANCE(2426);
      if (lookahead == 'L') ADVANCE(2427);
      if (lookahead == 'N') ADVANCE(2428);
      if (lookahead == 'O') ADVANCE(2429);
      if (lookahead == 'P') ADVANCE(2430);
      if (lookahead == 'S') ADVANCE(2431);
      if (lookahead == 'V') ADVANCE(2432);
      if (lookahead == 'W') ADVANCE(2433);
      END_STATE();
    case 2211:
      if (lookahead == 'r') ADVANCE(2434);
      END_STATE();
    case 2212:
      if (lookahead == 'n') ADVANCE(2435);
      END_STATE();
    case 2213:
      if (lookahead == 'e') ADVANCE(2436);
      END_STATE();
    case 2214:
      if (lookahead == 'e') ADVANCE(2437);
      END_STATE();
    case 2215:
      if (lookahead == 's') ADVANCE(2438);
      END_STATE();
    case 2216:
      if (lookahead == 'r') ADVANCE(2439);
      END_STATE();
    case 2217:
      if (lookahead == 'n') ADVANCE(2440);
      END_STATE();
    case 2218:
      if (lookahead == 'a') ADVANCE(2441);
      END_STATE();
    case 2219:
      if (lookahead == 'n') ADVANCE(2442);
      END_STATE();
    case 2220:
      if (lookahead == 'l') ADVANCE(2443);
      END_STATE();
    case 2221:
      if (lookahead == 'A') ADVANCE(2444);
      if (lookahead == 'I') ADVANCE(2445);
      END_STATE();
    case 2222:
      if (lookahead == 'A') ADVANCE(2446);
      END_STATE();
    case 2223:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2224:
      if (lookahead == 't') ADVANCE(2447);
      END_STATE();
    case 2225:
      if (lookahead == 'r') ADVANCE(2448);
      END_STATE();
    case 2226:
      if (lookahead == 't') ADVANCE(2449);
      END_STATE();
    case 2227:
      if (lookahead == 't') ADVANCE(2450);
      END_STATE();
    case 2228:
      if (lookahead == 'o') ADVANCE(2451);
      END_STATE();
    case 2229:
      if (lookahead == 'M') ADVANCE(2452);
      END_STATE();
    case 2230:
      if (lookahead == 'n') ADVANCE(2453);
      END_STATE();
    case 2231:
      if (lookahead == 'i') ADVANCE(2454);
      END_STATE();
    case 2232:
      if (lookahead == 'c') ADVANCE(2455);
      END_STATE();
    case 2233:
      if (lookahead == 'e') ADVANCE(2456);
      END_STATE();
    case 2234:
      if (lookahead == 'R') ADVANCE(2457);
      END_STATE();
    case 2235:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 2236:
      if (lookahead == 'n') ADVANCE(2458);
      END_STATE();
    case 2237:
      if (lookahead == 'e') ADVANCE(2459);
      END_STATE();
    case 2238:
      if (lookahead == 'c') ADVANCE(2460);
      END_STATE();
    case 2239:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 2240:
      if (lookahead == 'n') ADVANCE(2461);
      END_STATE();
    case 2241:
      if (lookahead == 'o') ADVANCE(2462);
      END_STATE();
    case 2242:
      if (lookahead == 't') ADVANCE(2463);
      END_STATE();
    case 2243:
      if (lookahead == 'e') ADVANCE(2464);
      END_STATE();
    case 2244:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(87);
      END_STATE();
    case 2245:
      if (lookahead == 'e') ADVANCE(2465);
      if (lookahead == 'i') ADVANCE(2466);
      END_STATE();
    case 2246:
      if (lookahead == 'a') ADVANCE(2467);
      END_STATE();
    case 2247:
      if (lookahead == 'n') ADVANCE(2468);
      END_STATE();
    case 2248:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 2249:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 2250:
      if (lookahead == 'i') ADVANCE(2469);
      END_STATE();
    case 2251:
      if (lookahead == 'o') ADVANCE(2470);
      END_STATE();
    case 2252:
      if (lookahead == 'o') ADVANCE(2471);
      END_STATE();
    case 2253:
      if (lookahead == 'e') ADVANCE(2472);
      END_STATE();
    case 2254:
      if (lookahead == 'u') ADVANCE(2473);
      END_STATE();
    case 2255:
      if (lookahead == 't') ADVANCE(2474);
      END_STATE();
    case 2256:
      if (lookahead == 'p') ADVANCE(2475);
      END_STATE();
    case 2257:
      if (lookahead == 't') ADVANCE(2476);
      END_STATE();
    case 2258:
      if (lookahead == 'd') ADVANCE(2477);
      END_STATE();
    case 2259:
      if (lookahead == 't') ADVANCE(2478);
      END_STATE();
    case 2260:
      if (lookahead == 'u') ADVANCE(2479);
      END_STATE();
    case 2261:
      if (lookahead == 'n') ADVANCE(2480);
      END_STATE();
    case 2262:
      if (lookahead == 'u') ADVANCE(2481);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2264:
      if (lookahead == 't') ADVANCE(2482);
      END_STATE();
    case 2265:
      if (lookahead == 'n') ADVANCE(2483);
      END_STATE();
    case 2266:
      if (lookahead == 'u') ADVANCE(2484);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2268:
      if (lookahead == 't') ADVANCE(2485);
      END_STATE();
    case 2269:
      if (lookahead == 'w') ADVANCE(421);
      END_STATE();
    case 2270:
      if (lookahead == 'o') ADVANCE(2486);
      END_STATE();
    case 2271:
      if (lookahead == 'o') ADVANCE(2487);
      END_STATE();
    case 2272:
      if (lookahead == 'g') ADVANCE(2488);
      END_STATE();
    case 2273:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2274:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 2275:
      if (lookahead == 's') ADVANCE(2489);
      END_STATE();
    case 2276:
      if (lookahead == 's') ADVANCE(2490);
      END_STATE();
    case 2277:
      if (lookahead == 'a') ADVANCE(2491);
      END_STATE();
    case 2278:
      if (lookahead == 'r') ADVANCE(2492);
      END_STATE();
    case 2279:
      if (lookahead == 'e') ADVANCE(2493);
      END_STATE();
    case 2280:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2281:
      if (lookahead == 'i') ADVANCE(2494);
      END_STATE();
    case 2282:
      if (lookahead == 'i') ADVANCE(2495);
      END_STATE();
    case 2283:
      if (lookahead == 't') ADVANCE(2496);
      END_STATE();
    case 2284:
      if (lookahead == 'i') ADVANCE(2497);
      END_STATE();
    case 2285:
      if (lookahead == 'a') ADVANCE(2498);
      END_STATE();
    case 2286:
      if (lookahead == 'H') ADVANCE(2499);
      END_STATE();
    case 2287:
      if (lookahead == 'l') ADVANCE(2500);
      END_STATE();
    case 2288:
      if (lookahead == 'e') ADVANCE(2501);
      END_STATE();
    case 2289:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 2290:
      if (lookahead == 'd') ADVANCE(2502);
      END_STATE();
    case 2291:
      if (lookahead == 'i') ADVANCE(2503);
      END_STATE();
    case 2292:
      if (lookahead == 'r') ADVANCE(2504);
      END_STATE();
    case 2293:
      if (lookahead == 'a') ADVANCE(2505);
      END_STATE();
    case 2294:
      if (lookahead == 'i') ADVANCE(2506);
      END_STATE();
    case 2295:
      if (lookahead == 'r') ADVANCE(2507);
      END_STATE();
    case 2296:
      if (lookahead == 'C') ADVANCE(2508);
      END_STATE();
    case 2297:
      if (lookahead == 'd') ADVANCE(2509);
      END_STATE();
    case 2298:
      if (lookahead == 'r') ADVANCE(2510);
      END_STATE();
    case 2299:
      if (lookahead == 'a') ADVANCE(2511);
      END_STATE();
    case 2300:
      if (lookahead == 'p') ADVANCE(2512);
      END_STATE();
    case 2301:
      if (lookahead == 'm') ADVANCE(2513);
      END_STATE();
    case 2302:
      if (lookahead == 'o') ADVANCE(2514);
      END_STATE();
    case 2303:
      if (lookahead == 'f') ADVANCE(2515);
      END_STATE();
    case 2304:
      if (lookahead == 'o') ADVANCE(2516);
      END_STATE();
    case 2305:
      if (lookahead == 'e') ADVANCE(2517);
      END_STATE();
    case 2306:
      if (lookahead == 't') ADVANCE(2518);
      END_STATE();
    case 2307:
      if (lookahead == 'e') ADVANCE(2519);
      END_STATE();
    case 2308:
      if (lookahead == 's') ADVANCE(2520);
      END_STATE();
    case 2309:
      if (lookahead == 'o') ADVANCE(2521);
      END_STATE();
    case 2310:
      if (lookahead == 'o') ADVANCE(2522);
      END_STATE();
    case 2311:
      if (lookahead == 'e') ADVANCE(2523);
      END_STATE();
    case 2312:
      if (lookahead == 'r') ADVANCE(2524);
      END_STATE();
    case 2313:
      if (lookahead == 't') ADVANCE(2525);
      END_STATE();
    case 2314:
      if (lookahead == 'u') ADVANCE(2526);
      END_STATE();
    case 2315:
      if (lookahead == 'i') ADVANCE(2527);
      END_STATE();
    case 2316:
      if (lookahead == 'o') ADVANCE(2528);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2318:
      if (lookahead == 't') ADVANCE(2529);
      END_STATE();
    case 2319:
      if (lookahead == '.') ADVANCE(2530);
      END_STATE();
    case 2320:
      if (lookahead == 'd') ADVANCE(2531);
      END_STATE();
    case 2321:
      if (lookahead == 'e') ADVANCE(2532);
      END_STATE();
    case 2322:
      if (lookahead == 'n') ADVANCE(2533);
      END_STATE();
    case 2323:
      if (lookahead == 'i') ADVANCE(2534);
      END_STATE();
    case 2324:
      if (lookahead == 'h') ADVANCE(2535);
      END_STATE();
    case 2325:
      if (lookahead == 'n') ADVANCE(2536);
      END_STATE();
    case 2326:
      if (lookahead == 'u') ADVANCE(2537);
      END_STATE();
    case 2327:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 2328:
      if (lookahead == 'a') ADVANCE(2538);
      END_STATE();
    case 2329:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2331:
      if (lookahead == 'o') ADVANCE(2539);
      END_STATE();
    case 2332:
      if (lookahead == 'd') ADVANCE(2540);
      END_STATE();
    case 2333:
      if (lookahead == 'n') ADVANCE(2541);
      END_STATE();
    case 2334:
      if (lookahead == 't') ADVANCE(2542);
      END_STATE();
    case 2335:
      if (lookahead == 'a') ADVANCE(2543);
      END_STATE();
    case 2336:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2337:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 2338:
      if (lookahead == 'n') ADVANCE(2544);
      END_STATE();
    case 2339:
      if (lookahead == 'i') ADVANCE(2545);
      END_STATE();
    case 2340:
      if (lookahead == 'n') ADVANCE(2546);
      END_STATE();
    case 2341:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 2342:
      if (lookahead == 'o') ADVANCE(2547);
      END_STATE();
    case 2343:
      if (lookahead == 'r') ADVANCE(2548);
      END_STATE();
    case 2344:
      if (lookahead == 't') ADVANCE(2549);
      END_STATE();
    case 2345:
      if (lookahead == 'l') ADVANCE(2550);
      END_STATE();
    case 2346:
      if (lookahead == 'l') ADVANCE(2551);
      END_STATE();
    case 2347:
      if (lookahead == 'x') ADVANCE(2552);
      END_STATE();
    case 2348:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 2349:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2350:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2351:
      if (lookahead == 'n') ADVANCE(2553);
      END_STATE();
    case 2352:
      if (lookahead == 'g') ADVANCE(2554);
      END_STATE();
    case 2353:
      if (lookahead == 'a') ADVANCE(2555);
      END_STATE();
    case 2354:
      if (lookahead == 'a') ADVANCE(2556);
      END_STATE();
    case 2355:
      if (lookahead == 'm') ADVANCE(2557);
      END_STATE();
    case 2356:
      if (lookahead == 'f') ADVANCE(2558);
      END_STATE();
    case 2357:
      if (lookahead == 'l') ADVANCE(2559);
      END_STATE();
    case 2358:
      if (lookahead == 'o') ADVANCE(2560);
      END_STATE();
    case 2359:
      if (lookahead == 'a') ADVANCE(2561);
      END_STATE();
    case 2360:
      if (lookahead == 'n') ADVANCE(2562);
      END_STATE();
    case 2361:
      if (lookahead == 'c') ADVANCE(2563);
      END_STATE();
    case 2362:
      if (lookahead == 't') ADVANCE(2564);
      if (lookahead == 'x') ADVANCE(2565);
      END_STATE();
    case 2363:
      if (lookahead == 'n') ADVANCE(2566);
      END_STATE();
    case 2364:
      if (lookahead == 'c') ADVANCE(2567);
      END_STATE();
    case 2365:
      if (lookahead == 'e') ADVANCE(2568);
      END_STATE();
    case 2366:
      if (lookahead == 'e') ADVANCE(2569);
      END_STATE();
    case 2367:
      if (lookahead == 'a') ADVANCE(2570);
      END_STATE();
    case 2368:
      if (lookahead == 'f') ADVANCE(2571);
      END_STATE();
    case 2369:
      if (lookahead == 'e') ADVANCE(2572);
      END_STATE();
    case 2370:
      if (lookahead == 'r') ADVANCE(2573);
      END_STATE();
    case 2371:
      if (lookahead == 'm') ADVANCE(2574);
      END_STATE();
    case 2372:
      if (lookahead == 'l') ADVANCE(2575);
      END_STATE();
    case 2373:
      if (lookahead == 'r') ADVANCE(2576);
      END_STATE();
    case 2374:
      if (lookahead == 't') ADVANCE(2577);
      END_STATE();
    case 2375:
      if (lookahead == 'e') ADVANCE(2578);
      END_STATE();
    case 2376:
      if (lookahead == 'e') ADVANCE(2579);
      END_STATE();
    case 2377:
      if (lookahead == 'n') ADVANCE(2580);
      END_STATE();
    case 2378:
      if (lookahead == 'u') ADVANCE(2581);
      END_STATE();
    case 2379:
      if (lookahead == 'm') ADVANCE(2582);
      END_STATE();
    case 2380:
      if (lookahead == 'i') ADVANCE(2583);
      END_STATE();
    case 2381:
      if (lookahead == 'l') ADVANCE(2584);
      END_STATE();
    case 2382:
      if (lookahead == 'e') ADVANCE(2585);
      END_STATE();
    case 2383:
      if (lookahead == 't') ADVANCE(2586);
      END_STATE();
    case 2384:
      if (lookahead == 't') ADVANCE(2587);
      END_STATE();
    case 2385:
      if (lookahead == 't') ADVANCE(2588);
      END_STATE();
    case 2386:
      if (lookahead == 't') ADVANCE(2589);
      END_STATE();
    case 2387:
      if (lookahead == 't') ADVANCE(2590);
      END_STATE();
    case 2388:
      if (lookahead == 'a') ADVANCE(2591);
      END_STATE();
    case 2389:
      if (lookahead == 'c') ADVANCE(2592);
      END_STATE();
    case 2390:
      if (lookahead == 'o') ADVANCE(2593);
      END_STATE();
    case 2391:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2392:
      if (lookahead == 'r') ADVANCE(2594);
      END_STATE();
    case 2393:
      if (lookahead == 'o') ADVANCE(2595);
      END_STATE();
    case 2394:
      if (lookahead == 'S') ADVANCE(2596);
      END_STATE();
    case 2395:
      if (lookahead == 'n') ADVANCE(2597);
      END_STATE();
    case 2396:
      if (lookahead == 't') ADVANCE(2598);
      END_STATE();
    case 2397:
      if (lookahead == 'C') ADVANCE(2599);
      END_STATE();
    case 2398:
      if (lookahead == 't') ADVANCE(2600);
      END_STATE();
    case 2399:
      if (lookahead == 'C') ADVANCE(2601);
      END_STATE();
    case 2400:
      if (lookahead == 'r') ADVANCE(2602);
      END_STATE();
    case 2401:
      if (lookahead == 'd') ADVANCE(2603);
      END_STATE();
    case 2402:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 2403:
      if (lookahead == 'n') ADVANCE(2604);
      END_STATE();
    case 2404:
      if (lookahead == 'C') ADVANCE(2605);
      END_STATE();
    case 2405:
      if (lookahead == 'a') ADVANCE(2606);
      END_STATE();
    case 2406:
      if (lookahead == 'o') ADVANCE(2607);
      END_STATE();
    case 2407:
      if (lookahead == 'm') ADVANCE(2608);
      END_STATE();
    case 2408:
      if (lookahead == 'R') ADVANCE(2609);
      END_STATE();
    case 2409:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 2410:
      if (lookahead == 'l') ADVANCE(2610);
      END_STATE();
    case 2411:
      if (lookahead == 'm') ADVANCE(2611);
      END_STATE();
    case 2412:
      if (lookahead == 'a') ADVANCE(2612);
      END_STATE();
    case 2413:
      if (lookahead == 'i') ADVANCE(2613);
      END_STATE();
    case 2414:
      if (lookahead == 'e') ADVANCE(2614);
      END_STATE();
    case 2415:
      if (lookahead == 'a') ADVANCE(2615);
      END_STATE();
    case 2416:
      if (lookahead == 'M') ADVANCE(2616);
      END_STATE();
    case 2417:
      if (lookahead == 'o') ADVANCE(2617);
      END_STATE();
    case 2418:
      if (lookahead == 'c') ADVANCE(2618);
      END_STATE();
    case 2419:
      if (lookahead == 'e') ADVANCE(2619);
      END_STATE();
    case 2420:
      if (lookahead == 'o') ADVANCE(2620);
      END_STATE();
    case 2421:
      if (lookahead == 'e') ADVANCE(2621);
      END_STATE();
    case 2422:
      if (lookahead == 'H') ADVANCE(2622);
      END_STATE();
    case 2423:
      if (lookahead == 'r') ADVANCE(2623);
      END_STATE();
    case 2424:
      if (lookahead == 's') ADVANCE(2624);
      END_STATE();
    case 2425:
      if (lookahead == 't') ADVANCE(2625);
      END_STATE();
    case 2426:
      if (lookahead == 'a') ADVANCE(2626);
      END_STATE();
    case 2427:
      if (lookahead == 'i') ADVANCE(2627);
      END_STATE();
    case 2428:
      if (lookahead == 'i') ADVANCE(2628);
      END_STATE();
    case 2429:
      if (lookahead == 'x') ADVANCE(2629);
      END_STATE();
    case 2430:
      if (lookahead == 'o') ADVANCE(2630);
      END_STATE();
    case 2431:
      if (lookahead == 't') ADVANCE(2631);
      END_STATE();
    case 2432:
      if (lookahead == 'o') ADVANCE(2632);
      END_STATE();
    case 2433:
      if (lookahead == 'a') ADVANCE(2633);
      END_STATE();
    case 2434:
      if (lookahead == 'y') ADVANCE(2634);
      END_STATE();
    case 2435:
      if (lookahead == 't') ADVANCE(2635);
      END_STATE();
    case 2436:
      if (lookahead == 'H') ADVANCE(2636);
      END_STATE();
    case 2437:
      if (lookahead == 'n') ADVANCE(2637);
      END_STATE();
    case 2438:
      if (lookahead == 't') ADVANCE(2638);
      END_STATE();
    case 2439:
      if (lookahead == 'e') ADVANCE(2639);
      END_STATE();
    case 2440:
      if (lookahead == 'F') ADVANCE(2640);
      END_STATE();
    case 2441:
      if (lookahead == 'j') ADVANCE(2641);
      END_STATE();
    case 2442:
      if (lookahead == 'g') ADVANCE(2642);
      END_STATE();
    case 2443:
      if (lookahead == 'I') ADVANCE(2643);
      if (lookahead == 'S') ADVANCE(2644);
      END_STATE();
    case 2444:
      if (lookahead == 'n') ADVANCE(2645);
      END_STATE();
    case 2445:
      if (lookahead == 'r') ADVANCE(2646);
      END_STATE();
    case 2446:
      if (lookahead == 'l') ADVANCE(2647);
      END_STATE();
    case 2447:
      if (lookahead == 'P') ADVANCE(2648);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(421);
      END_STATE();
    case 2448:
      if (lookahead == 'a') ADVANCE(2649);
      END_STATE();
    case 2449:
      if (lookahead == 'l') ADVANCE(2650);
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'T') ADVANCE(2651);
      END_STATE();
    case 2451:
      if (lookahead == 'D') ADVANCE(2652);
      END_STATE();
    case 2452:
      if (lookahead == 'o') ADVANCE(2653);
      END_STATE();
    case 2453:
      if (lookahead == 'o') ADVANCE(2654);
      END_STATE();
    case 2454:
      if (lookahead == 't') ADVANCE(2655);
      END_STATE();
    case 2455:
      if (lookahead == 'a') ADVANCE(2656);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'O') ADVANCE(2657);
      END_STATE();
    case 2457:
      if (lookahead == 'e') ADVANCE(2658);
      END_STATE();
    case 2458:
      if (lookahead == 'g') ADVANCE(2659);
      END_STATE();
    case 2459:
      if (lookahead == 'q') ADVANCE(2660);
      END_STATE();
    case 2460:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 2461:
      if (lookahead == 'i') ADVANCE(2661);
      END_STATE();
    case 2462:
      if (lookahead == 'n') ADVANCE(2662);
      END_STATE();
    case 2463:
      if (lookahead == 'T') ADVANCE(2663);
      END_STATE();
    case 2464:
      if (lookahead == 'r') ADVANCE(2664);
      END_STATE();
    case 2465:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2466:
      if (lookahead == 'n') ADVANCE(2665);
      END_STATE();
    case 2467:
      if (lookahead == 'r') ADVANCE(2666);
      END_STATE();
    case 2468:
      if (lookahead == 'c') ADVANCE(2667);
      END_STATE();
    case 2469:
      if (lookahead == 'd') ADVANCE(2668);
      END_STATE();
    case 2470:
      if (lookahead == 'n') ADVANCE(2669);
      END_STATE();
    case 2471:
      if (lookahead == 'g') ADVANCE(2670);
      if (lookahead == 'u') ADVANCE(2671);
      END_STATE();
    case 2472:
      if (lookahead == 'n') ADVANCE(2672);
      END_STATE();
    case 2473:
      if (lookahead == 't') ADVANCE(2673);
      END_STATE();
    case 2474:
      if (lookahead == 'i') ADVANCE(2674);
      END_STATE();
    case 2475:
      if (lookahead == 'u') ADVANCE(2675);
      END_STATE();
    case 2476:
      if (lookahead == 'p') ADVANCE(2676);
      END_STATE();
    case 2477:
      if (lookahead == 'e') ADVANCE(2677);
      END_STATE();
    case 2478:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2479:
      if (lookahead == 't') ADVANCE(2678);
      END_STATE();
    case 2480:
      if (lookahead == 'p') ADVANCE(2679);
      END_STATE();
    case 2481:
      if (lookahead == 't') ADVANCE(2680);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2483:
      if (lookahead == 'p') ADVANCE(2681);
      END_STATE();
    case 2484:
      if (lookahead == 't') ADVANCE(2682);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2486:
      if (lookahead == 'T') ADVANCE(2683);
      END_STATE();
    case 2487:
      if (lookahead == 'T') ADVANCE(2684);
      END_STATE();
    case 2488:
      if (lookahead == 'e') ADVANCE(2685);
      END_STATE();
    case 2489:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 2490:
      if (lookahead == 'C') ADVANCE(2686);
      END_STATE();
    case 2491:
      if (lookahead == 'n') ADVANCE(2687);
      END_STATE();
    case 2492:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 2493:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2494:
      if (lookahead == 'd') ADVANCE(2688);
      END_STATE();
    case 2495:
      if (lookahead == 't') ADVANCE(2689);
      END_STATE();
    case 2496:
      if (lookahead == 'C') ADVANCE(2690);
      END_STATE();
    case 2497:
      if (lookahead == 's') ADVANCE(2691);
      END_STATE();
    case 2498:
      if (lookahead == 'n') ADVANCE(2692);
      END_STATE();
    case 2499:
      if (lookahead == 'e') ADVANCE(2693);
      END_STATE();
    case 2500:
      if (lookahead == 't') ADVANCE(2694);
      END_STATE();
    case 2501:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2502:
      if (lookahead == 'B') ADVANCE(2695);
      if (lookahead == 'C') ADVANCE(2696);
      END_STATE();
    case 2503:
      if (lookahead == 'n') ADVANCE(2697);
      END_STATE();
    case 2504:
      if (lookahead == 'b') ADVANCE(2698);
      END_STATE();
    case 2505:
      if (lookahead == 'm') ADVANCE(2699);
      END_STATE();
    case 2506:
      if (lookahead == 'n') ADVANCE(2700);
      END_STATE();
    case 2507:
      if (lookahead == 'P') ADVANCE(2701);
      END_STATE();
    case 2508:
      if (lookahead == 'a') ADVANCE(2702);
      END_STATE();
    case 2509:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 2510:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 2511:
      if (lookahead == 'g') ADVANCE(2703);
      END_STATE();
    case 2512:
      if (lookahead == 'l') ADVANCE(2704);
      END_STATE();
    case 2513:
      if (lookahead == 'o') ADVANCE(2705);
      END_STATE();
    case 2514:
      if (lookahead == 't') ADVANCE(2706);
      END_STATE();
    case 2515:
      if (lookahead == 'a') ADVANCE(2707);
      END_STATE();
    case 2516:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2517:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2518:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2519:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2520:
      if (lookahead == 'o') ADVANCE(2708);
      END_STATE();
    case 2521:
      if (lookahead == 'r') ADVANCE(2709);
      END_STATE();
    case 2522:
      if (lookahead == 'l') ADVANCE(2710);
      END_STATE();
    case 2523:
      if (lookahead == 'r') ADVANCE(2711);
      END_STATE();
    case 2524:
      if (lookahead == 'n') ADVANCE(2712);
      END_STATE();
    case 2525:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2526:
      if (lookahead == 't') ADVANCE(2713);
      END_STATE();
    case 2527:
      if (lookahead == 'n') ADVANCE(2714);
      END_STATE();
    case 2528:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 2529:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2530:
      if (lookahead == 'A') ADVANCE(2715);
      if (lookahead == 'P') ADVANCE(2716);
      END_STATE();
    case 2531:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 2532:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      END_STATE();
    case 2533:
      if (lookahead == 't') ADVANCE(2717);
      END_STATE();
    case 2534:
      if (lookahead == 'e') ADVANCE(2718);
      END_STATE();
    case 2535:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 2536:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2537:
      if (lookahead == 'r') ADVANCE(2719);
      END_STATE();
    case 2538:
      if (lookahead == 's') ADVANCE(2720);
      END_STATE();
    case 2539:
      if (lookahead == 'd') ADVANCE(2721);
      END_STATE();
    case 2540:
      if (lookahead == 'e') ADVANCE(2722);
      END_STATE();
    case 2541:
      if (lookahead == 'w') ADVANCE(2723);
      END_STATE();
    case 2542:
      if (lookahead == 'i') ADVANCE(2724);
      END_STATE();
    case 2543:
      if (lookahead == 'r') ADVANCE(2725);
      END_STATE();
    case 2544:
      if (lookahead == 's') ADVANCE(2726);
      END_STATE();
    case 2545:
      if (lookahead == 'e') ADVANCE(2727);
      END_STATE();
    case 2546:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 2547:
      if (lookahead == 'x') ADVANCE(2728);
      END_STATE();
    case 2548:
      if (lookahead == 'b') ADVANCE(2729);
      END_STATE();
    case 2549:
      if (lookahead == 'r') ADVANCE(2730);
      END_STATE();
    case 2550:
      if (lookahead == 'l') ADVANCE(2731);
      END_STATE();
    case 2551:
      if (lookahead == 'a') ADVANCE(2732);
      END_STATE();
    case 2552:
      if (lookahead == 'i') ADVANCE(2733);
      END_STATE();
    case 2553:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 2554:
      if (lookahead == 'r') ADVANCE(2734);
      END_STATE();
    case 2555:
      if (lookahead == 'r') ADVANCE(2735);
      END_STATE();
    case 2556:
      if (lookahead == 's') ADVANCE(2736);
      END_STATE();
    case 2557:
      if (lookahead == 'a') ADVANCE(2737);
      END_STATE();
    case 2558:
      if (lookahead == 'i') ADVANCE(2738);
      END_STATE();
    case 2559:
      if (lookahead == 't') ADVANCE(2739);
      END_STATE();
    case 2560:
      if (lookahead == 'w') ADVANCE(2740);
      END_STATE();
    case 2561:
      if (lookahead == 'l') ADVANCE(2741);
      END_STATE();
    case 2562:
      if (lookahead == 'e') ADVANCE(2742);
      END_STATE();
    case 2563:
      if (lookahead == 'k') ADVANCE(421);
      END_STATE();
    case 2564:
      if (lookahead == 'u') ADVANCE(2743);
      END_STATE();
    case 2565:
      if (lookahead == 'Q') ADVANCE(2744);
      END_STATE();
    case 2566:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2567:
      if (lookahead == 'u') ADVANCE(2745);
      END_STATE();
    case 2568:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 2569:
      if (lookahead == 'f') ADVANCE(2746);
      if (lookahead == 's') ADVANCE(2747);
      END_STATE();
    case 2570:
      if (lookahead == 'n') ADVANCE(2748);
      END_STATE();
    case 2571:
      if (lookahead == 'e') ADVANCE(2749);
      END_STATE();
    case 2572:
      if (lookahead == 'd') ADVANCE(2750);
      END_STATE();
    case 2573:
      if (lookahead == 't') ADVANCE(2751);
      END_STATE();
    case 2574:
      if (lookahead == 'p') ADVANCE(2752);
      END_STATE();
    case 2575:
      if (lookahead == 'u') ADVANCE(2753);
      END_STATE();
    case 2576:
      if (lookahead == 'a') ADVANCE(2754);
      END_STATE();
    case 2577:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2578:
      if (lookahead == 'a') ADVANCE(2755);
      END_STATE();
    case 2579:
      if (lookahead == 'n') ADVANCE(2756);
      END_STATE();
    case 2580:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2581:
      if (lookahead == 't') ADVANCE(2757);
      END_STATE();
    case 2582:
      if (lookahead == 'e') ADVANCE(2758);
      END_STATE();
    case 2583:
      if (lookahead == 'a') ADVANCE(2759);
      END_STATE();
    case 2584:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(421);
      END_STATE();
    case 2585:
      if (lookahead == 'm') ADVANCE(2760);
      END_STATE();
    case 2586:
      if (lookahead == 'a') ADVANCE(2761);
      END_STATE();
    case 2587:
      if (lookahead == 'i') ADVANCE(2762);
      END_STATE();
    case 2588:
      if (lookahead == 'i') ADVANCE(2763);
      END_STATE();
    case 2589:
      if (lookahead == 'T') ADVANCE(2764);
      END_STATE();
    case 2590:
      if (lookahead == 'R') ADVANCE(2765);
      END_STATE();
    case 2591:
      if (lookahead == 't') ADVANCE(2766);
      END_STATE();
    case 2592:
      if (lookahead == 'e') ADVANCE(2767);
      END_STATE();
    case 2593:
      if (lookahead == 'n') ADVANCE(2768);
      END_STATE();
    case 2594:
      if (lookahead == 'i') ADVANCE(2769);
      END_STATE();
    case 2595:
      if (lookahead == 'r') ADVANCE(2770);
      END_STATE();
    case 2596:
      if (lookahead == 't') ADVANCE(2771);
      END_STATE();
    case 2597:
      if (lookahead == 'm') ADVANCE(2772);
      END_STATE();
    case 2598:
      if (lookahead == 'V') ADVANCE(2773);
      END_STATE();
    case 2599:
      if (lookahead == 'o') ADVANCE(2774);
      END_STATE();
    case 2600:
      if (lookahead == 'i') ADVANCE(2775);
      END_STATE();
    case 2601:
      if (lookahead == 'o') ADVANCE(2776);
      END_STATE();
    case 2602:
      if (lookahead == 'i') ADVANCE(2777);
      END_STATE();
    case 2603:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(421);
      END_STATE();
    case 2604:
      if (lookahead == 't') ADVANCE(2778);
      END_STATE();
    case 2605:
      if (lookahead == 'o') ADVANCE(2779);
      END_STATE();
    case 2606:
      if (lookahead == 't') ADVANCE(2780);
      END_STATE();
    case 2607:
      if (lookahead == 'g') ADVANCE(2781);
      END_STATE();
    case 2608:
      if (lookahead == 'b') ADVANCE(2782);
      END_STATE();
    case 2609:
      if (lookahead == 'e') ADVANCE(2783);
      END_STATE();
    case 2610:
      if (lookahead == 'e') ADVANCE(2784);
      END_STATE();
    case 2611:
      if (lookahead == 'W') ADVANCE(2785);
      END_STATE();
    case 2612:
      if (lookahead == 't') ADVANCE(2786);
      END_STATE();
    case 2613:
      if (lookahead == 'o') ADVANCE(2787);
      END_STATE();
    case 2614:
      if (lookahead == 'r') ADVANCE(2788);
      END_STATE();
    case 2615:
      if (lookahead == 't') ADVANCE(2789);
      END_STATE();
    case 2616:
      if (lookahead == 'o') ADVANCE(2790);
      END_STATE();
    case 2617:
      if (lookahead == 'n') ADVANCE(2791);
      END_STATE();
    case 2618:
      if (lookahead == 't') ADVANCE(2792);
      END_STATE();
    case 2619:
      if (lookahead == 'n') ADVANCE(2793);
      END_STATE();
    case 2620:
      if (lookahead == 't') ADVANCE(2794);
      END_STATE();
    case 2621:
      if (lookahead == 'q') ADVANCE(2795);
      END_STATE();
    case 2622:
      if (lookahead == 'a') ADVANCE(2796);
      END_STATE();
    case 2623:
      if (lookahead == 'e') ADVANCE(2797);
      END_STATE();
    case 2624:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2625:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 2626:
      if (lookahead == 'r') ADVANCE(2798);
      END_STATE();
    case 2627:
      if (lookahead == 'q') ADVANCE(2799);
      END_STATE();
    case 2628:
      if (lookahead == 't') ADVANCE(2800);
      END_STATE();
    case 2629:
      if (lookahead == 'y') ADVANCE(2801);
      END_STATE();
    case 2630:
      if (lookahead == 'l') ADVANCE(2802);
      END_STATE();
    case 2631:
      if (lookahead == 'e') ADVANCE(2803);
      END_STATE();
    case 2632:
      if (lookahead == 'l') ADVANCE(2804);
      END_STATE();
    case 2633:
      if (lookahead == 't') ADVANCE(2805);
      END_STATE();
    case 2634:
      if (lookahead == 'A') ADVANCE(2806);
      END_STATE();
    case 2635:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2636:
      if (lookahead == 'a') ADVANCE(2807);
      END_STATE();
    case 2637:
      if (lookahead == 'c') ADVANCE(2808);
      END_STATE();
    case 2638:
      if (lookahead == 'H') ADVANCE(2809);
      END_STATE();
    case 2639:
      if (lookahead == 'd') ADVANCE(2810);
      END_STATE();
    case 2640:
      if (lookahead == 'u') ADVANCE(2811);
      END_STATE();
    case 2641:
      if (lookahead == 'o') ADVANCE(2812);
      END_STATE();
    case 2642:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(2813);
      if (lookahead == 'O') ADVANCE(2814);
      END_STATE();
    case 2643:
      if (lookahead == 'D') ADVANCE(421);
      END_STATE();
    case 2644:
      if (lookahead == 't') ADVANCE(2815);
      END_STATE();
    case 2645:
      if (lookahead == 'g') ADVANCE(2816);
      END_STATE();
    case 2646:
      if (lookahead == 'r') ADVANCE(2817);
      END_STATE();
    case 2647:
      if (lookahead == 'e') ADVANCE(2818);
      END_STATE();
    case 2648:
      if (lookahead == 'a') ADVANCE(2819);
      END_STATE();
    case 2649:
      if (lookahead == 't') ADVANCE(2820);
      END_STATE();
    case 2650:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2651:
      if (lookahead == 'o') ADVANCE(2821);
      END_STATE();
    case 2652:
      if (lookahead == 'e') ADVANCE(2822);
      END_STATE();
    case 2653:
      if (lookahead == 'l') ADVANCE(2823);
      END_STATE();
    case 2654:
      if (lookahead == 'm') ADVANCE(2824);
      END_STATE();
    case 2655:
      if (lookahead == 'y') ADVANCE(2825);
      END_STATE();
    case 2656:
      if (lookahead == 'l') ADVANCE(2826);
      END_STATE();
    case 2657:
      if (lookahead == 'f') ADVANCE(2827);
      END_STATE();
    case 2658:
      if (lookahead == 'a') ADVANCE(2828);
      END_STATE();
    case 2659:
      if (lookahead == 'G') ADVANCE(2829);
      END_STATE();
    case 2660:
      if (lookahead == 'u') ADVANCE(2830);
      END_STATE();
    case 2661:
      if (lookahead == 't') ADVANCE(2831);
      END_STATE();
    case 2662:
      if (lookahead == 't') ADVANCE(2832);
      END_STATE();
    case 2663:
      if (lookahead == 'i') ADVANCE(2833);
      END_STATE();
    case 2664:
      if (lookahead == 'a') ADVANCE(2834);
      END_STATE();
    case 2665:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 2666:
      if (lookahead == 'g') ADVANCE(2835);
      END_STATE();
    case 2667:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 2668:
      if (lookahead == 'e') ADVANCE(2836);
      END_STATE();
    case 2669:
      if (lookahead == 'D') ADVANCE(2837);
      END_STATE();
    case 2670:
      if (lookahead == 'e') ADVANCE(2838);
      END_STATE();
    case 2671:
      if (lookahead == 's') ADVANCE(2839);
      END_STATE();
    case 2672:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(2840);
      if (lookahead == 'O') ADVANCE(2841);
      END_STATE();
    case 2673:
      if (lookahead == 'a') ADVANCE(2842);
      END_STATE();
    case 2674:
      if (lookahead == 'l') ADVANCE(2843);
      END_STATE();
    case 2675:
      if (lookahead == 't') ADVANCE(2844);
      END_STATE();
    case 2676:
      if (lookahead == 'u') ADVANCE(2845);
      END_STATE();
    case 2677:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(2846);
      if (lookahead == 'O') ADVANCE(2847);
      END_STATE();
    case 2678:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2679:
      if (lookahead == 'u') ADVANCE(2848);
      END_STATE();
    case 2680:
      if (lookahead == 'p') ADVANCE(2849);
      END_STATE();
    case 2681:
      if (lookahead == 'u') ADVANCE(2850);
      END_STATE();
    case 2682:
      if (lookahead == 'p') ADVANCE(2851);
      END_STATE();
    case 2683:
      if (lookahead == 'a') ADVANCE(2852);
      END_STATE();
    case 2684:
      if (lookahead == 'a') ADVANCE(2853);
      END_STATE();
    case 2685:
      if (lookahead == 'F') ADVANCE(2854);
      END_STATE();
    case 2686:
      if (lookahead == 'a') ADVANCE(2855);
      END_STATE();
    case 2687:
      if (lookahead == 'c') ADVANCE(2856);
      END_STATE();
    case 2688:
      if (lookahead == 'g') ADVANCE(2857);
      END_STATE();
    case 2689:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'b') ADVANCE(2858);
      END_STATE();
    case 2690:
      if (lookahead == 'a') ADVANCE(2859);
      END_STATE();
    case 2691:
      if (lookahead == 'k') ADVANCE(421);
      END_STATE();
    case 2692:
      if (lookahead == 'i') ADVANCE(2860);
      END_STATE();
    case 2693:
      if (lookahead == 'a') ADVANCE(2861);
      END_STATE();
    case 2694:
      if (lookahead == 'e') ADVANCE(2862);
      END_STATE();
    case 2695:
      if (lookahead == 'o') ADVANCE(2863);
      END_STATE();
    case 2696:
      if (lookahead == 'a') ADVANCE(2864);
      END_STATE();
    case 2697:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2698:
      if (lookahead == 'o') ADVANCE(2865);
      END_STATE();
    case 2699:
      if (lookahead == 'm') ADVANCE(2866);
      END_STATE();
    case 2700:
      if (lookahead == 'g') ADVANCE(2867);
      END_STATE();
    case 2701:
      if (lookahead == 'r') ADVANCE(2868);
      END_STATE();
    case 2702:
      if (lookahead == 'r') ADVANCE(2869);
      END_STATE();
    case 2703:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2704:
      if (lookahead == 'i') ADVANCE(2870);
      END_STATE();
    case 2705:
      if (lookahead == 's') ADVANCE(2871);
      END_STATE();
    case 2706:
      if (lookahead == 'h') ADVANCE(2872);
      END_STATE();
    case 2707:
      if (lookahead == 'u') ADVANCE(2873);
      END_STATE();
    case 2708:
      if (lookahead == 'u') ADVANCE(2874);
      END_STATE();
    case 2709:
      if (lookahead == 'a') ADVANCE(2875);
      END_STATE();
    case 2710:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2711:
      if (lookahead == 'e') ADVANCE(2876);
      END_STATE();
    case 2712:
      if (lookahead == 'a') ADVANCE(2877);
      END_STATE();
    case 2713:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2714:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 2715:
      if (lookahead == 'c') ADVANCE(2878);
      END_STATE();
    case 2716:
      if (lookahead == 'a') ADVANCE(2879);
      END_STATE();
    case 2717:
      if (lookahead == 'a') ADVANCE(2880);
      END_STATE();
    case 2718:
      if (lookahead == 'n') ADVANCE(2881);
      END_STATE();
    case 2719:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2720:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 2721:
      if (lookahead == 'T') ADVANCE(2882);
      END_STATE();
    case 2722:
      if (lookahead == '.') ADVANCE(2883);
      END_STATE();
    case 2723:
      if (lookahead == 'a') ADVANCE(2884);
      END_STATE();
    case 2724:
      if (lookahead == 'o') ADVANCE(2885);
      END_STATE();
    case 2725:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2726:
      if (lookahead == 'c') ADVANCE(2886);
      END_STATE();
    case 2727:
      if (lookahead == 'n') ADVANCE(2887);
      END_STATE();
    case 2728:
      if (lookahead == 'i') ADVANCE(2888);
      END_STATE();
    case 2729:
      if (lookahead == 'o') ADVANCE(2889);
      END_STATE();
    case 2730:
      if (lookahead == 'o') ADVANCE(2890);
      END_STATE();
    case 2731:
      if (lookahead == 'u') ADVANCE(2891);
      END_STATE();
    case 2732:
      if (lookahead == 't') ADVANCE(2892);
      END_STATE();
    case 2733:
      if (lookahead == 'd') ADVANCE(2893);
      END_STATE();
    case 2734:
      if (lookahead == 'e') ADVANCE(2894);
      END_STATE();
    case 2735:
      if (lookahead == 'g') ADVANCE(2895);
      END_STATE();
    case 2736:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 2737:
      if (lookahead == 'g') ADVANCE(2896);
      END_STATE();
    case 2738:
      if (lookahead == 'c') ADVANCE(2897);
      END_STATE();
    case 2739:
      if (lookahead == 'e') ADVANCE(2898);
      END_STATE();
    case 2740:
      if (lookahead == 't') ADVANCE(2899);
      END_STATE();
    case 2741:
      if (lookahead == 't') ADVANCE(2900);
      END_STATE();
    case 2742:
      if (lookahead == 'N') ADVANCE(2901);
      END_STATE();
    case 2743:
      if (lookahead == 'r') ADVANCE(2902);
      END_STATE();
    case 2744:
      if (lookahead == 'u') ADVANCE(2903);
      END_STATE();
    case 2745:
      if (lookahead == 'p') ADVANCE(2904);
      END_STATE();
    case 2746:
      if (lookahead == 'a') ADVANCE(2905);
      END_STATE();
    case 2747:
      if (lookahead == 's') ADVANCE(2906);
      END_STATE();
    case 2748:
      if (lookahead == 't') ADVANCE(2907);
      END_STATE();
    case 2749:
      if (lookahead == 'r') ADVANCE(2908);
      END_STATE();
    case 2750:
      if (lookahead == 'i') ADVANCE(2909);
      END_STATE();
    case 2751:
      if (lookahead == 'i') ADVANCE(2910);
      END_STATE();
    case 2752:
      if (lookahead == 'e') ADVANCE(2911);
      END_STATE();
    case 2753:
      if (lookahead == 'm') ADVANCE(2912);
      END_STATE();
    case 2754:
      if (lookahead == 't') ADVANCE(2913);
      END_STATE();
    case 2755:
      if (lookahead == 's') ADVANCE(2914);
      END_STATE();
    case 2756:
      if (lookahead == 't') ADVANCE(2915);
      END_STATE();
    case 2757:
      if (lookahead == 'O') ADVANCE(2916);
      END_STATE();
    case 2758:
      if (lookahead == 'R') ADVANCE(2917);
      END_STATE();
    case 2759:
      if (lookahead == 'l') ADVANCE(2918);
      END_STATE();
    case 2760:
      if (lookahead == 'o') ADVANCE(2919);
      END_STATE();
    case 2761:
      if (lookahead == 'b') ADVANCE(2920);
      END_STATE();
    case 2762:
      if (lookahead == 'o') ADVANCE(2921);
      END_STATE();
    case 2763:
      if (lookahead == 'o') ADVANCE(2922);
      END_STATE();
    case 2764:
      if (lookahead == 'y') ADVANCE(2923);
      END_STATE();
    case 2765:
      if (lookahead == 'e') ADVANCE(2924);
      END_STATE();
    case 2766:
      if (lookahead == 'i') ADVANCE(2925);
      END_STATE();
    case 2767:
      if (lookahead == 'A') ADVANCE(2926);
      if (lookahead == 'K') ADVANCE(2927);
      END_STATE();
    case 2768:
      if (lookahead == 'd') ADVANCE(2928);
      END_STATE();
    case 2769:
      if (lookahead == 'c') ADVANCE(2929);
      END_STATE();
    case 2770:
      if (lookahead == 'L') ADVANCE(2930);
      if (lookahead == 'S') ADVANCE(2931);
      END_STATE();
    case 2771:
      if (lookahead == 'a') ADVANCE(2932);
      END_STATE();
    case 2772:
      if (lookahead == 'e') ADVANCE(2933);
      END_STATE();
    case 2773:
      if (lookahead == 'e') ADVANCE(2934);
      END_STATE();
    case 2774:
      if (lookahead == 'u') ADVANCE(2935);
      END_STATE();
    case 2775:
      if (lookahead == 'o') ADVANCE(2936);
      END_STATE();
    case 2776:
      if (lookahead == 'n') ADVANCE(2937);
      END_STATE();
    case 2777:
      if (lookahead == 't') ADVANCE(2938);
      END_STATE();
    case 2778:
      if (lookahead == 'a') ADVANCE(2939);
      END_STATE();
    case 2779:
      if (lookahead == 'u') ADVANCE(2940);
      END_STATE();
    case 2780:
      if (lookahead == 'i') ADVANCE(2941);
      END_STATE();
    case 2781:
      if (lookahead == 'a') ADVANCE(2942);
      END_STATE();
    case 2782:
      if (lookahead == 'e') ADVANCE(2943);
      END_STATE();
    case 2783:
      if (lookahead == 's') ADVANCE(2944);
      END_STATE();
    case 2784:
      if (lookahead == 's') ADVANCE(2945);
      END_STATE();
    case 2785:
      if (lookahead == 'a') ADVANCE(2946);
      END_STATE();
    case 2786:
      if (lookahead == 'h') ADVANCE(2947);
      END_STATE();
    case 2787:
      if (lookahead == 'n') ADVANCE(2948);
      END_STATE();
    case 2788:
      if (lookahead == 'i') ADVANCE(2949);
      END_STATE();
    case 2789:
      if (lookahead == 'i') ADVANCE(2950);
      END_STATE();
    case 2790:
      if (lookahead == 'l') ADVANCE(2951);
      END_STATE();
    case 2791:
      if (lookahead == 'X' ||
          lookahead == 'Z') ADVANCE(421);
      END_STATE();
    case 2792:
      if (lookahead == 'u') ADVANCE(2952);
      END_STATE();
    case 2793:
      if (lookahead == 'e') ADVANCE(2953);
      END_STATE();
    case 2794:
      if (lookahead == 'e') ADVANCE(2954);
      END_STATE();
    case 2795:
      if (lookahead == 'u') ADVANCE(2955);
      END_STATE();
    case 2796:
      if (lookahead == 's') ADVANCE(2956);
      END_STATE();
    case 2797:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'E') ADVANCE(2957);
      if (lookahead == 'I') ADVANCE(2958);
      if (lookahead == 'O') ADVANCE(2959);
      if (lookahead == 'S') ADVANCE(2960);
      END_STATE();
    case 2798:
      if (lookahead == 'b') ADVANCE(2961);
      END_STATE();
    case 2799:
      if (lookahead == 'u') ADVANCE(2962);
      END_STATE();
    case 2800:
      if (lookahead == 'r') ADVANCE(2963);
      END_STATE();
    case 2801:
      if (lookahead == 'g') ADVANCE(2964);
      END_STATE();
    case 2802:
      if (lookahead == 'l') ADVANCE(2965);
      END_STATE();
    case 2803:
      if (lookahead == 'a') ADVANCE(2966);
      END_STATE();
    case 2804:
      if (lookahead == 'a') ADVANCE(2967);
      END_STATE();
    case 2805:
      if (lookahead == 'e') ADVANCE(2968);
      END_STATE();
    case 2806:
      if (lookahead == 'l') ADVANCE(2969);
      END_STATE();
    case 2807:
      if (lookahead == 's') ADVANCE(2970);
      END_STATE();
    case 2808:
      if (lookahead == 'e') ADVANCE(2971);
      END_STATE();
    case 2809:
      if (lookahead == 'a') ADVANCE(2972);
      END_STATE();
    case 2810:
      if (lookahead == 'P') ADVANCE(2973);
      END_STATE();
    case 2811:
      if (lookahead == 'e') ADVANCE(2974);
      END_STATE();
    case 2812:
      if (lookahead == 'r') ADVANCE(2975);
      END_STATE();
    case 2813:
      if (lookahead == 'n') ADVANCE(2976);
      END_STATE();
    case 2814:
      if (lookahead == 'u') ADVANCE(2977);
      END_STATE();
    case 2815:
      if (lookahead == 'r') ADVANCE(2978);
      END_STATE();
    case 2816:
      if (lookahead == 'l') ADVANCE(2979);
      END_STATE();
    case 2817:
      if (lookahead == 'a') ADVANCE(2980);
      END_STATE();
    case 2818:
      if (lookahead == 'r') ADVANCE(2981);
      END_STATE();
    case 2819:
      if (lookahead == 'd') ADVANCE(2982);
      END_STATE();
    case 2820:
      if (lookahead == 'u') ADVANCE(2983);
      END_STATE();
    case 2821:
      if (lookahead == 'W') ADVANCE(2984);
      END_STATE();
    case 2822:
      if (lookahead == 's') ADVANCE(2985);
      END_STATE();
    case 2823:
      if (lookahead == 'e') ADVANCE(2986);
      END_STATE();
    case 2824:
      if (lookahead == 'a') ADVANCE(2987);
      END_STATE();
    case 2825:
      if (lookahead == 'M') ADVANCE(2988);
      if (lookahead == 'R') ADVANCE(2989);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(421);
      END_STATE();
    case 2826:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'R') ADVANCE(2990);
      END_STATE();
    case 2827:
      if (lookahead == 'L') ADVANCE(2991);
      END_STATE();
    case 2828:
      if (lookahead == 'c') ADVANCE(2992);
      END_STATE();
    case 2829:
      if (lookahead == 'a') ADVANCE(2993);
      END_STATE();
    case 2830:
      if (lookahead == 'i') ADVANCE(2994);
      END_STATE();
    case 2831:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 2832:
      if (lookahead == 'a') ADVANCE(2995);
      END_STATE();
    case 2833:
      if (lookahead == 'm') ADVANCE(2996);
      END_STATE();
    case 2834:
      if (lookahead == 't') ADVANCE(2997);
      END_STATE();
    case 2835:
      if (lookahead == 'e') ADVANCE(2998);
      if (lookahead == 'i') ADVANCE(2999);
      END_STATE();
    case 2836:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(3000);
      if (lookahead == 'O') ADVANCE(3001);
      END_STATE();
    case 2837:
      if (lookahead == 'i') ADVANCE(3002);
      END_STATE();
    case 2838:
      if (lookahead == 'n') ADVANCE(3003);
      END_STATE();
    case 2839:
      if (lookahead == 'O') ADVANCE(3004);
      END_STATE();
    case 2840:
      if (lookahead == 'n') ADVANCE(3005);
      END_STATE();
    case 2841:
      if (lookahead == 'u') ADVANCE(3006);
      END_STATE();
    case 2842:
      if (lookahead == 'n') ADVANCE(3007);
      END_STATE();
    case 2843:
      if (lookahead == 'e') ADVANCE(3008);
      END_STATE();
    case 2844:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 2845:
      if (lookahead == 't') ADVANCE(3009);
      END_STATE();
    case 2846:
      if (lookahead == 'n') ADVANCE(3010);
      END_STATE();
    case 2847:
      if (lookahead == 'u') ADVANCE(3011);
      END_STATE();
    case 2848:
      if (lookahead == 't') ADVANCE(3012);
      END_STATE();
    case 2849:
      if (lookahead == 'u') ADVANCE(3013);
      END_STATE();
    case 2850:
      if (lookahead == 't') ADVANCE(3014);
      END_STATE();
    case 2851:
      if (lookahead == 'u') ADVANCE(3015);
      END_STATE();
    case 2852:
      if (lookahead == 'r') ADVANCE(3016);
      END_STATE();
    case 2853:
      if (lookahead == 'r') ADVANCE(3017);
      END_STATE();
    case 2854:
      if (lookahead == 'u') ADVANCE(3018);
      END_STATE();
    case 2855:
      if (lookahead == 'r') ADVANCE(3019);
      END_STATE();
    case 2856:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2857:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2858:
      if (lookahead == 'o') ADVANCE(3020);
      END_STATE();
    case 2859:
      if (lookahead == 'r') ADVANCE(3021);
      END_STATE();
    case 2860:
      if (lookahead == 's') ADVANCE(3022);
      END_STATE();
    case 2861:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2862:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 2863:
      if (lookahead == 't') ADVANCE(3023);
      END_STATE();
    case 2864:
      if (lookahead == 'n') ADVANCE(3024);
      END_STATE();
    case 2865:
      if (lookahead == 'a') ADVANCE(3025);
      END_STATE();
    case 2866:
      if (lookahead == 'a') ADVANCE(3026);
      END_STATE();
    case 2867:
      if (lookahead == 'H') ADVANCE(3027);
      END_STATE();
    case 2868:
      if (lookahead == 'o') ADVANCE(3028);
      END_STATE();
    case 2869:
      if (lookahead == 't') ADVANCE(3029);
      END_STATE();
    case 2870:
      if (lookahead == 'a') ADVANCE(3030);
      END_STATE();
    case 2871:
      if (lookahead == 'p') ADVANCE(3031);
      END_STATE();
    case 2872:
      if (lookahead == 'i') ADVANCE(3032);
      END_STATE();
    case 2873:
      if (lookahead == 'l') ADVANCE(3033);
      END_STATE();
    case 2874:
      if (lookahead == 'r') ADVANCE(3034);
      END_STATE();
    case 2875:
      if (lookahead == 'g') ADVANCE(3035);
      END_STATE();
    case 2876:
      if (lookahead == 'n') ADVANCE(3036);
      END_STATE();
    case 2877:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 2878:
      if (lookahead == 't') ADVANCE(3037);
      END_STATE();
    case 2879:
      if (lookahead == 's') ADVANCE(3038);
      END_STATE();
    case 2880:
      if (lookahead == 'c') ADVANCE(3039);
      END_STATE();
    case 2881:
      if (lookahead == 'c') ADVANCE(3040);
      END_STATE();
    case 2882:
      if (lookahead == 'y') ADVANCE(3041);
      END_STATE();
    case 2883:
      if (lookahead == 'D') ADVANCE(3042);
      if (lookahead == 'H') ADVANCE(3043);
      if (lookahead == 'V') ADVANCE(3044);
      END_STATE();
    case 2884:
      if (lookahead == 'r') ADVANCE(3045);
      END_STATE();
    case 2885:
      if (lookahead == 'n') ADVANCE(3046);
      END_STATE();
    case 2886:
      if (lookahead == 'i') ADVANCE(3047);
      END_STATE();
    case 2887:
      if (lookahead == 'c') ADVANCE(3048);
      END_STATE();
    case 2888:
      if (lookahead == 'd') ADVANCE(3049);
      END_STATE();
    case 2889:
      if (lookahead == 'n') ADVANCE(3050);
      END_STATE();
    case 2890:
      if (lookahead == 'g') ADVANCE(3051);
      if (lookahead == 'u') ADVANCE(3052);
      END_STATE();
    case 2891:
      if (lookahead == 't') ADVANCE(3053);
      END_STATE();
    case 2892:
      if (lookahead == 'i') ADVANCE(3054);
      END_STATE();
    case 2893:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2894:
      if (lookahead == 's') ADVANCE(3055);
      END_STATE();
    case 2895:
      if (lookahead == 'e') ADVANCE(3056);
      END_STATE();
    case 2896:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2897:
      if (lookahead == 'i') ADVANCE(3057);
      END_STATE();
    case 2898:
      if (lookahead == 'r') ADVANCE(3058);
      END_STATE();
    case 2899:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 2900:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 2901:
      if (lookahead == 'u') ADVANCE(3059);
      END_STATE();
    case 2902:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2903:
      if (lookahead == 'a') ADVANCE(3060);
      END_STATE();
    case 2904:
      if (lookahead == 'a') ADVANCE(3061);
      if (lookahead == 'i') ADVANCE(3062);
      END_STATE();
    case 2905:
      if (lookahead == 'b') ADVANCE(3063);
      END_STATE();
    case 2906:
      if (lookahead == 'u') ADVANCE(3064);
      END_STATE();
    case 2907:
      if (lookahead == 'i') ADVANCE(3065);
      END_STATE();
    case 2908:
      if (lookahead == 'e') ADVANCE(3066);
      END_STATE();
    case 2909:
      if (lookahead == 'n') ADVANCE(3067);
      END_STATE();
    case 2910:
      if (lookahead == 'n') ADVANCE(3068);
      END_STATE();
    case 2911:
      if (lookahead == 'r') ADVANCE(3069);
      END_STATE();
    case 2912:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2913:
      if (lookahead == 'i') ADVANCE(3070);
      END_STATE();
    case 2914:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2915:
      if (lookahead == 'E') ADVANCE(3071);
      END_STATE();
    case 2916:
      if (lookahead == 'f') ADVANCE(3072);
      END_STATE();
    case 2917:
      if (lookahead == 'e') ADVANCE(3073);
      END_STATE();
    case 2918:
      if (lookahead == 'H') ADVANCE(3074);
      if (lookahead == 'P') ADVANCE(3075);
      END_STATE();
    case 2919:
      if (lookahead == 'r') ADVANCE(3076);
      END_STATE();
    case 2920:
      if (lookahead == 'l') ADVANCE(3077);
      END_STATE();
    case 2921:
      if (lookahead == 'n') ADVANCE(3078);
      END_STATE();
    case 2922:
      if (lookahead == 'n') ADVANCE(3079);
      END_STATE();
    case 2923:
      if (lookahead == 'p') ADVANCE(3080);
      END_STATE();
    case 2924:
      if (lookahead == 's') ADVANCE(3081);
      END_STATE();
    case 2925:
      if (lookahead == 'o') ADVANCE(3082);
      END_STATE();
    case 2926:
      if (lookahead == 'u') ADVANCE(421);
      END_STATE();
    case 2927:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 2928:
      if (lookahead == 'i') ADVANCE(3083);
      END_STATE();
    case 2929:
      if (lookahead == 'i') ADVANCE(3084);
      END_STATE();
    case 2930:
      if (lookahead == 'e') ADVANCE(3085);
      END_STATE();
    case 2931:
      if (lookahead == 'p') ADVANCE(3086);
      END_STATE();
    case 2932:
      if (lookahead == 't') ADVANCE(3087);
      END_STATE();
    case 2933:
      if (lookahead == 'n') ADVANCE(3088);
      END_STATE();
    case 2934:
      if (lookahead == 'l') ADVANCE(3089);
      END_STATE();
    case 2935:
      if (lookahead == 'n') ADVANCE(3090);
      END_STATE();
    case 2936:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 2937:
      if (lookahead == 't') ADVANCE(3091);
      END_STATE();
    case 2938:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2939:
      if (lookahead == 'l') ADVANCE(3092);
      END_STATE();
    case 2940:
      if (lookahead == 'n') ADVANCE(3093);
      END_STATE();
    case 2941:
      if (lookahead == 'o') ADVANCE(3094);
      END_STATE();
    case 2942:
      if (lookahead == 't') ADVANCE(3095);
      END_STATE();
    case 2943:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 2944:
      if (lookahead == 'e') ADVANCE(3096);
      END_STATE();
    case 2945:
      if (lookahead == 'I') ADVANCE(3097);
      END_STATE();
    case 2946:
      if (lookahead == 't') ADVANCE(3098);
      END_STATE();
    case 2947:
      if (lookahead == 'e') ADVANCE(3099);
      END_STATE();
    case 2948:
      if (lookahead == 'a') ADVANCE(3100);
      END_STATE();
    case 2949:
      if (lookahead == 'o') ADVANCE(3101);
      END_STATE();
    case 2950:
      if (lookahead == 'o') ADVANCE(3102);
      END_STATE();
    case 2951:
      if (lookahead == 'e') ADVANCE(3103);
      END_STATE();
    case 2952:
      if (lookahead == 'a') ADVANCE(3104);
      END_STATE();
    case 2953:
      if (lookahead == 'r') ADVANCE(3105);
      END_STATE();
    case 2954:
      if (lookahead == 'n') ADVANCE(3106);
      END_STATE();
    case 2955:
      if (lookahead == 'i') ADVANCE(3107);
      END_STATE();
    case 2956:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 2957:
      if (lookahead == 'f') ADVANCE(3108);
      if (lookahead == 'x') ADVANCE(3109);
      END_STATE();
    case 2958:
      if (lookahead == 'n') ADVANCE(3110);
      END_STATE();
    case 2959:
      if (lookahead == 'u') ADVANCE(3111);
      END_STATE();
    case 2960:
      if (lookahead == 'e') ADVANCE(3112);
      END_STATE();
    case 2961:
      if (lookahead == 'o') ADVANCE(3113);
      END_STATE();
    case 2962:
      if (lookahead == 'i') ADVANCE(3114);
      END_STATE();
    case 2963:
      if (lookahead == 'o') ADVANCE(3115);
      END_STATE();
    case 2964:
      if (lookahead == 'e') ADVANCE(3116);
      END_STATE();
    case 2965:
      if (lookahead == 'u') ADVANCE(3117);
      END_STATE();
    case 2966:
      if (lookahead == 'm') ADVANCE(3118);
      END_STATE();
    case 2967:
      if (lookahead == 't') ADVANCE(3119);
      END_STATE();
    case 2968:
      if (lookahead == 'r') ADVANCE(3120);
      END_STATE();
    case 2969:
      if (lookahead == 't') ADVANCE(3121);
      END_STATE();
    case 2970:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 2971:
      if (lookahead == 'I') ADVANCE(3122);
      END_STATE();
    case 2972:
      if (lookahead == 's') ADVANCE(3123);
      END_STATE();
    case 2973:
      if (lookahead == 'o') ADVANCE(3124);
      END_STATE();
    case 2974:
      if (lookahead == 'l') ADVANCE(3125);
      END_STATE();
    case 2975:
      if (lookahead == 'A') ADVANCE(3126);
      END_STATE();
    case 2976:
      if (lookahead == 'p') ADVANCE(3127);
      END_STATE();
    case 2977:
      if (lookahead == 't') ADVANCE(3128);
      END_STATE();
    case 2978:
      if (lookahead == 'e') ADVANCE(3129);
      END_STATE();
    case 2979:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 2980:
      if (lookahead == 'd') ADVANCE(3130);
      END_STATE();
    case 2981:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 2982:
      if (lookahead == 'I') ADVANCE(3131);
      END_STATE();
    case 2983:
      if (lookahead == 'r') ADVANCE(3132);
      END_STATE();
    case 2984:
      if (lookahead == 'e') ADVANCE(3133);
      END_STATE();
    case 2985:
      if (lookahead == 't') ADVANCE(3134);
      END_STATE();
    case 2986:
      if (lookahead == 's') ADVANCE(3135);
      END_STATE();
    case 2987:
      if (lookahead == 'l') ADVANCE(3136);
      END_STATE();
    case 2988:
      if (lookahead == 'a') ADVANCE(3137);
      END_STATE();
    case 2989:
      if (lookahead == 'e') ADVANCE(3138);
      END_STATE();
    case 2990:
      if (lookahead == 'a') ADVANCE(3139);
      END_STATE();
    case 2991:
      if (lookahead == 'i') ADVANCE(3140);
      END_STATE();
    case 2992:
      if (lookahead == 'h') ADVANCE(3141);
      END_STATE();
    case 2993:
      if (lookahead == 's') ADVANCE(3142);
      END_STATE();
    case 2994:
      if (lookahead == 'r') ADVANCE(3143);
      END_STATE();
    case 2995:
      if (lookahead == 'c') ADVANCE(3144);
      END_STATE();
    case 2996:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 2997:
      if (lookahead == 'u') ADVANCE(3145);
      END_STATE();
    case 2998:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 2999:
      if (lookahead == 'n') ADVANCE(3146);
      END_STATE();
    case 3000:
      if (lookahead == 'n') ADVANCE(3147);
      END_STATE();
    case 3001:
      if (lookahead == 'u') ADVANCE(3148);
      END_STATE();
    case 3002:
      if (lookahead == 'o') ADVANCE(3149);
      END_STATE();
    case 3003:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(3150);
      if (lookahead == 'O') ADVANCE(3151);
      END_STATE();
    case 3004:
      if (lookahead == 'x') ADVANCE(3152);
      END_STATE();
    case 3005:
      if (lookahead == 'p') ADVANCE(3153);
      END_STATE();
    case 3006:
      if (lookahead == 't') ADVANCE(3154);
      END_STATE();
    case 3007:
      if (lookahead == 't') ADVANCE(3155);
      END_STATE();
    case 3008:
      if (lookahead == 's') ADVANCE(3156);
      END_STATE();
    case 3009:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3010:
      if (lookahead == 'p') ADVANCE(3157);
      END_STATE();
    case 3011:
      if (lookahead == 't') ADVANCE(3158);
      END_STATE();
    case 3012:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3013:
      if (lookahead == 't') ADVANCE(3159);
      END_STATE();
    case 3014:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3015:
      if (lookahead == 't') ADVANCE(3160);
      END_STATE();
    case 3016:
      if (lookahead == 'g') ADVANCE(3161);
      END_STATE();
    case 3017:
      if (lookahead == 'g') ADVANCE(3162);
      END_STATE();
    case 3018:
      if (lookahead == 'l') ADVANCE(3163);
      END_STATE();
    case 3019:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3020:
      if (lookahead == 'a') ADVANCE(3164);
      END_STATE();
    case 3021:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3022:
      if (lookahead == 't') ADVANCE(3165);
      END_STATE();
    case 3023:
      if (lookahead == 't') ADVANCE(3166);
      END_STATE();
    case 3024:
      if (lookahead == 'i') ADVANCE(3167);
      END_STATE();
    case 3025:
      if (lookahead == 'r') ADVANCE(3168);
      END_STATE();
    case 3026:
      if (lookahead == 'b') ADVANCE(3169);
      END_STATE();
    case 3027:
      if (lookahead == 'e') ADVANCE(3170);
      END_STATE();
    case 3028:
      if (lookahead == 'c') ADVANCE(3171);
      END_STATE();
    case 3029:
      if (lookahead == 'r') ADVANCE(3172);
      END_STATE();
    case 3030:
      if (lookahead == 'n') ADVANCE(3173);
      END_STATE();
    case 3031:
      if (lookahead == 'h') ADVANCE(3174);
      END_STATE();
    case 3032:
      if (lookahead == 'n') ADVANCE(3175);
      END_STATE();
    case 3033:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3034:
      if (lookahead == 'c') ADVANCE(3176);
      END_STATE();
    case 3035:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3036:
      if (lookahead == 't') ADVANCE(3177);
      END_STATE();
    case 3037:
      if (lookahead == 'i') ADVANCE(3178);
      END_STATE();
    case 3038:
      if (lookahead == 's') ADVANCE(3179);
      END_STATE();
    case 3039:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 3040:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 3041:
      if (lookahead == 'p') ADVANCE(3180);
      END_STATE();
    case 3042:
      if (lookahead == 'e') ADVANCE(3181);
      END_STATE();
    case 3043:
      if (lookahead == 'o') ADVANCE(3182);
      END_STATE();
    case 3044:
      if (lookahead == 'e') ADVANCE(3183);
      END_STATE();
    case 3045:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3046:
      if (lookahead == 'a') ADVANCE(3184);
      END_STATE();
    case 3047:
      if (lookahead == 'o') ADVANCE(3185);
      END_STATE();
    case 3048:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 3049:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3050:
      if (lookahead == 'D') ADVANCE(3186);
      END_STATE();
    case 3051:
      if (lookahead == 'e') ADVANCE(3187);
      END_STATE();
    case 3052:
      if (lookahead == 's') ADVANCE(3188);
      END_STATE();
    case 3053:
      if (lookahead == 'a') ADVANCE(3189);
      END_STATE();
    case 3054:
      if (lookahead == 'l') ADVANCE(3190);
      END_STATE();
    case 3055:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 3056:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'R') ADVANCE(3191);
      END_STATE();
    case 3057:
      if (lookahead == 'e') ADVANCE(3192);
      END_STATE();
    case 3058:
      if (lookahead == 'T') ADVANCE(3193);
      END_STATE();
    case 3059:
      if (lookahead == 'm') ADVANCE(3194);
      END_STATE();
    case 3060:
      if (lookahead == 'n') ADVANCE(3195);
      END_STATE();
    case 3061:
      if (lookahead == 'n') ADVANCE(3196);
      END_STATE();
    case 3062:
      if (lookahead == 'e') ADVANCE(3197);
      END_STATE();
    case 3063:
      if (lookahead == 'H') ADVANCE(3198);
      END_STATE();
    case 3064:
      if (lookahead == 'r') ADVANCE(3199);
      END_STATE();
    case 3065:
      if (lookahead == 't') ADVANCE(3200);
      END_STATE();
    case 3066:
      if (lookahead == 'n') ADVANCE(3201);
      END_STATE();
    case 3067:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 3068:
      if (lookahead == 'g') ADVANCE(3202);
      END_STATE();
    case 3069:
      if (lookahead == 'a') ADVANCE(3203);
      END_STATE();
    case 3070:
      if (lookahead == 'o') ADVANCE(3204);
      END_STATE();
    case 3071:
      if (lookahead == 'r') ADVANCE(3205);
      END_STATE();
    case 3072:
      if (lookahead == 'f') ADVANCE(421);
      END_STATE();
    case 3073:
      if (lookahead == 'm') ADVANCE(3206);
      END_STATE();
    case 3074:
      if (lookahead == 'a') ADVANCE(3207);
      END_STATE();
    case 3075:
      if (lookahead == 'a') ADVANCE(3208);
      END_STATE();
    case 3076:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3077:
      if (lookahead == 'e') ADVANCE(3209);
      END_STATE();
    case 3078:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3210);
      if (lookahead == 'L') ADVANCE(3211);
      if (lookahead == 'O') ADVANCE(3212);
      END_STATE();
    case 3079:
      if (lookahead == 'R') ADVANCE(3213);
      END_STATE();
    case 3080:
      if (lookahead == 'e') ADVANCE(3214);
      END_STATE();
    case 3081:
      if (lookahead == 'e') ADVANCE(3215);
      END_STATE();
    case 3082:
      if (lookahead == 'n') ADVANCE(3216);
      END_STATE();
    case 3083:
      if (lookahead == 't') ADVANCE(3217);
      END_STATE();
    case 3084:
      if (lookahead == 't') ADVANCE(3218);
      END_STATE();
    case 3085:
      if (lookahead == 'v') ADVANCE(3219);
      END_STATE();
    case 3086:
      if (lookahead == 'e') ADVANCE(3220);
      END_STATE();
    case 3087:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3088:
      if (lookahead == 't') ADVANCE(3221);
      END_STATE();
    case 3089:
      if (lookahead == 'o') ADVANCE(3222);
      END_STATE();
    case 3090:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3091:
      if (lookahead == 'r') ADVANCE(3223);
      END_STATE();
    case 3092:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'R') ADVANCE(3224);
      END_STATE();
    case 3093:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3094:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 3095:
      if (lookahead == 'i') ADVANCE(3225);
      END_STATE();
    case 3096:
      if (lookahead == 'a') ADVANCE(3226);
      END_STATE();
    case 3097:
      if (lookahead == 'n') ADVANCE(3227);
      END_STATE();
    case 3098:
      if (lookahead == 't') ADVANCE(3228);
      END_STATE();
    case 3099:
      if (lookahead == 'r') ADVANCE(3229);
      END_STATE();
    case 3100:
      if (lookahead == 'l') ADVANCE(3230);
      END_STATE();
    case 3101:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3102:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 3103:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 3104:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 3105:
      if (lookahead == 'a') ADVANCE(3231);
      END_STATE();
    case 3106:
      if (lookahead == 't') ADVANCE(3232);
      END_STATE();
    case 3107:
      if (lookahead == 'r') ADVANCE(3233);
      END_STATE();
    case 3108:
      if (lookahead == 'f') ADVANCE(3234);
      END_STATE();
    case 3109:
      if (lookahead == 't') ADVANCE(3235);
      END_STATE();
    case 3110:
      if (lookahead == 'p') ADVANCE(3236);
      if (lookahead == 't') ADVANCE(3237);
      END_STATE();
    case 3111:
      if (lookahead == 't') ADVANCE(3238);
      END_STATE();
    case 3112:
      if (lookahead == 't') ADVANCE(3239);
      END_STATE();
    case 3113:
      if (lookahead == 'n') ADVANCE(3240);
      END_STATE();
    case 3114:
      if (lookahead == 'd') ADVANCE(3241);
      END_STATE();
    case 3115:
      if (lookahead == 'g') ADVANCE(3242);
      if (lookahead == 'u') ADVANCE(3243);
      END_STATE();
    case 3116:
      if (lookahead == 'n') ADVANCE(3244);
      END_STATE();
    case 3117:
      if (lookahead == 't') ADVANCE(3245);
      END_STATE();
    case 3118:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3246);
      if (lookahead == 'O') ADVANCE(3247);
      END_STATE();
    case 3119:
      if (lookahead == 'i') ADVANCE(3248);
      END_STATE();
    case 3120:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3249);
      if (lookahead == 'O') ADVANCE(3250);
      END_STATE();
    case 3121:
      if (lookahead == 'i') ADVANCE(3251);
      END_STATE();
    case 3122:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3123:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 3124:
      if (lookahead == 'w') ADVANCE(3252);
      END_STATE();
    case 3125:
      if (lookahead == 'C') ADVANCE(3253);
      END_STATE();
    case 3126:
      if (lookahead == 'x') ADVANCE(3254);
      END_STATE();
    case 3127:
      if (lookahead == 'u') ADVANCE(3255);
      END_STATE();
    case 3128:
      if (lookahead == 'p') ADVANCE(3256);
      END_STATE();
    case 3129:
      if (lookahead == 'n') ADVANCE(3257);
      END_STATE();
    case 3130:
      if (lookahead == 'i') ADVANCE(3258);
      END_STATE();
    case 3131:
      if (lookahead == 'n') ADVANCE(3259);
      END_STATE();
    case 3132:
      if (lookahead == 'e') ADVANCE(3260);
      END_STATE();
    case 3133:
      if (lookahead == 'i') ADVANCE(3261);
      END_STATE();
    case 3134:
      if (lookahead == 'i') ADVANCE(3262);
      END_STATE();
    case 3135:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3263);
      if (lookahead == 'O') ADVANCE(3264);
      END_STATE();
    case 3136:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3137:
      if (lookahead == 'g') ADVANCE(3265);
      END_STATE();
    case 3138:
      if (lookahead == 'l') ADVANCE(3266);
      END_STATE();
    case 3139:
      if (lookahead == 't') ADVANCE(3267);
      END_STATE();
    case 3140:
      if (lookahead == 'q') ADVANCE(3268);
      END_STATE();
    case 3141:
      if (lookahead == 'i') ADVANCE(3269);
      END_STATE();
    case 3142:
      if (lookahead == 'E') ADVANCE(3270);
      END_STATE();
    case 3143:
      if (lookahead == 'e') ADVANCE(3271);
      END_STATE();
    case 3144:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 3145:
      if (lookahead == 'r') ADVANCE(3272);
      END_STATE();
    case 3146:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 3147:
      if (lookahead == 'p') ADVANCE(3273);
      END_STATE();
    case 3148:
      if (lookahead == 't') ADVANCE(3274);
      END_STATE();
    case 3149:
      if (lookahead == 'x') ADVANCE(3275);
      END_STATE();
    case 3150:
      if (lookahead == 'n') ADVANCE(3276);
      END_STATE();
    case 3151:
      if (lookahead == 'u') ADVANCE(3277);
      END_STATE();
    case 3152:
      if (lookahead == 'i') ADVANCE(3278);
      END_STATE();
    case 3153:
      if (lookahead == 'u') ADVANCE(3279);
      END_STATE();
    case 3154:
      if (lookahead == 'p') ADVANCE(3280);
      END_STATE();
    case 3155:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(3281);
      if (lookahead == 'O') ADVANCE(3282);
      END_STATE();
    case 3156:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(3283);
      if (lookahead == 'O') ADVANCE(3284);
      END_STATE();
    case 3157:
      if (lookahead == 'u') ADVANCE(3285);
      END_STATE();
    case 3158:
      if (lookahead == 'p') ADVANCE(3286);
      END_STATE();
    case 3159:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3160:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3161:
      if (lookahead == 'e') ADVANCE(3287);
      END_STATE();
    case 3162:
      if (lookahead == 'e') ADVANCE(3288);
      END_STATE();
    case 3163:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 3164:
      if (lookahead == 'r') ADVANCE(3289);
      END_STATE();
    case 3165:
      if (lookahead == 'e') ADVANCE(3290);
      END_STATE();
    case 3166:
      if (lookahead == 'l') ADVANCE(3291);
      END_STATE();
    case 3167:
      if (lookahead == 's') ADVANCE(3292);
      END_STATE();
    case 3168:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3169:
      if (lookahead == 'l') ADVANCE(3293);
      END_STATE();
    case 3170:
      if (lookahead == 'a') ADVANCE(3294);
      END_STATE();
    case 3171:
      if (lookahead == 'e') ADVANCE(3295);
      END_STATE();
    case 3172:
      if (lookahead == 'i') ADVANCE(3296);
      END_STATE();
    case 3173:
      if (lookahead == 'c') ADVANCE(3297);
      END_STATE();
    case 3174:
      if (lookahead == 'e') ADVANCE(3298);
      END_STATE();
    case 3175:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 3176:
      if (lookahead == 'e') ADVANCE(3299);
      END_STATE();
    case 3177:
      if (lookahead == 'i') ADVANCE(3300);
      END_STATE();
    case 3178:
      if (lookahead == 'v') ADVANCE(3301);
      END_STATE();
    case 3179:
      if (lookahead == 'i') ADVANCE(3302);
      END_STATE();
    case 3180:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 3181:
      if (lookahead == 'f') ADVANCE(3303);
      END_STATE();
    case 3182:
      if (lookahead == 'r') ADVANCE(3304);
      END_STATE();
    case 3183:
      if (lookahead == 'r') ADVANCE(3305);
      END_STATE();
    case 3184:
      if (lookahead == 'r') ADVANCE(3306);
      END_STATE();
    case 3185:
      if (lookahead == 'u') ADVANCE(3307);
      END_STATE();
    case 3186:
      if (lookahead == 'i') ADVANCE(3308);
      END_STATE();
    case 3187:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 3188:
      if (lookahead == 'O') ADVANCE(3309);
      END_STATE();
    case 3189:
      if (lookahead == 'n') ADVANCE(3310);
      END_STATE();
    case 3190:
      if (lookahead == 'e') ADVANCE(3311);
      END_STATE();
    case 3191:
      if (lookahead == 'a') ADVANCE(3312);
      END_STATE();
    case 3192:
      if (lookahead == 'n') ADVANCE(3313);
      END_STATE();
    case 3193:
      if (lookahead == 'y') ADVANCE(3314);
      END_STATE();
    case 3194:
      if (lookahead == 'b') ADVANCE(3315);
      END_STATE();
    case 3195:
      if (lookahead == 't') ADVANCE(3316);
      END_STATE();
    case 3196:
      if (lookahead == 't') ADVANCE(3317);
      END_STATE();
    case 3197:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3198:
      if (lookahead == 'a') ADVANCE(3318);
      END_STATE();
    case 3199:
      if (lookahead == 'e') ADVANCE(3319);
      END_STATE();
    case 3200:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3201:
      if (lookahead == 'c') ADVANCE(3320);
      END_STATE();
    case 3202:
      if (lookahead == 'C') ADVANCE(3321);
      END_STATE();
    case 3203:
      if (lookahead == 't') ADVANCE(3322);
      END_STATE();
    case 3204:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 3205:
      if (lookahead == 'r') ADVANCE(3323);
      END_STATE();
    case 3206:
      if (lookahead == 'a') ADVANCE(3324);
      END_STATE();
    case 3207:
      if (lookahead == 's') ADVANCE(3325);
      END_STATE();
    case 3208:
      if (lookahead == 'r') ADVANCE(3326);
      END_STATE();
    case 3209:
      if (lookahead == 'G') ADVANCE(3327);
      END_STATE();
    case 3210:
      if (lookahead == 'n') ADVANCE(3328);
      END_STATE();
    case 3211:
      if (lookahead == 'i') ADVANCE(3329);
      END_STATE();
    case 3212:
      if (lookahead == 'u') ADVANCE(3330);
      END_STATE();
    case 3213:
      if (lookahead == 'a') ADVANCE(3331);
      END_STATE();
    case 3214:
      if (lookahead == 'I') ADVANCE(3332);
      END_STATE();
    case 3215:
      if (lookahead == 'a') ADVANCE(3333);
      END_STATE();
    case 3216:
      if (lookahead == 'C') ADVANCE(3334);
      END_STATE();
    case 3217:
      if (lookahead == 'i') ADVANCE(3335);
      END_STATE();
    case 3218:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3219:
      if (lookahead == 'e') ADVANCE(3336);
      END_STATE();
    case 3220:
      if (lookahead == 'e') ADVANCE(3337);
      END_STATE();
    case 3221:
      if (lookahead == 'E') ADVANCE(3338);
      END_STATE();
    case 3222:
      if (lookahead == 'c') ADVANCE(3339);
      END_STATE();
    case 3223:
      if (lookahead == 'o') ADVANCE(3340);
      END_STATE();
    case 3224:
      if (lookahead == 'a') ADVANCE(3341);
      END_STATE();
    case 3225:
      if (lookahead == 'o') ADVANCE(3342);
      END_STATE();
    case 3226:
      if (lookahead == 'r') ADVANCE(3343);
      END_STATE();
    case 3227:
      if (lookahead == 'Q') ADVANCE(3344);
      if (lookahead == 'V') ADVANCE(3345);
      END_STATE();
    case 3228:
      if (lookahead == 's') ADVANCE(3346);
      END_STATE();
    case 3229:
      if (lookahead == 'E') ADVANCE(3347);
      END_STATE();
    case 3230:
      if (lookahead == 'T') ADVANCE(3348);
      END_STATE();
    case 3231:
      if (lookahead == 't') ADVANCE(3349);
      END_STATE();
    case 3232:
      if (lookahead == 'i') ADVANCE(3350);
      END_STATE();
    case 3233:
      if (lookahead == 'e') ADVANCE(3351);
      END_STATE();
    case 3234:
      if (lookahead == 'i') ADVANCE(3352);
      END_STATE();
    case 3235:
      if (lookahead == 'e') ADVANCE(3353);
      END_STATE();
    case 3236:
      if (lookahead == 'u') ADVANCE(3354);
      END_STATE();
    case 3237:
      if (lookahead == 'e') ADVANCE(3355);
      END_STATE();
    case 3238:
      if (lookahead == 'p') ADVANCE(3356);
      END_STATE();
    case 3239:
      if (lookahead == 't') ADVANCE(3357);
      END_STATE();
    case 3240:
      if (lookahead == 'D') ADVANCE(3358);
      END_STATE();
    case 3241:
      if (lookahead == 'C') ADVANCE(3359);
      if (lookahead == 'N') ADVANCE(3360);
      if (lookahead == 'O') ADVANCE(3361);
      if (lookahead == 'P') ADVANCE(3362);
      if (lookahead == 'V') ADVANCE(3363);
      END_STATE();
    case 3242:
      if (lookahead == 'e') ADVANCE(3364);
      END_STATE();
    case 3243:
      if (lookahead == 's') ADVANCE(3365);
      END_STATE();
    case 3244:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3366);
      if (lookahead == 'O') ADVANCE(3367);
      END_STATE();
    case 3245:
      if (lookahead == 'a') ADVANCE(3368);
      END_STATE();
    case 3246:
      if (lookahead == 'n') ADVANCE(3369);
      END_STATE();
    case 3247:
      if (lookahead == 'u') ADVANCE(3370);
      END_STATE();
    case 3248:
      if (lookahead == 'l') ADVANCE(3371);
      END_STATE();
    case 3249:
      if (lookahead == 'n') ADVANCE(3372);
      END_STATE();
    case 3250:
      if (lookahead == 'u') ADVANCE(3373);
      END_STATE();
    case 3251:
      if (lookahead == 't') ADVANCE(3374);
      END_STATE();
    case 3252:
      if (lookahead == 'e') ADVANCE(3375);
      END_STATE();
    case 3253:
      if (lookahead == 'o') ADVANCE(3376);
      END_STATE();
    case 3254:
      if (lookahead == 'i') ADVANCE(3377);
      END_STATE();
    case 3255:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3256:
      if (lookahead == 'u') ADVANCE(3378);
      END_STATE();
    case 3257:
      if (lookahead == 'g') ADVANCE(3379);
      END_STATE();
    case 3258:
      if (lookahead == 'a') ADVANCE(3380);
      END_STATE();
    case 3259:
      if (lookahead == 'd') ADVANCE(3381);
      END_STATE();
    case 3260:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'D') ADVANCE(3382);
      if (lookahead == 'E') ADVANCE(3383);
      if (lookahead == 'I') ADVANCE(3384);
      if (lookahead == 'O') ADVANCE(3385);
      if (lookahead == 'S') ADVANCE(3386);
      END_STATE();
    case 3261:
      if (lookahead == 'g') ADVANCE(3387);
      END_STATE();
    case 3262:
      if (lookahead == 'n') ADVANCE(3388);
      END_STATE();
    case 3263:
      if (lookahead == 'n') ADVANCE(3389);
      END_STATE();
    case 3264:
      if (lookahead == 'u') ADVANCE(3390);
      END_STATE();
    case 3265:
      if (lookahead == 'n') ADVANCE(3391);
      END_STATE();
    case 3266:
      if (lookahead == 'a') ADVANCE(3392);
      END_STATE();
    case 3267:
      if (lookahead == 'i') ADVANCE(3393);
      END_STATE();
    case 3268:
      if (lookahead == 'u') ADVANCE(3394);
      END_STATE();
    case 3269:
      if (lookahead == 'n') ADVANCE(3395);
      END_STATE();
    case 3270:
      if (lookahead == 'f') ADVANCE(3396);
      END_STATE();
    case 3271:
      if (lookahead == 'd') ADVANCE(3397);
      END_STATE();
    case 3272:
      if (lookahead == 'e') ADVANCE(3398);
      END_STATE();
    case 3273:
      if (lookahead == 'u') ADVANCE(3399);
      END_STATE();
    case 3274:
      if (lookahead == 'p') ADVANCE(3400);
      END_STATE();
    case 3275:
      if (lookahead == 'i') ADVANCE(3401);
      END_STATE();
    case 3276:
      if (lookahead == 'p') ADVANCE(3402);
      END_STATE();
    case 3277:
      if (lookahead == 't') ADVANCE(3403);
      END_STATE();
    case 3278:
      if (lookahead == 'd') ADVANCE(3404);
      END_STATE();
    case 3279:
      if (lookahead == 't') ADVANCE(3405);
      END_STATE();
    case 3280:
      if (lookahead == 'u') ADVANCE(3406);
      END_STATE();
    case 3281:
      if (lookahead == 'n') ADVANCE(3407);
      END_STATE();
    case 3282:
      if (lookahead == 'u') ADVANCE(3408);
      END_STATE();
    case 3283:
      if (lookahead == 'n') ADVANCE(3409);
      END_STATE();
    case 3284:
      if (lookahead == 'u') ADVANCE(3410);
      END_STATE();
    case 3285:
      if (lookahead == 't') ADVANCE(3411);
      END_STATE();
    case 3286:
      if (lookahead == 'u') ADVANCE(3412);
      END_STATE();
    case 3287:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3288:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3289:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3290:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 3291:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3292:
      if (lookahead == 't') ADVANCE(3413);
      END_STATE();
    case 3293:
      if (lookahead == 'e') ADVANCE(3414);
      END_STATE();
    case 3294:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3295:
      if (lookahead == 's') ADVANCE(3415);
      END_STATE();
    case 3296:
      if (lookahead == 'd') ADVANCE(3416);
      END_STATE();
    case 3297:
      if (lookahead == 'e') ADVANCE(3417);
      END_STATE();
    case 3298:
      if (lookahead == 'r') ADVANCE(3418);
      END_STATE();
    case 3299:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 3300:
      if (lookahead == 'a') ADVANCE(3419);
      END_STATE();
    case 3301:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3302:
      if (lookahead == 'v') ADVANCE(3420);
      END_STATE();
    case 3303:
      if (lookahead == 'a') ADVANCE(3421);
      END_STATE();
    case 3304:
      if (lookahead == 'i') ADVANCE(3422);
      END_STATE();
    case 3305:
      if (lookahead == 't') ADVANCE(3423);
      END_STATE();
    case 3306:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3307:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 3308:
      if (lookahead == 'o') ADVANCE(3424);
      END_STATE();
    case 3309:
      if (lookahead == 'x') ADVANCE(3425);
      END_STATE();
    case 3310:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3311:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 3312:
      if (lookahead == 't') ADVANCE(3426);
      END_STATE();
    case 3313:
      if (lookahead == 'c') ADVANCE(3427);
      END_STATE();
    case 3314:
      if (lookahead == 'p') ADVANCE(3428);
      END_STATE();
    case 3315:
      if (lookahead == 'e') ADVANCE(3429);
      END_STATE();
    case 3316:
      if (lookahead == 'i') ADVANCE(3430);
      END_STATE();
    case 3317:
      if (lookahead == 'H') ADVANCE(3431);
      END_STATE();
    case 3318:
      if (lookahead == 's') ADVANCE(3432);
      END_STATE();
    case 3319:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'A') ADVANCE(3433);
      if (lookahead == 'W') ADVANCE(3434);
      END_STATE();
    case 3320:
      if (lookahead == 'e') ADVANCE(3435);
      END_STATE();
    case 3321:
      if (lookahead == 'l') ADVANCE(3436);
      END_STATE();
    case 3322:
      if (lookahead == 'u') ADVANCE(3437);
      END_STATE();
    case 3323:
      if (lookahead == 'o') ADVANCE(3438);
      END_STATE();
    case 3324:
      if (lookahead == 'i') ADVANCE(3439);
      END_STATE();
    case 3325:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 3326:
      if (lookahead == 'e') ADVANCE(3440);
      END_STATE();
    case 3327:
      if (lookahead == 'o') ADVANCE(3441);
      END_STATE();
    case 3328:
      if (lookahead == 'p') ADVANCE(3442);
      END_STATE();
    case 3329:
      if (lookahead == 'm') ADVANCE(3443);
      END_STATE();
    case 3330:
      if (lookahead == 't') ADVANCE(3444);
      END_STATE();
    case 3331:
      if (lookahead == 't') ADVANCE(3445);
      END_STATE();
    case 3332:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3333:
      if (lookahead == 'r') ADVANCE(3446);
      END_STATE();
    case 3334:
      if (lookahead == 'o') ADVANCE(3447);
      END_STATE();
    case 3335:
      if (lookahead == 'o') ADVANCE(3448);
      END_STATE();
    case 3336:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 3337:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3338:
      if (lookahead == 'f') ADVANCE(3449);
      END_STATE();
    case 3339:
      if (lookahead == 'i') ADVANCE(3450);
      END_STATE();
    case 3340:
      if (lookahead == 'l') ADVANCE(3451);
      END_STATE();
    case 3341:
      if (lookahead == 't') ADVANCE(3452);
      END_STATE();
    case 3342:
      if (lookahead == 'n') ADVANCE(3453);
      END_STATE();
    case 3343:
      if (lookahead == 'c') ADVANCE(3454);
      END_STATE();
    case 3344:
      if (lookahead == 'u') ADVANCE(3455);
      END_STATE();
    case 3345:
      if (lookahead == 'i') ADVANCE(3456);
      END_STATE();
    case 3346:
      if (lookahead == 'T') ADVANCE(3457);
      END_STATE();
    case 3347:
      if (lookahead == 'v') ADVANCE(3458);
      END_STATE();
    case 3348:
      if (lookahead == 'e') ADVANCE(3459);
      END_STATE();
    case 3349:
      if (lookahead == 'i') ADVANCE(3460);
      END_STATE();
    case 3350:
      if (lookahead == 'a') ADVANCE(3461);
      END_STATE();
    case 3351:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3352:
      if (lookahead == 'c') ADVANCE(3462);
      END_STATE();
    case 3353:
      if (lookahead == 'r') ADVANCE(3463);
      END_STATE();
    case 3354:
      if (lookahead == 't') ADVANCE(3464);
      END_STATE();
    case 3355:
      if (lookahead == 'r') ADVANCE(3465);
      END_STATE();
    case 3356:
      if (lookahead == 'u') ADVANCE(3466);
      END_STATE();
    case 3357:
      if (lookahead == 'i') ADVANCE(3467);
      END_STATE();
    case 3358:
      if (lookahead == 'i') ADVANCE(3468);
      END_STATE();
    case 3359:
      if (lookahead == 'a') ADVANCE(3469);
      END_STATE();
    case 3360:
      if (lookahead == 'i') ADVANCE(3470);
      END_STATE();
    case 3361:
      if (lookahead == 'x') ADVANCE(3471);
      END_STATE();
    case 3362:
      if (lookahead == 'o') ADVANCE(3472);
      END_STATE();
    case 3363:
      if (lookahead == 'o') ADVANCE(3473);
      END_STATE();
    case 3364:
      if (lookahead == 'n') ADVANCE(3474);
      END_STATE();
    case 3365:
      if (lookahead == 'O') ADVANCE(3475);
      END_STATE();
    case 3366:
      if (lookahead == 'n') ADVANCE(3476);
      END_STATE();
    case 3367:
      if (lookahead == 'u') ADVANCE(3477);
      END_STATE();
    case 3368:
      if (lookahead == 'n') ADVANCE(3478);
      END_STATE();
    case 3369:
      if (lookahead == 'p') ADVANCE(3479);
      END_STATE();
    case 3370:
      if (lookahead == 't') ADVANCE(3480);
      END_STATE();
    case 3371:
      if (lookahead == 'e') ADVANCE(3481);
      END_STATE();
    case 3372:
      if (lookahead == 'p') ADVANCE(3482);
      END_STATE();
    case 3373:
      if (lookahead == 't') ADVANCE(3483);
      END_STATE();
    case 3374:
      if (lookahead == 'u') ADVANCE(3484);
      END_STATE();
    case 3375:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 3376:
      if (lookahead == 's') ADVANCE(3485);
      END_STATE();
    case 3377:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 3378:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3379:
      if (lookahead == 't') ADVANCE(3486);
      END_STATE();
    case 3380:
      if (lookahead == 'n') ADVANCE(3487);
      END_STATE();
    case 3381:
      if (lookahead == 'e') ADVANCE(3488);
      END_STATE();
    case 3382:
      if (lookahead == 'i') ADVANCE(3489);
      END_STATE();
    case 3383:
      if (lookahead == 'x') ADVANCE(3490);
      END_STATE();
    case 3384:
      if (lookahead == 'n') ADVANCE(3491);
      END_STATE();
    case 3385:
      if (lookahead == 'u') ADVANCE(3492);
      END_STATE();
    case 3386:
      if (lookahead == 'e') ADVANCE(3493);
      END_STATE();
    case 3387:
      if (lookahead == 'h') ADVANCE(3494);
      END_STATE();
    case 3388:
      if (lookahead == 'a') ADVANCE(3495);
      END_STATE();
    case 3389:
      if (lookahead == 'p') ADVANCE(3496);
      END_STATE();
    case 3390:
      if (lookahead == 't') ADVANCE(3497);
      END_STATE();
    case 3391:
      if (lookahead == 'i') ADVANCE(3498);
      END_STATE();
    case 3392:
      if (lookahead == 't') ADVANCE(3499);
      END_STATE();
    case 3393:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 3394:
      if (lookahead == 'i') ADVANCE(3500);
      END_STATE();
    case 3395:
      if (lookahead == 'g') ADVANCE(3501);
      END_STATE();
    case 3396:
      if (lookahead == 'f') ADVANCE(3502);
      END_STATE();
    case 3397:
      if (lookahead == 'P') ADVANCE(3503);
      END_STATE();
    case 3398:
      if (lookahead == 'E') ADVANCE(3504);
      END_STATE();
    case 3399:
      if (lookahead == 't') ADVANCE(3505);
      END_STATE();
    case 3400:
      if (lookahead == 'u') ADVANCE(3506);
      END_STATE();
    case 3401:
      if (lookahead == 'd') ADVANCE(3507);
      END_STATE();
    case 3402:
      if (lookahead == 'u') ADVANCE(3508);
      END_STATE();
    case 3403:
      if (lookahead == 'p') ADVANCE(3509);
      END_STATE();
    case 3404:
      if (lookahead == 'e') ADVANCE(3510);
      END_STATE();
    case 3405:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3406:
      if (lookahead == 't') ADVANCE(3511);
      END_STATE();
    case 3407:
      if (lookahead == 'p') ADVANCE(3512);
      END_STATE();
    case 3408:
      if (lookahead == 't') ADVANCE(3513);
      END_STATE();
    case 3409:
      if (lookahead == 'p') ADVANCE(3514);
      END_STATE();
    case 3410:
      if (lookahead == 't') ADVANCE(3515);
      END_STATE();
    case 3411:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3412:
      if (lookahead == 't') ADVANCE(3516);
      END_STATE();
    case 3413:
      if (lookahead == 'e') ADVANCE(3517);
      END_STATE();
    case 3414:
      if (lookahead == 'C') ADVANCE(3518);
      END_STATE();
    case 3415:
      if (lookahead == 's') ADVANCE(3519);
      END_STATE();
    case 3416:
      if (lookahead == 'g') ADVANCE(3520);
      END_STATE();
    case 3417:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 3418:
      if (lookahead == 'i') ADVANCE(3521);
      END_STATE();
    case 3419:
      if (lookahead == 'l') ADVANCE(3522);
      END_STATE();
    case 3420:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3421:
      if (lookahead == 'u') ADVANCE(3523);
      END_STATE();
    case 3422:
      if (lookahead == 'z') ADVANCE(3524);
      END_STATE();
    case 3423:
      if (lookahead == 'i') ADVANCE(3525);
      END_STATE();
    case 3424:
      if (lookahead == 'x') ADVANCE(3526);
      END_STATE();
    case 3425:
      if (lookahead == 'i') ADVANCE(3527);
      END_STATE();
    case 3426:
      if (lookahead == 'i') ADVANCE(3528);
      END_STATE();
    case 3427:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3428:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3429:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 3430:
      if (lookahead == 't') ADVANCE(3529);
      END_STATE();
    case 3431:
      if (lookahead == 'a') ADVANCE(3530);
      END_STATE();
    case 3432:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 3433:
      if (lookahead == 'i') ADVANCE(3531);
      END_STATE();
    case 3434:
      if (lookahead == 'a') ADVANCE(3532);
      END_STATE();
    case 3435:
      if (lookahead == 'I') ADVANCE(3533);
      END_STATE();
    case 3436:
      if (lookahead == 'a') ADVANCE(3534);
      END_STATE();
    case 3437:
      if (lookahead == 'r') ADVANCE(3535);
      END_STATE();
    case 3438:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 3439:
      if (lookahead == 'n') ADVANCE(3536);
      END_STATE();
    case 3440:
      if (lookahead == 'n') ADVANCE(3537);
      END_STATE();
    case 3441:
      if (lookahead == 'o') ADVANCE(3538);
      END_STATE();
    case 3442:
      if (lookahead == 'u') ADVANCE(3539);
      END_STATE();
    case 3443:
      if (lookahead == 'i') ADVANCE(3540);
      END_STATE();
    case 3444:
      if (lookahead == 'p') ADVANCE(3541);
      END_STATE();
    case 3445:
      if (lookahead == 'i') ADVANCE(3542);
      END_STATE();
    case 3446:
      if (lookahead == 'c') ADVANCE(3543);
      END_STATE();
    case 3447:
      if (lookahead == 'd') ADVANCE(3544);
      END_STATE();
    case 3448:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 3449:
      if (lookahead == 'f') ADVANCE(3545);
      END_STATE();
    case 3450:
      if (lookahead == 't') ADVANCE(3546);
      END_STATE();
    case 3451:
      if (lookahead == 'R') ADVANCE(3547);
      END_STATE();
    case 3452:
      if (lookahead == 'i') ADVANCE(3548);
      END_STATE();
    case 3453:
      if (lookahead == 'P') ADVANCE(3549);
      END_STATE();
    case 3454:
      if (lookahead == 'h') ADVANCE(3550);
      END_STATE();
    case 3455:
      if (lookahead == 'e') ADVANCE(3551);
      END_STATE();
    case 3456:
      if (lookahead == 'c') ADVANCE(3552);
      END_STATE();
    case 3457:
      if (lookahead == 'o') ADVANCE(3553);
      END_STATE();
    case 3458:
      if (lookahead == 'e') ADVANCE(3554);
      END_STATE();
    case 3459:
      if (lookahead == 'm') ADVANCE(3555);
      END_STATE();
    case 3460:
      if (lookahead == 'o') ADVANCE(3556);
      END_STATE();
    case 3461:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 3462:
      if (lookahead == 'i') ADVANCE(3557);
      END_STATE();
    case 3463:
      if (lookahead == 'n') ADVANCE(3558);
      END_STATE();
    case 3464:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3465:
      if (lookahead == 'n') ADVANCE(3559);
      END_STATE();
    case 3466:
      if (lookahead == 't') ADVANCE(3560);
      END_STATE();
    case 3467:
      if (lookahead == 'n') ADVANCE(3561);
      END_STATE();
    case 3468:
      if (lookahead == 'o') ADVANCE(3562);
      END_STATE();
    case 3469:
      if (lookahead == 'r') ADVANCE(3563);
      END_STATE();
    case 3470:
      if (lookahead == 't') ADVANCE(3564);
      END_STATE();
    case 3471:
      if (lookahead == 'y') ADVANCE(3565);
      END_STATE();
    case 3472:
      if (lookahead == 'l') ADVANCE(3566);
      END_STATE();
    case 3473:
      if (lookahead == 'l') ADVANCE(3567);
      END_STATE();
    case 3474:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3568);
      if (lookahead == 'O') ADVANCE(3569);
      END_STATE();
    case 3475:
      if (lookahead == 'x') ADVANCE(3570);
      END_STATE();
    case 3476:
      if (lookahead == 'p') ADVANCE(3571);
      END_STATE();
    case 3477:
      if (lookahead == 't') ADVANCE(3572);
      END_STATE();
    case 3478:
      if (lookahead == 't') ADVANCE(3573);
      END_STATE();
    case 3479:
      if (lookahead == 'u') ADVANCE(3574);
      END_STATE();
    case 3480:
      if (lookahead == 'p') ADVANCE(3575);
      END_STATE();
    case 3481:
      if (lookahead == 's') ADVANCE(3576);
      END_STATE();
    case 3482:
      if (lookahead == 'u') ADVANCE(3577);
      END_STATE();
    case 3483:
      if (lookahead == 'p') ADVANCE(3578);
      END_STATE();
    case 3484:
      if (lookahead == 'd') ADVANCE(3579);
      END_STATE();
    case 3485:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3486:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 3487:
      if (lookahead == 'c') ADVANCE(3580);
      END_STATE();
    case 3488:
      if (lookahead == 'x') ADVANCE(421);
      END_STATE();
    case 3489:
      if (lookahead == 'f') ADVANCE(3581);
      END_STATE();
    case 3490:
      if (lookahead == 't') ADVANCE(3582);
      END_STATE();
    case 3491:
      if (lookahead == 'p') ADVANCE(3583);
      END_STATE();
    case 3492:
      if (lookahead == 't') ADVANCE(3584);
      END_STATE();
    case 3493:
      if (lookahead == 't') ADVANCE(3585);
      END_STATE();
    case 3494:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3495:
      if (lookahead == 't') ADVANCE(3586);
      END_STATE();
    case 3496:
      if (lookahead == 'u') ADVANCE(3587);
      END_STATE();
    case 3497:
      if (lookahead == 'p') ADVANCE(3588);
      END_STATE();
    case 3498:
      if (lookahead == 't') ADVANCE(3589);
      END_STATE();
    case 3499:
      if (lookahead == 'i') ADVANCE(3590);
      END_STATE();
    case 3500:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3501:
      if (lookahead == 'C') ADVANCE(3591);
      END_STATE();
    case 3502:
      if (lookahead == 'i') ADVANCE(3592);
      END_STATE();
    case 3503:
      if (lookahead == 'o') ADVANCE(3593);
      END_STATE();
    case 3504:
      if (lookahead == 'f') ADVANCE(3594);
      END_STATE();
    case 3505:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3506:
      if (lookahead == 't') ADVANCE(3595);
      END_STATE();
    case 3507:
      if (lookahead == 'e') ADVANCE(3596);
      END_STATE();
    case 3508:
      if (lookahead == 't') ADVANCE(3597);
      END_STATE();
    case 3509:
      if (lookahead == 'u') ADVANCE(3598);
      END_STATE();
    case 3510:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(3599);
      if (lookahead == 'O') ADVANCE(3600);
      END_STATE();
    case 3511:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3512:
      if (lookahead == 'u') ADVANCE(3601);
      END_STATE();
    case 3513:
      if (lookahead == 'p') ADVANCE(3602);
      END_STATE();
    case 3514:
      if (lookahead == 'u') ADVANCE(3603);
      END_STATE();
    case 3515:
      if (lookahead == 'p') ADVANCE(3604);
      END_STATE();
    case 3516:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3517:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 3518:
      if (lookahead == 'h') ADVANCE(3605);
      END_STATE();
    case 3519:
      if (lookahead == 'i') ADVANCE(3606);
      END_STATE();
    case 3520:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3521:
      if (lookahead == 'c') ADVANCE(3607);
      END_STATE();
    case 3522:
      if (lookahead == 'E') ADVANCE(3608);
      END_STATE();
    case 3523:
      if (lookahead == 'l') ADVANCE(3609);
      END_STATE();
    case 3524:
      if (lookahead == 'o') ADVANCE(3610);
      END_STATE();
    case 3525:
      if (lookahead == 'c') ADVANCE(3611);
      END_STATE();
    case 3526:
      if (lookahead == 'i') ADVANCE(3612);
      END_STATE();
    case 3527:
      if (lookahead == 'd') ADVANCE(3613);
      END_STATE();
    case 3528:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 3529:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3530:
      if (lookahead == 's') ADVANCE(3614);
      END_STATE();
    case 3531:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 3532:
      if (lookahead == 's') ADVANCE(3615);
      END_STATE();
    case 3533:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3534:
      if (lookahead == 's') ADVANCE(3616);
      END_STATE();
    case 3535:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3536:
      if (lookahead == 'i') ADVANCE(3617);
      END_STATE();
    case 3537:
      if (lookahead == 't') ADVANCE(3618);
      END_STATE();
    case 3538:
      if (lookahead == 'd') ADVANCE(3619);
      END_STATE();
    case 3539:
      if (lookahead == 't') ADVANCE(3620);
      END_STATE();
    case 3540:
      if (lookahead == 't') ADVANCE(3621);
      END_STATE();
    case 3541:
      if (lookahead == 'u') ADVANCE(3622);
      END_STATE();
    case 3542:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 3543:
      if (lookahead == 'h') ADVANCE(3623);
      END_STATE();
    case 3544:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3545:
      if (lookahead == 'i') ADVANCE(3624);
      END_STATE();
    case 3546:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3547:
      if (lookahead == 'u') ADVANCE(3625);
      END_STATE();
    case 3548:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 3549:
      if (lookahead == 'r') ADVANCE(3626);
      END_STATE();
    case 3550:
      if (lookahead == 'R') ADVANCE(3627);
      END_STATE();
    case 3551:
      if (lookahead == 'u') ADVANCE(3628);
      END_STATE();
    case 3552:
      if (lookahead == 'i') ADVANCE(3629);
      END_STATE();
    case 3553:
      if (lookahead == 'C') ADVANCE(3630);
      END_STATE();
    case 3554:
      if (lookahead == 'n') ADVANCE(3631);
      END_STATE();
    case 3555:
      if (lookahead == 'p') ADVANCE(3632);
      END_STATE();
    case 3556:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 3557:
      if (lookahead == 'e') ADVANCE(3633);
      END_STATE();
    case 3558:
      if (lookahead == 'a') ADVANCE(3634);
      END_STATE();
    case 3559:
      if (lookahead == 'a') ADVANCE(3635);
      END_STATE();
    case 3560:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3561:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 3562:
      if (lookahead == 'x') ADVANCE(3636);
      END_STATE();
    case 3563:
      if (lookahead == 'b') ADVANCE(3637);
      END_STATE();
    case 3564:
      if (lookahead == 'r') ADVANCE(3638);
      END_STATE();
    case 3565:
      if (lookahead == 'g') ADVANCE(3639);
      END_STATE();
    case 3566:
      if (lookahead == 'l') ADVANCE(3640);
      END_STATE();
    case 3567:
      if (lookahead == 'a') ADVANCE(3641);
      END_STATE();
    case 3568:
      if (lookahead == 'n') ADVANCE(3642);
      END_STATE();
    case 3569:
      if (lookahead == 'u') ADVANCE(3643);
      END_STATE();
    case 3570:
      if (lookahead == 'i') ADVANCE(3644);
      END_STATE();
    case 3571:
      if (lookahead == 'u') ADVANCE(3645);
      END_STATE();
    case 3572:
      if (lookahead == 'p') ADVANCE(3646);
      END_STATE();
    case 3573:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3647);
      if (lookahead == 'O') ADVANCE(3648);
      END_STATE();
    case 3574:
      if (lookahead == 't') ADVANCE(3649);
      END_STATE();
    case 3575:
      if (lookahead == 'u') ADVANCE(3650);
      END_STATE();
    case 3576:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3651);
      if (lookahead == 'O') ADVANCE(3652);
      END_STATE();
    case 3577:
      if (lookahead == 't') ADVANCE(3653);
      END_STATE();
    case 3578:
      if (lookahead == 'u') ADVANCE(3654);
      END_STATE();
    case 3579:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3580:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3581:
      if (lookahead == 'f') ADVANCE(3655);
      END_STATE();
    case 3582:
      if (lookahead == 'e') ADVANCE(3656);
      END_STATE();
    case 3583:
      if (lookahead == 'u') ADVANCE(3657);
      END_STATE();
    case 3584:
      if (lookahead == 'p') ADVANCE(3658);
      END_STATE();
    case 3585:
      if (lookahead == 't') ADVANCE(3659);
      END_STATE();
    case 3586:
      if (lookahead == 'i') ADVANCE(3660);
      END_STATE();
    case 3587:
      if (lookahead == 't') ADVANCE(3661);
      END_STATE();
    case 3588:
      if (lookahead == 'u') ADVANCE(3662);
      END_STATE();
    case 3589:
      if (lookahead == 'u') ADVANCE(3663);
      END_STATE();
    case 3590:
      if (lookahead == 'v') ADVANCE(3664);
      END_STATE();
    case 3591:
      if (lookahead == 'o') ADVANCE(3665);
      END_STATE();
    case 3592:
      if (lookahead == 'c') ADVANCE(3666);
      END_STATE();
    case 3593:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 3594:
      if (lookahead == 'f') ADVANCE(3667);
      END_STATE();
    case 3595:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3596:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(3668);
      if (lookahead == 'O') ADVANCE(3669);
      END_STATE();
    case 3597:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3598:
      if (lookahead == 't') ADVANCE(3670);
      END_STATE();
    case 3599:
      if (lookahead == 'n') ADVANCE(3671);
      END_STATE();
    case 3600:
      if (lookahead == 'u') ADVANCE(3672);
      END_STATE();
    case 3601:
      if (lookahead == 't') ADVANCE(3673);
      END_STATE();
    case 3602:
      if (lookahead == 'u') ADVANCE(3674);
      END_STATE();
    case 3603:
      if (lookahead == 't') ADVANCE(3675);
      END_STATE();
    case 3604:
      if (lookahead == 'u') ADVANCE(3676);
      END_STATE();
    case 3605:
      if (lookahead == 'i') ADVANCE(3677);
      END_STATE();
    case 3606:
      if (lookahead == 'n') ADVANCE(3678);
      END_STATE();
    case 3607:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 3608:
      if (lookahead == 'f') ADVANCE(3679);
      END_STATE();
    case 3609:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3610:
      if (lookahead == 'n') ADVANCE(3680);
      END_STATE();
    case 3611:
      if (lookahead == 'a') ADVANCE(3681);
      END_STATE();
    case 3612:
      if (lookahead == 'd') ADVANCE(3682);
      END_STATE();
    case 3613:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3614:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 3615:
      if (lookahead == 't') ADVANCE(3683);
      END_STATE();
    case 3616:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 3617:
      if (lookahead == 'n') ADVANCE(3684);
      END_STATE();
    case 3618:
      if (lookahead == 'H') ADVANCE(3685);
      END_STATE();
    case 3619:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 3620:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3621:
      if (lookahead == 'e') ADVANCE(3686);
      END_STATE();
    case 3622:
      if (lookahead == 't') ADVANCE(3687);
      END_STATE();
    case 3623:
      if (lookahead == 'P') ADVANCE(3688);
      END_STATE();
    case 3624:
      if (lookahead == 'c') ADVANCE(3689);
      END_STATE();
    case 3625:
      if (lookahead == 'l') ADVANCE(3690);
      END_STATE();
    case 3626:
      if (lookahead == 'o') ADVANCE(3691);
      END_STATE();
    case 3627:
      if (lookahead == 'e') ADVANCE(3692);
      END_STATE();
    case 3628:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3629:
      if (lookahead == 'n') ADVANCE(3693);
      END_STATE();
    case 3630:
      if (lookahead == 'o') ADVANCE(3694);
      END_STATE();
    case 3631:
      if (lookahead == 't') ADVANCE(3695);
      END_STATE();
    case 3632:
      if (lookahead == 'e') ADVANCE(3696);
      END_STATE();
    case 3633:
      if (lookahead == 'n') ADVANCE(3697);
      END_STATE();
    case 3634:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 3635:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 3636:
      if (lookahead == 'i') ADVANCE(3698);
      END_STATE();
    case 3637:
      if (lookahead == 'o') ADVANCE(3699);
      END_STATE();
    case 3638:
      if (lookahead == 'o') ADVANCE(3700);
      END_STATE();
    case 3639:
      if (lookahead == 'e') ADVANCE(3701);
      END_STATE();
    case 3640:
      if (lookahead == 'u') ADVANCE(3702);
      END_STATE();
    case 3641:
      if (lookahead == 't') ADVANCE(3703);
      END_STATE();
    case 3642:
      if (lookahead == 'p') ADVANCE(3704);
      END_STATE();
    case 3643:
      if (lookahead == 't') ADVANCE(3705);
      END_STATE();
    case 3644:
      if (lookahead == 'd') ADVANCE(3706);
      END_STATE();
    case 3645:
      if (lookahead == 't') ADVANCE(3707);
      END_STATE();
    case 3646:
      if (lookahead == 'u') ADVANCE(3708);
      END_STATE();
    case 3647:
      if (lookahead == 'n') ADVANCE(3709);
      END_STATE();
    case 3648:
      if (lookahead == 'u') ADVANCE(3710);
      END_STATE();
    case 3649:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3650:
      if (lookahead == 't') ADVANCE(3711);
      END_STATE();
    case 3651:
      if (lookahead == 'n') ADVANCE(3712);
      END_STATE();
    case 3652:
      if (lookahead == 'u') ADVANCE(3713);
      END_STATE();
    case 3653:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3654:
      if (lookahead == 't') ADVANCE(3714);
      END_STATE();
    case 3655:
      if (lookahead == 'e') ADVANCE(3715);
      END_STATE();
    case 3656:
      if (lookahead == 'r') ADVANCE(3716);
      END_STATE();
    case 3657:
      if (lookahead == 't') ADVANCE(3717);
      END_STATE();
    case 3658:
      if (lookahead == 'u') ADVANCE(3718);
      END_STATE();
    case 3659:
      if (lookahead == 'i') ADVANCE(3719);
      END_STATE();
    case 3660:
      if (lookahead == 'o') ADVANCE(3720);
      END_STATE();
    case 3661:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3662:
      if (lookahead == 't') ADVANCE(3721);
      END_STATE();
    case 3663:
      if (lookahead == 'd') ADVANCE(3722);
      END_STATE();
    case 3664:
      if (lookahead == 'e') ADVANCE(3723);
      END_STATE();
    case 3665:
      if (lookahead == 'n') ADVANCE(3724);
      END_STATE();
    case 3666:
      if (lookahead == 'i') ADVANCE(3725);
      END_STATE();
    case 3667:
      if (lookahead == 'i') ADVANCE(3726);
      END_STATE();
    case 3668:
      if (lookahead == 'n') ADVANCE(3727);
      END_STATE();
    case 3669:
      if (lookahead == 'u') ADVANCE(3728);
      END_STATE();
    case 3670:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3671:
      if (lookahead == 'p') ADVANCE(3729);
      END_STATE();
    case 3672:
      if (lookahead == 't') ADVANCE(3730);
      END_STATE();
    case 3673:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3674:
      if (lookahead == 't') ADVANCE(3731);
      END_STATE();
    case 3675:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3676:
      if (lookahead == 't') ADVANCE(3732);
      END_STATE();
    case 3677:
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 3678:
      if (lookahead == 'g') ADVANCE(3733);
      END_STATE();
    case 3679:
      if (lookahead == 'f') ADVANCE(3734);
      END_STATE();
    case 3680:
      if (lookahead == 't') ADVANCE(3735);
      END_STATE();
    case 3681:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 3682:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3683:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3684:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 3685:
      if (lookahead == 'a') ADVANCE(3736);
      END_STATE();
    case 3686:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 3687:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3688:
      if (lookahead == 'o') ADVANCE(3737);
      END_STATE();
    case 3689:
      if (lookahead == 'i') ADVANCE(3738);
      END_STATE();
    case 3690:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3691:
      if (lookahead == 'g') ADVANCE(3739);
      END_STATE();
    case 3692:
      if (lookahead == 'q') ADVANCE(3740);
      END_STATE();
    case 3693:
      if (lookahead == 'i') ADVANCE(3741);
      END_STATE();
    case 3694:
      if (lookahead == 'n') ADVANCE(3742);
      END_STATE();
    case 3695:
      if (lookahead == 'T') ADVANCE(3743);
      END_STATE();
    case 3696:
      if (lookahead == 'r') ADVANCE(3744);
      END_STATE();
    case 3697:
      if (lookahead == 'c') ADVANCE(3745);
      END_STATE();
    case 3698:
      if (lookahead == 'd') ADVANCE(3746);
      END_STATE();
    case 3699:
      if (lookahead == 'n') ADVANCE(3747);
      END_STATE();
    case 3700:
      if (lookahead == 'g') ADVANCE(3748);
      if (lookahead == 'u') ADVANCE(3749);
      END_STATE();
    case 3701:
      if (lookahead == 'n') ADVANCE(3750);
      END_STATE();
    case 3702:
      if (lookahead == 't') ADVANCE(3751);
      END_STATE();
    case 3703:
      if (lookahead == 'i') ADVANCE(3752);
      END_STATE();
    case 3704:
      if (lookahead == 'u') ADVANCE(3753);
      END_STATE();
    case 3705:
      if (lookahead == 'p') ADVANCE(3754);
      END_STATE();
    case 3706:
      if (lookahead == 'e') ADVANCE(3755);
      END_STATE();
    case 3707:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3708:
      if (lookahead == 't') ADVANCE(3756);
      END_STATE();
    case 3709:
      if (lookahead == 'p') ADVANCE(3757);
      END_STATE();
    case 3710:
      if (lookahead == 't') ADVANCE(3758);
      END_STATE();
    case 3711:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3712:
      if (lookahead == 'p') ADVANCE(3759);
      END_STATE();
    case 3713:
      if (lookahead == 't') ADVANCE(3760);
      END_STATE();
    case 3714:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3715:
      if (lookahead == 'r') ADVANCE(3761);
      END_STATE();
    case 3716:
      if (lookahead == 'n') ADVANCE(3762);
      END_STATE();
    case 3717:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3718:
      if (lookahead == 't') ADVANCE(3763);
      END_STATE();
    case 3719:
      if (lookahead == 'n') ADVANCE(3764);
      END_STATE();
    case 3720:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 3721:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3722:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3723:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(421);
      END_STATE();
    case 3724:
      if (lookahead == 't') ADVANCE(3765);
      END_STATE();
    case 3725:
      if (lookahead == 'e') ADVANCE(3766);
      END_STATE();
    case 3726:
      if (lookahead == 'c') ADVANCE(3767);
      END_STATE();
    case 3727:
      if (lookahead == 'p') ADVANCE(3768);
      END_STATE();
    case 3728:
      if (lookahead == 't') ADVANCE(3769);
      END_STATE();
    case 3729:
      if (lookahead == 'u') ADVANCE(3770);
      END_STATE();
    case 3730:
      if (lookahead == 'p') ADVANCE(3771);
      END_STATE();
    case 3731:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3732:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3733:
      if (lookahead == 'U') ADVANCE(3772);
      END_STATE();
    case 3734:
      if (lookahead == 'i') ADVANCE(3773);
      END_STATE();
    case 3735:
      if (lookahead == 'a') ADVANCE(3774);
      END_STATE();
    case 3736:
      if (lookahead == 's') ADVANCE(3775);
      END_STATE();
    case 3737:
      if (lookahead == 'd') ADVANCE(3776);
      END_STATE();
    case 3738:
      if (lookahead == 'e') ADVANCE(3777);
      END_STATE();
    case 3739:
      if (lookahead == 'r') ADVANCE(3778);
      END_STATE();
    case 3740:
      if (lookahead == 'u') ADVANCE(3779);
      END_STATE();
    case 3741:
      if (lookahead == 't') ADVANCE(3780);
      END_STATE();
    case 3742:
      if (lookahead == 't') ADVANCE(3781);
      END_STATE();
    case 3743:
      if (lookahead == 'i') ADVANCE(3782);
      END_STATE();
    case 3744:
      if (lookahead == 'a') ADVANCE(3783);
      END_STATE();
    case 3745:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3746:
      if (lookahead == 'e') ADVANCE(3784);
      END_STATE();
    case 3747:
      if (lookahead == 'D') ADVANCE(3785);
      END_STATE();
    case 3748:
      if (lookahead == 'e') ADVANCE(3786);
      END_STATE();
    case 3749:
      if (lookahead == 's') ADVANCE(3787);
      END_STATE();
    case 3750:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3788);
      if (lookahead == 'O') ADVANCE(3789);
      END_STATE();
    case 3751:
      if (lookahead == 'a') ADVANCE(3790);
      END_STATE();
    case 3752:
      if (lookahead == 'l') ADVANCE(3791);
      END_STATE();
    case 3753:
      if (lookahead == 't') ADVANCE(3792);
      END_STATE();
    case 3754:
      if (lookahead == 'u') ADVANCE(3793);
      END_STATE();
    case 3755:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3794);
      if (lookahead == 'O') ADVANCE(3795);
      END_STATE();
    case 3756:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3757:
      if (lookahead == 'u') ADVANCE(3796);
      END_STATE();
    case 3758:
      if (lookahead == 'p') ADVANCE(3797);
      END_STATE();
    case 3759:
      if (lookahead == 'u') ADVANCE(3798);
      END_STATE();
    case 3760:
      if (lookahead == 'p') ADVANCE(3799);
      END_STATE();
    case 3761:
      if (lookahead == 'e') ADVANCE(3800);
      END_STATE();
    case 3762:
      if (lookahead == 'a') ADVANCE(3801);
      END_STATE();
    case 3763:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3764:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 3765:
      if (lookahead == 'a') ADVANCE(3802);
      END_STATE();
    case 3766:
      if (lookahead == 'n') ADVANCE(3803);
      END_STATE();
    case 3767:
      if (lookahead == 'i') ADVANCE(3804);
      END_STATE();
    case 3768:
      if (lookahead == 'u') ADVANCE(3805);
      END_STATE();
    case 3769:
      if (lookahead == 'p') ADVANCE(3806);
      END_STATE();
    case 3770:
      if (lookahead == 't') ADVANCE(3807);
      END_STATE();
    case 3771:
      if (lookahead == 'u') ADVANCE(3808);
      END_STATE();
    case 3772:
      if (lookahead == 'n') ADVANCE(3809);
      END_STATE();
    case 3773:
      if (lookahead == 'c') ADVANCE(3810);
      END_STATE();
    case 3774:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 3775:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 3776:
      if (lookahead == 'T') ADVANCE(3811);
      END_STATE();
    case 3777:
      if (lookahead == 'n') ADVANCE(3812);
      END_STATE();
    case 3778:
      if (lookahead == 'e') ADVANCE(3813);
      END_STATE();
    case 3779:
      if (lookahead == 'i') ADVANCE(3814);
      END_STATE();
    case 3780:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3781:
      if (lookahead == 'a') ADVANCE(3815);
      END_STATE();
    case 3782:
      if (lookahead == 'm') ADVANCE(3816);
      END_STATE();
    case 3783:
      if (lookahead == 't') ADVANCE(3817);
      END_STATE();
    case 3784:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3818);
      if (lookahead == 'O') ADVANCE(3819);
      END_STATE();
    case 3785:
      if (lookahead == 'i') ADVANCE(3820);
      END_STATE();
    case 3786:
      if (lookahead == 'n') ADVANCE(3821);
      END_STATE();
    case 3787:
      if (lookahead == 'O') ADVANCE(3822);
      END_STATE();
    case 3788:
      if (lookahead == 'n') ADVANCE(3823);
      END_STATE();
    case 3789:
      if (lookahead == 'u') ADVANCE(3824);
      END_STATE();
    case 3790:
      if (lookahead == 'n') ADVANCE(3825);
      END_STATE();
    case 3791:
      if (lookahead == 'e') ADVANCE(3826);
      END_STATE();
    case 3792:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3793:
      if (lookahead == 't') ADVANCE(3827);
      END_STATE();
    case 3794:
      if (lookahead == 'n') ADVANCE(3828);
      END_STATE();
    case 3795:
      if (lookahead == 'u') ADVANCE(3829);
      END_STATE();
    case 3796:
      if (lookahead == 't') ADVANCE(3830);
      END_STATE();
    case 3797:
      if (lookahead == 'u') ADVANCE(3831);
      END_STATE();
    case 3798:
      if (lookahead == 't') ADVANCE(3832);
      END_STATE();
    case 3799:
      if (lookahead == 'u') ADVANCE(3833);
      END_STATE();
    case 3800:
      if (lookahead == 'n') ADVANCE(3834);
      END_STATE();
    case 3801:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 3802:
      if (lookahead == 'c') ADVANCE(3835);
      END_STATE();
    case 3803:
      if (lookahead == 'c') ADVANCE(3836);
      END_STATE();
    case 3804:
      if (lookahead == 'e') ADVANCE(3837);
      END_STATE();
    case 3805:
      if (lookahead == 't') ADVANCE(3838);
      END_STATE();
    case 3806:
      if (lookahead == 'u') ADVANCE(3839);
      END_STATE();
    case 3807:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3808:
      if (lookahead == 't') ADVANCE(3840);
      END_STATE();
    case 3809:
      if (lookahead == 'i') ADVANCE(3841);
      END_STATE();
    case 3810:
      if (lookahead == 'i') ADVANCE(3842);
      END_STATE();
    case 3811:
      if (lookahead == 'y') ADVANCE(3843);
      END_STATE();
    case 3812:
      if (lookahead == 'c') ADVANCE(3844);
      END_STATE();
    case 3813:
      if (lookahead == 's') ADVANCE(3845);
      END_STATE();
    case 3814:
      if (lookahead == 'r') ADVANCE(3846);
      END_STATE();
    case 3815:
      if (lookahead == 'c') ADVANCE(3847);
      END_STATE();
    case 3816:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3817:
      if (lookahead == 'u') ADVANCE(3848);
      END_STATE();
    case 3818:
      if (lookahead == 'n') ADVANCE(3849);
      END_STATE();
    case 3819:
      if (lookahead == 'u') ADVANCE(3850);
      END_STATE();
    case 3820:
      if (lookahead == 'o') ADVANCE(3851);
      END_STATE();
    case 3821:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3852);
      if (lookahead == 'O') ADVANCE(3853);
      END_STATE();
    case 3822:
      if (lookahead == 'x') ADVANCE(3854);
      END_STATE();
    case 3823:
      if (lookahead == 'p') ADVANCE(3855);
      END_STATE();
    case 3824:
      if (lookahead == 't') ADVANCE(3856);
      END_STATE();
    case 3825:
      if (lookahead == 't') ADVANCE(3857);
      END_STATE();
    case 3826:
      if (lookahead == 's') ADVANCE(3858);
      END_STATE();
    case 3827:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3828:
      if (lookahead == 'p') ADVANCE(3859);
      END_STATE();
    case 3829:
      if (lookahead == 't') ADVANCE(3860);
      END_STATE();
    case 3830:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3831:
      if (lookahead == 't') ADVANCE(3861);
      END_STATE();
    case 3832:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3833:
      if (lookahead == 't') ADVANCE(3862);
      END_STATE();
    case 3834:
      if (lookahead == 't') ADVANCE(3863);
      END_STATE();
    case 3835:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3836:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3837:
      if (lookahead == 'n') ADVANCE(3864);
      END_STATE();
    case 3838:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3839:
      if (lookahead == 't') ADVANCE(3865);
      END_STATE();
    case 3840:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3841:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3842:
      if (lookahead == 'e') ADVANCE(3866);
      END_STATE();
    case 3843:
      if (lookahead == 'p') ADVANCE(3867);
      END_STATE();
    case 3844:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3845:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 3846:
      if (lookahead == 'e') ADVANCE(3868);
      END_STATE();
    case 3847:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 3848:
      if (lookahead == 'r') ADVANCE(3869);
      END_STATE();
    case 3849:
      if (lookahead == 'p') ADVANCE(3870);
      END_STATE();
    case 3850:
      if (lookahead == 't') ADVANCE(3871);
      END_STATE();
    case 3851:
      if (lookahead == 'x') ADVANCE(3872);
      END_STATE();
    case 3852:
      if (lookahead == 'n') ADVANCE(3873);
      END_STATE();
    case 3853:
      if (lookahead == 'u') ADVANCE(3874);
      END_STATE();
    case 3854:
      if (lookahead == 'i') ADVANCE(3875);
      END_STATE();
    case 3855:
      if (lookahead == 'u') ADVANCE(3876);
      END_STATE();
    case 3856:
      if (lookahead == 'p') ADVANCE(3877);
      END_STATE();
    case 3857:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3878);
      if (lookahead == 'O') ADVANCE(3879);
      END_STATE();
    case 3858:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3880);
      if (lookahead == 'O') ADVANCE(3881);
      END_STATE();
    case 3859:
      if (lookahead == 'u') ADVANCE(3882);
      END_STATE();
    case 3860:
      if (lookahead == 'p') ADVANCE(3883);
      END_STATE();
    case 3861:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3862:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3863:
      if (lookahead == 'i') ADVANCE(3884);
      END_STATE();
    case 3864:
      if (lookahead == 'c') ADVANCE(3885);
      END_STATE();
    case 3865:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 3866:
      if (lookahead == 'n') ADVANCE(3886);
      END_STATE();
    case 3867:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 3868:
      if (lookahead == 'd') ADVANCE(3887);
      END_STATE();
    case 3869:
      if (lookahead == 'e') ADVANCE(3888);
      END_STATE();
    case 3870:
      if (lookahead == 'u') ADVANCE(3889);
      END_STATE();
    case 3871:
      if (lookahead == 'p') ADVANCE(3890);
      END_STATE();
    case 3872:
      if (lookahead == 'i') ADVANCE(3891);
      END_STATE();
    case 3873:
      if (lookahead == 'p') ADVANCE(3892);
      END_STATE();
    case 3874:
      if (lookahead == 't') ADVANCE(3893);
      END_STATE();
    case 3875:
      if (lookahead == 'd') ADVANCE(3894);
      END_STATE();
    case 3876:
      if (lookahead == 't') ADVANCE(3895);
      END_STATE();
    case 3877:
      if (lookahead == 'u') ADVANCE(3896);
      END_STATE();
    case 3878:
      if (lookahead == 'n') ADVANCE(3897);
      END_STATE();
    case 3879:
      if (lookahead == 'u') ADVANCE(3898);
      END_STATE();
    case 3880:
      if (lookahead == 'n') ADVANCE(3899);
      END_STATE();
    case 3881:
      if (lookahead == 'u') ADVANCE(3900);
      END_STATE();
    case 3882:
      if (lookahead == 't') ADVANCE(3901);
      END_STATE();
    case 3883:
      if (lookahead == 'u') ADVANCE(3902);
      END_STATE();
    case 3884:
      if (lookahead == 'a') ADVANCE(3903);
      END_STATE();
    case 3885:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 3886:
      if (lookahead == 'c') ADVANCE(3904);
      END_STATE();
    case 3887:
      if (lookahead == 'P') ADVANCE(3905);
      END_STATE();
    case 3888:
      if (lookahead == 'E') ADVANCE(3906);
      END_STATE();
    case 3889:
      if (lookahead == 't') ADVANCE(3907);
      END_STATE();
    case 3890:
      if (lookahead == 'u') ADVANCE(3908);
      END_STATE();
    case 3891:
      if (lookahead == 'd') ADVANCE(3909);
      END_STATE();
    case 3892:
      if (lookahead == 'u') ADVANCE(3910);
      END_STATE();
    case 3893:
      if (lookahead == 'p') ADVANCE(3911);
      END_STATE();
    case 3894:
      if (lookahead == 'e') ADVANCE(3912);
      END_STATE();
    case 3895:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3896:
      if (lookahead == 't') ADVANCE(3913);
      END_STATE();
    case 3897:
      if (lookahead == 'p') ADVANCE(3914);
      END_STATE();
    case 3898:
      if (lookahead == 't') ADVANCE(3915);
      END_STATE();
    case 3899:
      if (lookahead == 'p') ADVANCE(3916);
      END_STATE();
    case 3900:
      if (lookahead == 't') ADVANCE(3917);
      END_STATE();
    case 3901:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3902:
      if (lookahead == 't') ADVANCE(3918);
      END_STATE();
    case 3903:
      if (lookahead == 'l') ADVANCE(3919);
      END_STATE();
    case 3904:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 3905:
      if (lookahead == 'o') ADVANCE(3920);
      END_STATE();
    case 3906:
      if (lookahead == 'f') ADVANCE(3921);
      END_STATE();
    case 3907:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3908:
      if (lookahead == 't') ADVANCE(3922);
      END_STATE();
    case 3909:
      if (lookahead == 'e') ADVANCE(3923);
      END_STATE();
    case 3910:
      if (lookahead == 't') ADVANCE(3924);
      END_STATE();
    case 3911:
      if (lookahead == 'u') ADVANCE(3925);
      END_STATE();
    case 3912:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3926);
      if (lookahead == 'O') ADVANCE(3927);
      END_STATE();
    case 3913:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3914:
      if (lookahead == 'u') ADVANCE(3928);
      END_STATE();
    case 3915:
      if (lookahead == 'p') ADVANCE(3929);
      END_STATE();
    case 3916:
      if (lookahead == 'u') ADVANCE(3930);
      END_STATE();
    case 3917:
      if (lookahead == 'p') ADVANCE(3931);
      END_STATE();
    case 3918:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3919:
      if (lookahead == 'E') ADVANCE(3932);
      END_STATE();
    case 3920:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 3921:
      if (lookahead == 'f') ADVANCE(3933);
      END_STATE();
    case 3922:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3923:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'I') ADVANCE(3934);
      if (lookahead == 'O') ADVANCE(3935);
      END_STATE();
    case 3924:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3925:
      if (lookahead == 't') ADVANCE(3936);
      END_STATE();
    case 3926:
      if (lookahead == 'n') ADVANCE(3937);
      END_STATE();
    case 3927:
      if (lookahead == 'u') ADVANCE(3938);
      END_STATE();
    case 3928:
      if (lookahead == 't') ADVANCE(3939);
      END_STATE();
    case 3929:
      if (lookahead == 'u') ADVANCE(3940);
      END_STATE();
    case 3930:
      if (lookahead == 't') ADVANCE(3941);
      END_STATE();
    case 3931:
      if (lookahead == 'u') ADVANCE(3942);
      END_STATE();
    case 3932:
      if (lookahead == 'f') ADVANCE(3943);
      END_STATE();
    case 3933:
      if (lookahead == 'i') ADVANCE(3944);
      END_STATE();
    case 3934:
      if (lookahead == 'n') ADVANCE(3945);
      END_STATE();
    case 3935:
      if (lookahead == 'u') ADVANCE(3946);
      END_STATE();
    case 3936:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3937:
      if (lookahead == 'p') ADVANCE(3947);
      END_STATE();
    case 3938:
      if (lookahead == 't') ADVANCE(3948);
      END_STATE();
    case 3939:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3940:
      if (lookahead == 't') ADVANCE(3949);
      END_STATE();
    case 3941:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3942:
      if (lookahead == 't') ADVANCE(3950);
      END_STATE();
    case 3943:
      if (lookahead == 'f') ADVANCE(3951);
      END_STATE();
    case 3944:
      if (lookahead == 'c') ADVANCE(3952);
      END_STATE();
    case 3945:
      if (lookahead == 'p') ADVANCE(3953);
      END_STATE();
    case 3946:
      if (lookahead == 't') ADVANCE(3954);
      END_STATE();
    case 3947:
      if (lookahead == 'u') ADVANCE(3955);
      END_STATE();
    case 3948:
      if (lookahead == 'p') ADVANCE(3956);
      END_STATE();
    case 3949:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3950:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3951:
      if (lookahead == 'i') ADVANCE(3957);
      END_STATE();
    case 3952:
      if (lookahead == 'i') ADVANCE(3958);
      END_STATE();
    case 3953:
      if (lookahead == 'u') ADVANCE(3959);
      END_STATE();
    case 3954:
      if (lookahead == 'p') ADVANCE(3960);
      END_STATE();
    case 3955:
      if (lookahead == 't') ADVANCE(3961);
      END_STATE();
    case 3956:
      if (lookahead == 'u') ADVANCE(3962);
      END_STATE();
    case 3957:
      if (lookahead == 'c') ADVANCE(3963);
      END_STATE();
    case 3958:
      if (lookahead == 'e') ADVANCE(3964);
      END_STATE();
    case 3959:
      if (lookahead == 't') ADVANCE(3965);
      END_STATE();
    case 3960:
      if (lookahead == 'u') ADVANCE(3966);
      END_STATE();
    case 3961:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3962:
      if (lookahead == 't') ADVANCE(3967);
      END_STATE();
    case 3963:
      if (lookahead == 'i') ADVANCE(3968);
      END_STATE();
    case 3964:
      if (lookahead == 'n') ADVANCE(3969);
      END_STATE();
    case 3965:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3966:
      if (lookahead == 't') ADVANCE(3970);
      END_STATE();
    case 3967:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3968:
      if (lookahead == 'e') ADVANCE(3971);
      END_STATE();
    case 3969:
      if (lookahead == 'c') ADVANCE(3972);
      END_STATE();
    case 3970:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == '2') ADVANCE(421);
      END_STATE();
    case 3971:
      if (lookahead == 'n') ADVANCE(3973);
      END_STATE();
    case 3972:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 3973:
      if (lookahead == 'c') ADVANCE(3974);
      END_STATE();
    case 3974:
      if (lookahead == 'y') ADVANCE(421);
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
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 22},
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
    [sym_network_index] = ACTIONS(1),
    [sym_device] = ACTIONS(1),
    [anon_sym_nan] = ACTIONS(1),
    [anon_sym_pinf] = ACTIONS(1),
    [anon_sym_ninf] = ACTIONS(1),
    [anon_sym_pi] = ACTIONS(1),
    [anon_sym_deg2rad] = ACTIONS(1),
    [anon_sym_rad2deg] = ACTIONS(1),
    [anon_sym_epsilon] = ACTIONS(1),
    [anon_sym_HASH_LPAREN_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_RPAREN] = ACTIONS(1),
    [anon_sym_abs] = ACTIONS(1),
    [anon_sym_acos] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_asin] = ACTIONS(1),
    [anon_sym_atan] = ACTIONS(1),
    [anon_sym_atan2] = ACTIONS(1),
    [anon_sym_bap] = ACTIONS(1),
    [anon_sym_bapal] = ACTIONS(1),
    [anon_sym_bapz] = ACTIONS(1),
    [anon_sym_bapzal] = ACTIONS(1),
    [anon_sym_bdns] = ACTIONS(1),
    [anon_sym_bdnsal] = ACTIONS(1),
    [anon_sym_bdse] = ACTIONS(1),
    [anon_sym_bdseal] = ACTIONS(1),
    [anon_sym_beq] = ACTIONS(1),
    [anon_sym_beqal] = ACTIONS(1),
    [anon_sym_beqz] = ACTIONS(1),
    [anon_sym_beqzal] = ACTIONS(1),
    [anon_sym_bge] = ACTIONS(1),
    [anon_sym_bgeal] = ACTIONS(1),
    [anon_sym_bgez] = ACTIONS(1),
    [anon_sym_bgezal] = ACTIONS(1),
    [anon_sym_bgt] = ACTIONS(1),
    [anon_sym_bgtal] = ACTIONS(1),
    [anon_sym_bgtz] = ACTIONS(1),
    [anon_sym_bgtzal] = ACTIONS(1),
    [anon_sym_ble] = ACTIONS(1),
    [anon_sym_bleal] = ACTIONS(1),
    [anon_sym_blez] = ACTIONS(1),
    [anon_sym_blezal] = ACTIONS(1),
    [anon_sym_blt] = ACTIONS(1),
    [anon_sym_bltal] = ACTIONS(1),
    [anon_sym_bltz] = ACTIONS(1),
    [anon_sym_bltzal] = ACTIONS(1),
    [anon_sym_bna] = ACTIONS(1),
    [anon_sym_bnaal] = ACTIONS(1),
    [anon_sym_bnan] = ACTIONS(1),
    [anon_sym_bnaz] = ACTIONS(1),
    [anon_sym_bnazal] = ACTIONS(1),
    [anon_sym_bne] = ACTIONS(1),
    [anon_sym_bneal] = ACTIONS(1),
    [anon_sym_bnez] = ACTIONS(1),
    [anon_sym_bnezal] = ACTIONS(1),
    [anon_sym_brap] = ACTIONS(1),
    [anon_sym_brapz] = ACTIONS(1),
    [anon_sym_brdns] = ACTIONS(1),
    [anon_sym_brdse] = ACTIONS(1),
    [anon_sym_breq] = ACTIONS(1),
    [anon_sym_breqz] = ACTIONS(1),
    [anon_sym_brge] = ACTIONS(1),
    [anon_sym_brgez] = ACTIONS(1),
    [anon_sym_brgt] = ACTIONS(1),
    [anon_sym_brgtz] = ACTIONS(1),
    [anon_sym_brle] = ACTIONS(1),
    [anon_sym_brlez] = ACTIONS(1),
    [anon_sym_brlt] = ACTIONS(1),
    [anon_sym_brltz] = ACTIONS(1),
    [anon_sym_brna] = ACTIONS(1),
    [anon_sym_brnan] = ACTIONS(1),
    [anon_sym_brnaz] = ACTIONS(1),
    [anon_sym_brne] = ACTIONS(1),
    [anon_sym_brnez] = ACTIONS(1),
    [anon_sym_ceil] = ACTIONS(1),
    [anon_sym_cos] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_exp] = ACTIONS(1),
    [anon_sym_floor] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_getd] = ACTIONS(1),
    [anon_sym_hcf] = ACTIONS(1),
    [anon_sym_j] = ACTIONS(1),
    [anon_sym_jal] = ACTIONS(1),
    [anon_sym_jr] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_lb] = ACTIONS(1),
    [anon_sym_lbn] = ACTIONS(1),
    [anon_sym_lbns] = ACTIONS(1),
    [anon_sym_lbs] = ACTIONS(1),
    [anon_sym_ld] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [anon_sym_lr] = ACTIONS(1),
    [anon_sym_ls] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_nor] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_peek] = ACTIONS(1),
    [anon_sym_poke] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_putd] = ACTIONS(1),
    [anon_sym_rand] = ACTIONS(1),
    [anon_sym_round] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_sap] = ACTIONS(1),
    [anon_sym_sapz] = ACTIONS(1),
    [anon_sym_sb] = ACTIONS(1),
    [anon_sym_sbn] = ACTIONS(1),
    [anon_sym_sbs] = ACTIONS(1),
    [anon_sym_sd] = ACTIONS(1),
    [anon_sym_sdns] = ACTIONS(1),
    [anon_sym_sdse] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_seqz] = ACTIONS(1),
    [anon_sym_sge] = ACTIONS(1),
    [anon_sym_sgez] = ACTIONS(1),
    [anon_sym_sgt] = ACTIONS(1),
    [anon_sym_sgtz] = ACTIONS(1),
    [anon_sym_sin] = ACTIONS(1),
    [anon_sym_sla] = ACTIONS(1),
    [anon_sym_sle] = ACTIONS(1),
    [anon_sym_sleep] = ACTIONS(1),
    [anon_sym_slez] = ACTIONS(1),
    [anon_sym_sll] = ACTIONS(1),
    [anon_sym_slt] = ACTIONS(1),
    [anon_sym_sltz] = ACTIONS(1),
    [anon_sym_sna] = ACTIONS(1),
    [anon_sym_snan] = ACTIONS(1),
    [anon_sym_snanz] = ACTIONS(1),
    [anon_sym_snaz] = ACTIONS(1),
    [anon_sym_sne] = ACTIONS(1),
    [anon_sym_snez] = ACTIONS(1),
    [anon_sym_sqrt] = ACTIONS(1),
    [anon_sym_sra] = ACTIONS(1),
    [anon_sym_srl] = ACTIONS(1),
    [anon_sym_ss] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_tan] = ACTIONS(1),
    [anon_sym_trunc] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [sym_logictype] = ACTIONS(1),
    [sym_enum] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_line] = STATE(5),
    [sym_label] = STATE(22),
    [sym_newline] = STATE(6),
    [sym_comment] = STATE(23),
    [sym_instruction] = STATE(22),
    [sym_operation] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(13),
    [anon_sym_abs] = ACTIONS(15),
    [anon_sym_acos] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(15),
    [anon_sym_alias] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_asin] = ACTIONS(15),
    [anon_sym_atan] = ACTIONS(15),
    [anon_sym_atan2] = ACTIONS(15),
    [anon_sym_bap] = ACTIONS(15),
    [anon_sym_bapal] = ACTIONS(15),
    [anon_sym_bapz] = ACTIONS(15),
    [anon_sym_bapzal] = ACTIONS(15),
    [anon_sym_bdns] = ACTIONS(15),
    [anon_sym_bdnsal] = ACTIONS(15),
    [anon_sym_bdse] = ACTIONS(15),
    [anon_sym_bdseal] = ACTIONS(15),
    [anon_sym_beq] = ACTIONS(15),
    [anon_sym_beqal] = ACTIONS(15),
    [anon_sym_beqz] = ACTIONS(15),
    [anon_sym_beqzal] = ACTIONS(15),
    [anon_sym_bge] = ACTIONS(15),
    [anon_sym_bgeal] = ACTIONS(15),
    [anon_sym_bgez] = ACTIONS(15),
    [anon_sym_bgezal] = ACTIONS(15),
    [anon_sym_bgt] = ACTIONS(15),
    [anon_sym_bgtal] = ACTIONS(15),
    [anon_sym_bgtz] = ACTIONS(15),
    [anon_sym_bgtzal] = ACTIONS(15),
    [anon_sym_ble] = ACTIONS(15),
    [anon_sym_bleal] = ACTIONS(15),
    [anon_sym_blez] = ACTIONS(15),
    [anon_sym_blezal] = ACTIONS(15),
    [anon_sym_blt] = ACTIONS(15),
    [anon_sym_bltal] = ACTIONS(15),
    [anon_sym_bltz] = ACTIONS(15),
    [anon_sym_bltzal] = ACTIONS(15),
    [anon_sym_bna] = ACTIONS(15),
    [anon_sym_bnaal] = ACTIONS(15),
    [anon_sym_bnan] = ACTIONS(15),
    [anon_sym_bnaz] = ACTIONS(15),
    [anon_sym_bnazal] = ACTIONS(15),
    [anon_sym_bne] = ACTIONS(15),
    [anon_sym_bneal] = ACTIONS(15),
    [anon_sym_bnez] = ACTIONS(15),
    [anon_sym_bnezal] = ACTIONS(15),
    [anon_sym_brap] = ACTIONS(15),
    [anon_sym_brapz] = ACTIONS(15),
    [anon_sym_brdns] = ACTIONS(15),
    [anon_sym_brdse] = ACTIONS(15),
    [anon_sym_breq] = ACTIONS(15),
    [anon_sym_breqz] = ACTIONS(15),
    [anon_sym_brge] = ACTIONS(15),
    [anon_sym_brgez] = ACTIONS(15),
    [anon_sym_brgt] = ACTIONS(15),
    [anon_sym_brgtz] = ACTIONS(15),
    [anon_sym_brle] = ACTIONS(15),
    [anon_sym_brlez] = ACTIONS(15),
    [anon_sym_brlt] = ACTIONS(15),
    [anon_sym_brltz] = ACTIONS(15),
    [anon_sym_brna] = ACTIONS(15),
    [anon_sym_brnan] = ACTIONS(15),
    [anon_sym_brnaz] = ACTIONS(15),
    [anon_sym_brne] = ACTIONS(15),
    [anon_sym_brnez] = ACTIONS(15),
    [anon_sym_ceil] = ACTIONS(15),
    [anon_sym_cos] = ACTIONS(15),
    [anon_sym_define] = ACTIONS(15),
    [anon_sym_div] = ACTIONS(15),
    [anon_sym_exp] = ACTIONS(15),
    [anon_sym_floor] = ACTIONS(15),
    [anon_sym_get] = ACTIONS(15),
    [anon_sym_getd] = ACTIONS(15),
    [anon_sym_hcf] = ACTIONS(15),
    [anon_sym_j] = ACTIONS(15),
    [anon_sym_jal] = ACTIONS(15),
    [anon_sym_jr] = ACTIONS(15),
    [anon_sym_l] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_lb] = ACTIONS(15),
    [anon_sym_lbn] = ACTIONS(15),
    [anon_sym_lbns] = ACTIONS(15),
    [anon_sym_lbs] = ACTIONS(15),
    [anon_sym_ld] = ACTIONS(15),
    [anon_sym_log] = ACTIONS(15),
    [anon_sym_lr] = ACTIONS(15),
    [anon_sym_ls] = ACTIONS(15),
    [anon_sym_max] = ACTIONS(15),
    [anon_sym_min] = ACTIONS(15),
    [anon_sym_mod] = ACTIONS(15),
    [anon_sym_move] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_nor] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_peek] = ACTIONS(15),
    [anon_sym_poke] = ACTIONS(15),
    [anon_sym_pop] = ACTIONS(15),
    [anon_sym_push] = ACTIONS(15),
    [anon_sym_put] = ACTIONS(15),
    [anon_sym_putd] = ACTIONS(15),
    [anon_sym_rand] = ACTIONS(15),
    [anon_sym_round] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_sap] = ACTIONS(15),
    [anon_sym_sapz] = ACTIONS(15),
    [anon_sym_sb] = ACTIONS(15),
    [anon_sym_sbn] = ACTIONS(15),
    [anon_sym_sbs] = ACTIONS(15),
    [anon_sym_sd] = ACTIONS(15),
    [anon_sym_sdns] = ACTIONS(15),
    [anon_sym_sdse] = ACTIONS(15),
    [anon_sym_select] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_seqz] = ACTIONS(15),
    [anon_sym_sge] = ACTIONS(15),
    [anon_sym_sgez] = ACTIONS(15),
    [anon_sym_sgt] = ACTIONS(15),
    [anon_sym_sgtz] = ACTIONS(15),
    [anon_sym_sin] = ACTIONS(15),
    [anon_sym_sla] = ACTIONS(15),
    [anon_sym_sle] = ACTIONS(15),
    [anon_sym_sleep] = ACTIONS(15),
    [anon_sym_slez] = ACTIONS(15),
    [anon_sym_sll] = ACTIONS(15),
    [anon_sym_slt] = ACTIONS(15),
    [anon_sym_sltz] = ACTIONS(15),
    [anon_sym_sna] = ACTIONS(15),
    [anon_sym_snan] = ACTIONS(15),
    [anon_sym_snanz] = ACTIONS(15),
    [anon_sym_snaz] = ACTIONS(15),
    [anon_sym_sne] = ACTIONS(15),
    [anon_sym_snez] = ACTIONS(15),
    [anon_sym_sqrt] = ACTIONS(15),
    [anon_sym_sra] = ACTIONS(15),
    [anon_sym_srl] = ACTIONS(15),
    [anon_sym_ss] = ACTIONS(15),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_tan] = ACTIONS(15),
    [anon_sym_trunc] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_yield] = ACTIONS(15),
  },
  [2] = {
    [sym_line] = STATE(5),
    [sym_label] = STATE(22),
    [sym_newline] = STATE(6),
    [sym_comment] = STATE(23),
    [sym_instruction] = STATE(22),
    [sym_operation] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(13),
    [anon_sym_abs] = ACTIONS(15),
    [anon_sym_acos] = ACTIONS(15),
    [anon_sym_add] = ACTIONS(15),
    [anon_sym_alias] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_asin] = ACTIONS(15),
    [anon_sym_atan] = ACTIONS(15),
    [anon_sym_atan2] = ACTIONS(15),
    [anon_sym_bap] = ACTIONS(15),
    [anon_sym_bapal] = ACTIONS(15),
    [anon_sym_bapz] = ACTIONS(15),
    [anon_sym_bapzal] = ACTIONS(15),
    [anon_sym_bdns] = ACTIONS(15),
    [anon_sym_bdnsal] = ACTIONS(15),
    [anon_sym_bdse] = ACTIONS(15),
    [anon_sym_bdseal] = ACTIONS(15),
    [anon_sym_beq] = ACTIONS(15),
    [anon_sym_beqal] = ACTIONS(15),
    [anon_sym_beqz] = ACTIONS(15),
    [anon_sym_beqzal] = ACTIONS(15),
    [anon_sym_bge] = ACTIONS(15),
    [anon_sym_bgeal] = ACTIONS(15),
    [anon_sym_bgez] = ACTIONS(15),
    [anon_sym_bgezal] = ACTIONS(15),
    [anon_sym_bgt] = ACTIONS(15),
    [anon_sym_bgtal] = ACTIONS(15),
    [anon_sym_bgtz] = ACTIONS(15),
    [anon_sym_bgtzal] = ACTIONS(15),
    [anon_sym_ble] = ACTIONS(15),
    [anon_sym_bleal] = ACTIONS(15),
    [anon_sym_blez] = ACTIONS(15),
    [anon_sym_blezal] = ACTIONS(15),
    [anon_sym_blt] = ACTIONS(15),
    [anon_sym_bltal] = ACTIONS(15),
    [anon_sym_bltz] = ACTIONS(15),
    [anon_sym_bltzal] = ACTIONS(15),
    [anon_sym_bna] = ACTIONS(15),
    [anon_sym_bnaal] = ACTIONS(15),
    [anon_sym_bnan] = ACTIONS(15),
    [anon_sym_bnaz] = ACTIONS(15),
    [anon_sym_bnazal] = ACTIONS(15),
    [anon_sym_bne] = ACTIONS(15),
    [anon_sym_bneal] = ACTIONS(15),
    [anon_sym_bnez] = ACTIONS(15),
    [anon_sym_bnezal] = ACTIONS(15),
    [anon_sym_brap] = ACTIONS(15),
    [anon_sym_brapz] = ACTIONS(15),
    [anon_sym_brdns] = ACTIONS(15),
    [anon_sym_brdse] = ACTIONS(15),
    [anon_sym_breq] = ACTIONS(15),
    [anon_sym_breqz] = ACTIONS(15),
    [anon_sym_brge] = ACTIONS(15),
    [anon_sym_brgez] = ACTIONS(15),
    [anon_sym_brgt] = ACTIONS(15),
    [anon_sym_brgtz] = ACTIONS(15),
    [anon_sym_brle] = ACTIONS(15),
    [anon_sym_brlez] = ACTIONS(15),
    [anon_sym_brlt] = ACTIONS(15),
    [anon_sym_brltz] = ACTIONS(15),
    [anon_sym_brna] = ACTIONS(15),
    [anon_sym_brnan] = ACTIONS(15),
    [anon_sym_brnaz] = ACTIONS(15),
    [anon_sym_brne] = ACTIONS(15),
    [anon_sym_brnez] = ACTIONS(15),
    [anon_sym_ceil] = ACTIONS(15),
    [anon_sym_cos] = ACTIONS(15),
    [anon_sym_define] = ACTIONS(15),
    [anon_sym_div] = ACTIONS(15),
    [anon_sym_exp] = ACTIONS(15),
    [anon_sym_floor] = ACTIONS(15),
    [anon_sym_get] = ACTIONS(15),
    [anon_sym_getd] = ACTIONS(15),
    [anon_sym_hcf] = ACTIONS(15),
    [anon_sym_j] = ACTIONS(15),
    [anon_sym_jal] = ACTIONS(15),
    [anon_sym_jr] = ACTIONS(15),
    [anon_sym_l] = ACTIONS(15),
    [anon_sym_label] = ACTIONS(15),
    [anon_sym_lb] = ACTIONS(15),
    [anon_sym_lbn] = ACTIONS(15),
    [anon_sym_lbns] = ACTIONS(15),
    [anon_sym_lbs] = ACTIONS(15),
    [anon_sym_ld] = ACTIONS(15),
    [anon_sym_log] = ACTIONS(15),
    [anon_sym_lr] = ACTIONS(15),
    [anon_sym_ls] = ACTIONS(15),
    [anon_sym_max] = ACTIONS(15),
    [anon_sym_min] = ACTIONS(15),
    [anon_sym_mod] = ACTIONS(15),
    [anon_sym_move] = ACTIONS(15),
    [anon_sym_mul] = ACTIONS(15),
    [anon_sym_nor] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_peek] = ACTIONS(15),
    [anon_sym_poke] = ACTIONS(15),
    [anon_sym_pop] = ACTIONS(15),
    [anon_sym_push] = ACTIONS(15),
    [anon_sym_put] = ACTIONS(15),
    [anon_sym_putd] = ACTIONS(15),
    [anon_sym_rand] = ACTIONS(15),
    [anon_sym_round] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_sap] = ACTIONS(15),
    [anon_sym_sapz] = ACTIONS(15),
    [anon_sym_sb] = ACTIONS(15),
    [anon_sym_sbn] = ACTIONS(15),
    [anon_sym_sbs] = ACTIONS(15),
    [anon_sym_sd] = ACTIONS(15),
    [anon_sym_sdns] = ACTIONS(15),
    [anon_sym_sdse] = ACTIONS(15),
    [anon_sym_select] = ACTIONS(15),
    [anon_sym_seq] = ACTIONS(15),
    [anon_sym_seqz] = ACTIONS(15),
    [anon_sym_sge] = ACTIONS(15),
    [anon_sym_sgez] = ACTIONS(15),
    [anon_sym_sgt] = ACTIONS(15),
    [anon_sym_sgtz] = ACTIONS(15),
    [anon_sym_sin] = ACTIONS(15),
    [anon_sym_sla] = ACTIONS(15),
    [anon_sym_sle] = ACTIONS(15),
    [anon_sym_sleep] = ACTIONS(15),
    [anon_sym_slez] = ACTIONS(15),
    [anon_sym_sll] = ACTIONS(15),
    [anon_sym_slt] = ACTIONS(15),
    [anon_sym_sltz] = ACTIONS(15),
    [anon_sym_sna] = ACTIONS(15),
    [anon_sym_snan] = ACTIONS(15),
    [anon_sym_snanz] = ACTIONS(15),
    [anon_sym_snaz] = ACTIONS(15),
    [anon_sym_sne] = ACTIONS(15),
    [anon_sym_snez] = ACTIONS(15),
    [anon_sym_sqrt] = ACTIONS(15),
    [anon_sym_sra] = ACTIONS(15),
    [anon_sym_srl] = ACTIONS(15),
    [anon_sym_ss] = ACTIONS(15),
    [anon_sym_sub] = ACTIONS(15),
    [anon_sym_tan] = ACTIONS(15),
    [anon_sym_trunc] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_yield] = ACTIONS(15),
  },
  [3] = {
    [sym_line] = STATE(5),
    [sym_label] = STATE(22),
    [sym_newline] = STATE(6),
    [sym_comment] = STATE(23),
    [sym_instruction] = STATE(22),
    [sym_operation] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(24),
    [anon_sym_CR_LF] = ACTIONS(24),
    [anon_sym_CR] = ACTIONS(27),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(30),
    [anon_sym_abs] = ACTIONS(33),
    [anon_sym_acos] = ACTIONS(33),
    [anon_sym_add] = ACTIONS(33),
    [anon_sym_alias] = ACTIONS(33),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_asin] = ACTIONS(33),
    [anon_sym_atan] = ACTIONS(33),
    [anon_sym_atan2] = ACTIONS(33),
    [anon_sym_bap] = ACTIONS(33),
    [anon_sym_bapal] = ACTIONS(33),
    [anon_sym_bapz] = ACTIONS(33),
    [anon_sym_bapzal] = ACTIONS(33),
    [anon_sym_bdns] = ACTIONS(33),
    [anon_sym_bdnsal] = ACTIONS(33),
    [anon_sym_bdse] = ACTIONS(33),
    [anon_sym_bdseal] = ACTIONS(33),
    [anon_sym_beq] = ACTIONS(33),
    [anon_sym_beqal] = ACTIONS(33),
    [anon_sym_beqz] = ACTIONS(33),
    [anon_sym_beqzal] = ACTIONS(33),
    [anon_sym_bge] = ACTIONS(33),
    [anon_sym_bgeal] = ACTIONS(33),
    [anon_sym_bgez] = ACTIONS(33),
    [anon_sym_bgezal] = ACTIONS(33),
    [anon_sym_bgt] = ACTIONS(33),
    [anon_sym_bgtal] = ACTIONS(33),
    [anon_sym_bgtz] = ACTIONS(33),
    [anon_sym_bgtzal] = ACTIONS(33),
    [anon_sym_ble] = ACTIONS(33),
    [anon_sym_bleal] = ACTIONS(33),
    [anon_sym_blez] = ACTIONS(33),
    [anon_sym_blezal] = ACTIONS(33),
    [anon_sym_blt] = ACTIONS(33),
    [anon_sym_bltal] = ACTIONS(33),
    [anon_sym_bltz] = ACTIONS(33),
    [anon_sym_bltzal] = ACTIONS(33),
    [anon_sym_bna] = ACTIONS(33),
    [anon_sym_bnaal] = ACTIONS(33),
    [anon_sym_bnan] = ACTIONS(33),
    [anon_sym_bnaz] = ACTIONS(33),
    [anon_sym_bnazal] = ACTIONS(33),
    [anon_sym_bne] = ACTIONS(33),
    [anon_sym_bneal] = ACTIONS(33),
    [anon_sym_bnez] = ACTIONS(33),
    [anon_sym_bnezal] = ACTIONS(33),
    [anon_sym_brap] = ACTIONS(33),
    [anon_sym_brapz] = ACTIONS(33),
    [anon_sym_brdns] = ACTIONS(33),
    [anon_sym_brdse] = ACTIONS(33),
    [anon_sym_breq] = ACTIONS(33),
    [anon_sym_breqz] = ACTIONS(33),
    [anon_sym_brge] = ACTIONS(33),
    [anon_sym_brgez] = ACTIONS(33),
    [anon_sym_brgt] = ACTIONS(33),
    [anon_sym_brgtz] = ACTIONS(33),
    [anon_sym_brle] = ACTIONS(33),
    [anon_sym_brlez] = ACTIONS(33),
    [anon_sym_brlt] = ACTIONS(33),
    [anon_sym_brltz] = ACTIONS(33),
    [anon_sym_brna] = ACTIONS(33),
    [anon_sym_brnan] = ACTIONS(33),
    [anon_sym_brnaz] = ACTIONS(33),
    [anon_sym_brne] = ACTIONS(33),
    [anon_sym_brnez] = ACTIONS(33),
    [anon_sym_ceil] = ACTIONS(33),
    [anon_sym_cos] = ACTIONS(33),
    [anon_sym_define] = ACTIONS(33),
    [anon_sym_div] = ACTIONS(33),
    [anon_sym_exp] = ACTIONS(33),
    [anon_sym_floor] = ACTIONS(33),
    [anon_sym_get] = ACTIONS(33),
    [anon_sym_getd] = ACTIONS(33),
    [anon_sym_hcf] = ACTIONS(33),
    [anon_sym_j] = ACTIONS(33),
    [anon_sym_jal] = ACTIONS(33),
    [anon_sym_jr] = ACTIONS(33),
    [anon_sym_l] = ACTIONS(33),
    [anon_sym_label] = ACTIONS(33),
    [anon_sym_lb] = ACTIONS(33),
    [anon_sym_lbn] = ACTIONS(33),
    [anon_sym_lbns] = ACTIONS(33),
    [anon_sym_lbs] = ACTIONS(33),
    [anon_sym_ld] = ACTIONS(33),
    [anon_sym_log] = ACTIONS(33),
    [anon_sym_lr] = ACTIONS(33),
    [anon_sym_ls] = ACTIONS(33),
    [anon_sym_max] = ACTIONS(33),
    [anon_sym_min] = ACTIONS(33),
    [anon_sym_mod] = ACTIONS(33),
    [anon_sym_move] = ACTIONS(33),
    [anon_sym_mul] = ACTIONS(33),
    [anon_sym_nor] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_or] = ACTIONS(33),
    [anon_sym_peek] = ACTIONS(33),
    [anon_sym_poke] = ACTIONS(33),
    [anon_sym_pop] = ACTIONS(33),
    [anon_sym_push] = ACTIONS(33),
    [anon_sym_put] = ACTIONS(33),
    [anon_sym_putd] = ACTIONS(33),
    [anon_sym_rand] = ACTIONS(33),
    [anon_sym_round] = ACTIONS(33),
    [anon_sym_s] = ACTIONS(33),
    [anon_sym_sap] = ACTIONS(33),
    [anon_sym_sapz] = ACTIONS(33),
    [anon_sym_sb] = ACTIONS(33),
    [anon_sym_sbn] = ACTIONS(33),
    [anon_sym_sbs] = ACTIONS(33),
    [anon_sym_sd] = ACTIONS(33),
    [anon_sym_sdns] = ACTIONS(33),
    [anon_sym_sdse] = ACTIONS(33),
    [anon_sym_select] = ACTIONS(33),
    [anon_sym_seq] = ACTIONS(33),
    [anon_sym_seqz] = ACTIONS(33),
    [anon_sym_sge] = ACTIONS(33),
    [anon_sym_sgez] = ACTIONS(33),
    [anon_sym_sgt] = ACTIONS(33),
    [anon_sym_sgtz] = ACTIONS(33),
    [anon_sym_sin] = ACTIONS(33),
    [anon_sym_sla] = ACTIONS(33),
    [anon_sym_sle] = ACTIONS(33),
    [anon_sym_sleep] = ACTIONS(33),
    [anon_sym_slez] = ACTIONS(33),
    [anon_sym_sll] = ACTIONS(33),
    [anon_sym_slt] = ACTIONS(33),
    [anon_sym_sltz] = ACTIONS(33),
    [anon_sym_sna] = ACTIONS(33),
    [anon_sym_snan] = ACTIONS(33),
    [anon_sym_snanz] = ACTIONS(33),
    [anon_sym_snaz] = ACTIONS(33),
    [anon_sym_sne] = ACTIONS(33),
    [anon_sym_snez] = ACTIONS(33),
    [anon_sym_sqrt] = ACTIONS(33),
    [anon_sym_sra] = ACTIONS(33),
    [anon_sym_srl] = ACTIONS(33),
    [anon_sym_ss] = ACTIONS(33),
    [anon_sym_sub] = ACTIONS(33),
    [anon_sym_tan] = ACTIONS(33),
    [anon_sym_trunc] = ACTIONS(33),
    [anon_sym_xor] = ACTIONS(33),
    [anon_sym_yield] = ACTIONS(33),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_identifier] = ACTIONS(38),
    [anon_sym_LF] = ACTIONS(36),
    [anon_sym_CR_LF] = ACTIONS(36),
    [anon_sym_CR] = ACTIONS(38),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(36),
    [anon_sym_abs] = ACTIONS(38),
    [anon_sym_acos] = ACTIONS(38),
    [anon_sym_add] = ACTIONS(38),
    [anon_sym_alias] = ACTIONS(38),
    [anon_sym_and] = ACTIONS(38),
    [anon_sym_asin] = ACTIONS(38),
    [anon_sym_atan] = ACTIONS(38),
    [anon_sym_atan2] = ACTIONS(38),
    [anon_sym_bap] = ACTIONS(38),
    [anon_sym_bapal] = ACTIONS(38),
    [anon_sym_bapz] = ACTIONS(38),
    [anon_sym_bapzal] = ACTIONS(38),
    [anon_sym_bdns] = ACTIONS(38),
    [anon_sym_bdnsal] = ACTIONS(38),
    [anon_sym_bdse] = ACTIONS(38),
    [anon_sym_bdseal] = ACTIONS(38),
    [anon_sym_beq] = ACTIONS(38),
    [anon_sym_beqal] = ACTIONS(38),
    [anon_sym_beqz] = ACTIONS(38),
    [anon_sym_beqzal] = ACTIONS(38),
    [anon_sym_bge] = ACTIONS(38),
    [anon_sym_bgeal] = ACTIONS(38),
    [anon_sym_bgez] = ACTIONS(38),
    [anon_sym_bgezal] = ACTIONS(38),
    [anon_sym_bgt] = ACTIONS(38),
    [anon_sym_bgtal] = ACTIONS(38),
    [anon_sym_bgtz] = ACTIONS(38),
    [anon_sym_bgtzal] = ACTIONS(38),
    [anon_sym_ble] = ACTIONS(38),
    [anon_sym_bleal] = ACTIONS(38),
    [anon_sym_blez] = ACTIONS(38),
    [anon_sym_blezal] = ACTIONS(38),
    [anon_sym_blt] = ACTIONS(38),
    [anon_sym_bltal] = ACTIONS(38),
    [anon_sym_bltz] = ACTIONS(38),
    [anon_sym_bltzal] = ACTIONS(38),
    [anon_sym_bna] = ACTIONS(38),
    [anon_sym_bnaal] = ACTIONS(38),
    [anon_sym_bnan] = ACTIONS(38),
    [anon_sym_bnaz] = ACTIONS(38),
    [anon_sym_bnazal] = ACTIONS(38),
    [anon_sym_bne] = ACTIONS(38),
    [anon_sym_bneal] = ACTIONS(38),
    [anon_sym_bnez] = ACTIONS(38),
    [anon_sym_bnezal] = ACTIONS(38),
    [anon_sym_brap] = ACTIONS(38),
    [anon_sym_brapz] = ACTIONS(38),
    [anon_sym_brdns] = ACTIONS(38),
    [anon_sym_brdse] = ACTIONS(38),
    [anon_sym_breq] = ACTIONS(38),
    [anon_sym_breqz] = ACTIONS(38),
    [anon_sym_brge] = ACTIONS(38),
    [anon_sym_brgez] = ACTIONS(38),
    [anon_sym_brgt] = ACTIONS(38),
    [anon_sym_brgtz] = ACTIONS(38),
    [anon_sym_brle] = ACTIONS(38),
    [anon_sym_brlez] = ACTIONS(38),
    [anon_sym_brlt] = ACTIONS(38),
    [anon_sym_brltz] = ACTIONS(38),
    [anon_sym_brna] = ACTIONS(38),
    [anon_sym_brnan] = ACTIONS(38),
    [anon_sym_brnaz] = ACTIONS(38),
    [anon_sym_brne] = ACTIONS(38),
    [anon_sym_brnez] = ACTIONS(38),
    [anon_sym_ceil] = ACTIONS(38),
    [anon_sym_cos] = ACTIONS(38),
    [anon_sym_define] = ACTIONS(38),
    [anon_sym_div] = ACTIONS(38),
    [anon_sym_exp] = ACTIONS(38),
    [anon_sym_floor] = ACTIONS(38),
    [anon_sym_get] = ACTIONS(38),
    [anon_sym_getd] = ACTIONS(38),
    [anon_sym_hcf] = ACTIONS(38),
    [anon_sym_j] = ACTIONS(38),
    [anon_sym_jal] = ACTIONS(38),
    [anon_sym_jr] = ACTIONS(38),
    [anon_sym_l] = ACTIONS(38),
    [anon_sym_label] = ACTIONS(38),
    [anon_sym_lb] = ACTIONS(38),
    [anon_sym_lbn] = ACTIONS(38),
    [anon_sym_lbns] = ACTIONS(38),
    [anon_sym_lbs] = ACTIONS(38),
    [anon_sym_ld] = ACTIONS(38),
    [anon_sym_log] = ACTIONS(38),
    [anon_sym_lr] = ACTIONS(38),
    [anon_sym_ls] = ACTIONS(38),
    [anon_sym_max] = ACTIONS(38),
    [anon_sym_min] = ACTIONS(38),
    [anon_sym_mod] = ACTIONS(38),
    [anon_sym_move] = ACTIONS(38),
    [anon_sym_mul] = ACTIONS(38),
    [anon_sym_nor] = ACTIONS(38),
    [anon_sym_not] = ACTIONS(38),
    [anon_sym_or] = ACTIONS(38),
    [anon_sym_peek] = ACTIONS(38),
    [anon_sym_poke] = ACTIONS(38),
    [anon_sym_pop] = ACTIONS(38),
    [anon_sym_push] = ACTIONS(38),
    [anon_sym_put] = ACTIONS(38),
    [anon_sym_putd] = ACTIONS(38),
    [anon_sym_rand] = ACTIONS(38),
    [anon_sym_round] = ACTIONS(38),
    [anon_sym_s] = ACTIONS(38),
    [anon_sym_sap] = ACTIONS(38),
    [anon_sym_sapz] = ACTIONS(38),
    [anon_sym_sb] = ACTIONS(38),
    [anon_sym_sbn] = ACTIONS(38),
    [anon_sym_sbs] = ACTIONS(38),
    [anon_sym_sd] = ACTIONS(38),
    [anon_sym_sdns] = ACTIONS(38),
    [anon_sym_sdse] = ACTIONS(38),
    [anon_sym_select] = ACTIONS(38),
    [anon_sym_seq] = ACTIONS(38),
    [anon_sym_seqz] = ACTIONS(38),
    [anon_sym_sge] = ACTIONS(38),
    [anon_sym_sgez] = ACTIONS(38),
    [anon_sym_sgt] = ACTIONS(38),
    [anon_sym_sgtz] = ACTIONS(38),
    [anon_sym_sin] = ACTIONS(38),
    [anon_sym_sla] = ACTIONS(38),
    [anon_sym_sle] = ACTIONS(38),
    [anon_sym_sleep] = ACTIONS(38),
    [anon_sym_slez] = ACTIONS(38),
    [anon_sym_sll] = ACTIONS(38),
    [anon_sym_slt] = ACTIONS(38),
    [anon_sym_sltz] = ACTIONS(38),
    [anon_sym_sna] = ACTIONS(38),
    [anon_sym_snan] = ACTIONS(38),
    [anon_sym_snanz] = ACTIONS(38),
    [anon_sym_snaz] = ACTIONS(38),
    [anon_sym_sne] = ACTIONS(38),
    [anon_sym_snez] = ACTIONS(38),
    [anon_sym_sqrt] = ACTIONS(38),
    [anon_sym_sra] = ACTIONS(38),
    [anon_sym_srl] = ACTIONS(38),
    [anon_sym_ss] = ACTIONS(38),
    [anon_sym_sub] = ACTIONS(38),
    [anon_sym_tan] = ACTIONS(38),
    [anon_sym_trunc] = ACTIONS(38),
    [anon_sym_xor] = ACTIONS(38),
    [anon_sym_yield] = ACTIONS(38),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_LF] = ACTIONS(40),
    [anon_sym_CR_LF] = ACTIONS(40),
    [anon_sym_CR] = ACTIONS(42),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(40),
    [anon_sym_abs] = ACTIONS(42),
    [anon_sym_acos] = ACTIONS(42),
    [anon_sym_add] = ACTIONS(42),
    [anon_sym_alias] = ACTIONS(42),
    [anon_sym_and] = ACTIONS(42),
    [anon_sym_asin] = ACTIONS(42),
    [anon_sym_atan] = ACTIONS(42),
    [anon_sym_atan2] = ACTIONS(42),
    [anon_sym_bap] = ACTIONS(42),
    [anon_sym_bapal] = ACTIONS(42),
    [anon_sym_bapz] = ACTIONS(42),
    [anon_sym_bapzal] = ACTIONS(42),
    [anon_sym_bdns] = ACTIONS(42),
    [anon_sym_bdnsal] = ACTIONS(42),
    [anon_sym_bdse] = ACTIONS(42),
    [anon_sym_bdseal] = ACTIONS(42),
    [anon_sym_beq] = ACTIONS(42),
    [anon_sym_beqal] = ACTIONS(42),
    [anon_sym_beqz] = ACTIONS(42),
    [anon_sym_beqzal] = ACTIONS(42),
    [anon_sym_bge] = ACTIONS(42),
    [anon_sym_bgeal] = ACTIONS(42),
    [anon_sym_bgez] = ACTIONS(42),
    [anon_sym_bgezal] = ACTIONS(42),
    [anon_sym_bgt] = ACTIONS(42),
    [anon_sym_bgtal] = ACTIONS(42),
    [anon_sym_bgtz] = ACTIONS(42),
    [anon_sym_bgtzal] = ACTIONS(42),
    [anon_sym_ble] = ACTIONS(42),
    [anon_sym_bleal] = ACTIONS(42),
    [anon_sym_blez] = ACTIONS(42),
    [anon_sym_blezal] = ACTIONS(42),
    [anon_sym_blt] = ACTIONS(42),
    [anon_sym_bltal] = ACTIONS(42),
    [anon_sym_bltz] = ACTIONS(42),
    [anon_sym_bltzal] = ACTIONS(42),
    [anon_sym_bna] = ACTIONS(42),
    [anon_sym_bnaal] = ACTIONS(42),
    [anon_sym_bnan] = ACTIONS(42),
    [anon_sym_bnaz] = ACTIONS(42),
    [anon_sym_bnazal] = ACTIONS(42),
    [anon_sym_bne] = ACTIONS(42),
    [anon_sym_bneal] = ACTIONS(42),
    [anon_sym_bnez] = ACTIONS(42),
    [anon_sym_bnezal] = ACTIONS(42),
    [anon_sym_brap] = ACTIONS(42),
    [anon_sym_brapz] = ACTIONS(42),
    [anon_sym_brdns] = ACTIONS(42),
    [anon_sym_brdse] = ACTIONS(42),
    [anon_sym_breq] = ACTIONS(42),
    [anon_sym_breqz] = ACTIONS(42),
    [anon_sym_brge] = ACTIONS(42),
    [anon_sym_brgez] = ACTIONS(42),
    [anon_sym_brgt] = ACTIONS(42),
    [anon_sym_brgtz] = ACTIONS(42),
    [anon_sym_brle] = ACTIONS(42),
    [anon_sym_brlez] = ACTIONS(42),
    [anon_sym_brlt] = ACTIONS(42),
    [anon_sym_brltz] = ACTIONS(42),
    [anon_sym_brna] = ACTIONS(42),
    [anon_sym_brnan] = ACTIONS(42),
    [anon_sym_brnaz] = ACTIONS(42),
    [anon_sym_brne] = ACTIONS(42),
    [anon_sym_brnez] = ACTIONS(42),
    [anon_sym_ceil] = ACTIONS(42),
    [anon_sym_cos] = ACTIONS(42),
    [anon_sym_define] = ACTIONS(42),
    [anon_sym_div] = ACTIONS(42),
    [anon_sym_exp] = ACTIONS(42),
    [anon_sym_floor] = ACTIONS(42),
    [anon_sym_get] = ACTIONS(42),
    [anon_sym_getd] = ACTIONS(42),
    [anon_sym_hcf] = ACTIONS(42),
    [anon_sym_j] = ACTIONS(42),
    [anon_sym_jal] = ACTIONS(42),
    [anon_sym_jr] = ACTIONS(42),
    [anon_sym_l] = ACTIONS(42),
    [anon_sym_label] = ACTIONS(42),
    [anon_sym_lb] = ACTIONS(42),
    [anon_sym_lbn] = ACTIONS(42),
    [anon_sym_lbns] = ACTIONS(42),
    [anon_sym_lbs] = ACTIONS(42),
    [anon_sym_ld] = ACTIONS(42),
    [anon_sym_log] = ACTIONS(42),
    [anon_sym_lr] = ACTIONS(42),
    [anon_sym_ls] = ACTIONS(42),
    [anon_sym_max] = ACTIONS(42),
    [anon_sym_min] = ACTIONS(42),
    [anon_sym_mod] = ACTIONS(42),
    [anon_sym_move] = ACTIONS(42),
    [anon_sym_mul] = ACTIONS(42),
    [anon_sym_nor] = ACTIONS(42),
    [anon_sym_not] = ACTIONS(42),
    [anon_sym_or] = ACTIONS(42),
    [anon_sym_peek] = ACTIONS(42),
    [anon_sym_poke] = ACTIONS(42),
    [anon_sym_pop] = ACTIONS(42),
    [anon_sym_push] = ACTIONS(42),
    [anon_sym_put] = ACTIONS(42),
    [anon_sym_putd] = ACTIONS(42),
    [anon_sym_rand] = ACTIONS(42),
    [anon_sym_round] = ACTIONS(42),
    [anon_sym_s] = ACTIONS(42),
    [anon_sym_sap] = ACTIONS(42),
    [anon_sym_sapz] = ACTIONS(42),
    [anon_sym_sb] = ACTIONS(42),
    [anon_sym_sbn] = ACTIONS(42),
    [anon_sym_sbs] = ACTIONS(42),
    [anon_sym_sd] = ACTIONS(42),
    [anon_sym_sdns] = ACTIONS(42),
    [anon_sym_sdse] = ACTIONS(42),
    [anon_sym_select] = ACTIONS(42),
    [anon_sym_seq] = ACTIONS(42),
    [anon_sym_seqz] = ACTIONS(42),
    [anon_sym_sge] = ACTIONS(42),
    [anon_sym_sgez] = ACTIONS(42),
    [anon_sym_sgt] = ACTIONS(42),
    [anon_sym_sgtz] = ACTIONS(42),
    [anon_sym_sin] = ACTIONS(42),
    [anon_sym_sla] = ACTIONS(42),
    [anon_sym_sle] = ACTIONS(42),
    [anon_sym_sleep] = ACTIONS(42),
    [anon_sym_slez] = ACTIONS(42),
    [anon_sym_sll] = ACTIONS(42),
    [anon_sym_slt] = ACTIONS(42),
    [anon_sym_sltz] = ACTIONS(42),
    [anon_sym_sna] = ACTIONS(42),
    [anon_sym_snan] = ACTIONS(42),
    [anon_sym_snanz] = ACTIONS(42),
    [anon_sym_snaz] = ACTIONS(42),
    [anon_sym_sne] = ACTIONS(42),
    [anon_sym_snez] = ACTIONS(42),
    [anon_sym_sqrt] = ACTIONS(42),
    [anon_sym_sra] = ACTIONS(42),
    [anon_sym_srl] = ACTIONS(42),
    [anon_sym_ss] = ACTIONS(42),
    [anon_sym_sub] = ACTIONS(42),
    [anon_sym_tan] = ACTIONS(42),
    [anon_sym_trunc] = ACTIONS(42),
    [anon_sym_xor] = ACTIONS(42),
    [anon_sym_yield] = ACTIONS(42),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_LF] = ACTIONS(44),
    [anon_sym_CR_LF] = ACTIONS(44),
    [anon_sym_CR] = ACTIONS(46),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(44),
    [anon_sym_abs] = ACTIONS(46),
    [anon_sym_acos] = ACTIONS(46),
    [anon_sym_add] = ACTIONS(46),
    [anon_sym_alias] = ACTIONS(46),
    [anon_sym_and] = ACTIONS(46),
    [anon_sym_asin] = ACTIONS(46),
    [anon_sym_atan] = ACTIONS(46),
    [anon_sym_atan2] = ACTIONS(46),
    [anon_sym_bap] = ACTIONS(46),
    [anon_sym_bapal] = ACTIONS(46),
    [anon_sym_bapz] = ACTIONS(46),
    [anon_sym_bapzal] = ACTIONS(46),
    [anon_sym_bdns] = ACTIONS(46),
    [anon_sym_bdnsal] = ACTIONS(46),
    [anon_sym_bdse] = ACTIONS(46),
    [anon_sym_bdseal] = ACTIONS(46),
    [anon_sym_beq] = ACTIONS(46),
    [anon_sym_beqal] = ACTIONS(46),
    [anon_sym_beqz] = ACTIONS(46),
    [anon_sym_beqzal] = ACTIONS(46),
    [anon_sym_bge] = ACTIONS(46),
    [anon_sym_bgeal] = ACTIONS(46),
    [anon_sym_bgez] = ACTIONS(46),
    [anon_sym_bgezal] = ACTIONS(46),
    [anon_sym_bgt] = ACTIONS(46),
    [anon_sym_bgtal] = ACTIONS(46),
    [anon_sym_bgtz] = ACTIONS(46),
    [anon_sym_bgtzal] = ACTIONS(46),
    [anon_sym_ble] = ACTIONS(46),
    [anon_sym_bleal] = ACTIONS(46),
    [anon_sym_blez] = ACTIONS(46),
    [anon_sym_blezal] = ACTIONS(46),
    [anon_sym_blt] = ACTIONS(46),
    [anon_sym_bltal] = ACTIONS(46),
    [anon_sym_bltz] = ACTIONS(46),
    [anon_sym_bltzal] = ACTIONS(46),
    [anon_sym_bna] = ACTIONS(46),
    [anon_sym_bnaal] = ACTIONS(46),
    [anon_sym_bnan] = ACTIONS(46),
    [anon_sym_bnaz] = ACTIONS(46),
    [anon_sym_bnazal] = ACTIONS(46),
    [anon_sym_bne] = ACTIONS(46),
    [anon_sym_bneal] = ACTIONS(46),
    [anon_sym_bnez] = ACTIONS(46),
    [anon_sym_bnezal] = ACTIONS(46),
    [anon_sym_brap] = ACTIONS(46),
    [anon_sym_brapz] = ACTIONS(46),
    [anon_sym_brdns] = ACTIONS(46),
    [anon_sym_brdse] = ACTIONS(46),
    [anon_sym_breq] = ACTIONS(46),
    [anon_sym_breqz] = ACTIONS(46),
    [anon_sym_brge] = ACTIONS(46),
    [anon_sym_brgez] = ACTIONS(46),
    [anon_sym_brgt] = ACTIONS(46),
    [anon_sym_brgtz] = ACTIONS(46),
    [anon_sym_brle] = ACTIONS(46),
    [anon_sym_brlez] = ACTIONS(46),
    [anon_sym_brlt] = ACTIONS(46),
    [anon_sym_brltz] = ACTIONS(46),
    [anon_sym_brna] = ACTIONS(46),
    [anon_sym_brnan] = ACTIONS(46),
    [anon_sym_brnaz] = ACTIONS(46),
    [anon_sym_brne] = ACTIONS(46),
    [anon_sym_brnez] = ACTIONS(46),
    [anon_sym_ceil] = ACTIONS(46),
    [anon_sym_cos] = ACTIONS(46),
    [anon_sym_define] = ACTIONS(46),
    [anon_sym_div] = ACTIONS(46),
    [anon_sym_exp] = ACTIONS(46),
    [anon_sym_floor] = ACTIONS(46),
    [anon_sym_get] = ACTIONS(46),
    [anon_sym_getd] = ACTIONS(46),
    [anon_sym_hcf] = ACTIONS(46),
    [anon_sym_j] = ACTIONS(46),
    [anon_sym_jal] = ACTIONS(46),
    [anon_sym_jr] = ACTIONS(46),
    [anon_sym_l] = ACTIONS(46),
    [anon_sym_label] = ACTIONS(46),
    [anon_sym_lb] = ACTIONS(46),
    [anon_sym_lbn] = ACTIONS(46),
    [anon_sym_lbns] = ACTIONS(46),
    [anon_sym_lbs] = ACTIONS(46),
    [anon_sym_ld] = ACTIONS(46),
    [anon_sym_log] = ACTIONS(46),
    [anon_sym_lr] = ACTIONS(46),
    [anon_sym_ls] = ACTIONS(46),
    [anon_sym_max] = ACTIONS(46),
    [anon_sym_min] = ACTIONS(46),
    [anon_sym_mod] = ACTIONS(46),
    [anon_sym_move] = ACTIONS(46),
    [anon_sym_mul] = ACTIONS(46),
    [anon_sym_nor] = ACTIONS(46),
    [anon_sym_not] = ACTIONS(46),
    [anon_sym_or] = ACTIONS(46),
    [anon_sym_peek] = ACTIONS(46),
    [anon_sym_poke] = ACTIONS(46),
    [anon_sym_pop] = ACTIONS(46),
    [anon_sym_push] = ACTIONS(46),
    [anon_sym_put] = ACTIONS(46),
    [anon_sym_putd] = ACTIONS(46),
    [anon_sym_rand] = ACTIONS(46),
    [anon_sym_round] = ACTIONS(46),
    [anon_sym_s] = ACTIONS(46),
    [anon_sym_sap] = ACTIONS(46),
    [anon_sym_sapz] = ACTIONS(46),
    [anon_sym_sb] = ACTIONS(46),
    [anon_sym_sbn] = ACTIONS(46),
    [anon_sym_sbs] = ACTIONS(46),
    [anon_sym_sd] = ACTIONS(46),
    [anon_sym_sdns] = ACTIONS(46),
    [anon_sym_sdse] = ACTIONS(46),
    [anon_sym_select] = ACTIONS(46),
    [anon_sym_seq] = ACTIONS(46),
    [anon_sym_seqz] = ACTIONS(46),
    [anon_sym_sge] = ACTIONS(46),
    [anon_sym_sgez] = ACTIONS(46),
    [anon_sym_sgt] = ACTIONS(46),
    [anon_sym_sgtz] = ACTIONS(46),
    [anon_sym_sin] = ACTIONS(46),
    [anon_sym_sla] = ACTIONS(46),
    [anon_sym_sle] = ACTIONS(46),
    [anon_sym_sleep] = ACTIONS(46),
    [anon_sym_slez] = ACTIONS(46),
    [anon_sym_sll] = ACTIONS(46),
    [anon_sym_slt] = ACTIONS(46),
    [anon_sym_sltz] = ACTIONS(46),
    [anon_sym_sna] = ACTIONS(46),
    [anon_sym_snan] = ACTIONS(46),
    [anon_sym_snanz] = ACTIONS(46),
    [anon_sym_snaz] = ACTIONS(46),
    [anon_sym_sne] = ACTIONS(46),
    [anon_sym_snez] = ACTIONS(46),
    [anon_sym_sqrt] = ACTIONS(46),
    [anon_sym_sra] = ACTIONS(46),
    [anon_sym_srl] = ACTIONS(46),
    [anon_sym_ss] = ACTIONS(46),
    [anon_sym_sub] = ACTIONS(46),
    [anon_sym_tan] = ACTIONS(46),
    [anon_sym_trunc] = ACTIONS(46),
    [anon_sym_xor] = ACTIONS(46),
    [anon_sym_yield] = ACTIONS(46),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
    [anon_sym_LF] = ACTIONS(48),
    [anon_sym_CR_LF] = ACTIONS(48),
    [anon_sym_CR] = ACTIONS(50),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(48),
    [anon_sym_abs] = ACTIONS(50),
    [anon_sym_acos] = ACTIONS(50),
    [anon_sym_add] = ACTIONS(50),
    [anon_sym_alias] = ACTIONS(50),
    [anon_sym_and] = ACTIONS(50),
    [anon_sym_asin] = ACTIONS(50),
    [anon_sym_atan] = ACTIONS(50),
    [anon_sym_atan2] = ACTIONS(50),
    [anon_sym_bap] = ACTIONS(50),
    [anon_sym_bapal] = ACTIONS(50),
    [anon_sym_bapz] = ACTIONS(50),
    [anon_sym_bapzal] = ACTIONS(50),
    [anon_sym_bdns] = ACTIONS(50),
    [anon_sym_bdnsal] = ACTIONS(50),
    [anon_sym_bdse] = ACTIONS(50),
    [anon_sym_bdseal] = ACTIONS(50),
    [anon_sym_beq] = ACTIONS(50),
    [anon_sym_beqal] = ACTIONS(50),
    [anon_sym_beqz] = ACTIONS(50),
    [anon_sym_beqzal] = ACTIONS(50),
    [anon_sym_bge] = ACTIONS(50),
    [anon_sym_bgeal] = ACTIONS(50),
    [anon_sym_bgez] = ACTIONS(50),
    [anon_sym_bgezal] = ACTIONS(50),
    [anon_sym_bgt] = ACTIONS(50),
    [anon_sym_bgtal] = ACTIONS(50),
    [anon_sym_bgtz] = ACTIONS(50),
    [anon_sym_bgtzal] = ACTIONS(50),
    [anon_sym_ble] = ACTIONS(50),
    [anon_sym_bleal] = ACTIONS(50),
    [anon_sym_blez] = ACTIONS(50),
    [anon_sym_blezal] = ACTIONS(50),
    [anon_sym_blt] = ACTIONS(50),
    [anon_sym_bltal] = ACTIONS(50),
    [anon_sym_bltz] = ACTIONS(50),
    [anon_sym_bltzal] = ACTIONS(50),
    [anon_sym_bna] = ACTIONS(50),
    [anon_sym_bnaal] = ACTIONS(50),
    [anon_sym_bnan] = ACTIONS(50),
    [anon_sym_bnaz] = ACTIONS(50),
    [anon_sym_bnazal] = ACTIONS(50),
    [anon_sym_bne] = ACTIONS(50),
    [anon_sym_bneal] = ACTIONS(50),
    [anon_sym_bnez] = ACTIONS(50),
    [anon_sym_bnezal] = ACTIONS(50),
    [anon_sym_brap] = ACTIONS(50),
    [anon_sym_brapz] = ACTIONS(50),
    [anon_sym_brdns] = ACTIONS(50),
    [anon_sym_brdse] = ACTIONS(50),
    [anon_sym_breq] = ACTIONS(50),
    [anon_sym_breqz] = ACTIONS(50),
    [anon_sym_brge] = ACTIONS(50),
    [anon_sym_brgez] = ACTIONS(50),
    [anon_sym_brgt] = ACTIONS(50),
    [anon_sym_brgtz] = ACTIONS(50),
    [anon_sym_brle] = ACTIONS(50),
    [anon_sym_brlez] = ACTIONS(50),
    [anon_sym_brlt] = ACTIONS(50),
    [anon_sym_brltz] = ACTIONS(50),
    [anon_sym_brna] = ACTIONS(50),
    [anon_sym_brnan] = ACTIONS(50),
    [anon_sym_brnaz] = ACTIONS(50),
    [anon_sym_brne] = ACTIONS(50),
    [anon_sym_brnez] = ACTIONS(50),
    [anon_sym_ceil] = ACTIONS(50),
    [anon_sym_cos] = ACTIONS(50),
    [anon_sym_define] = ACTIONS(50),
    [anon_sym_div] = ACTIONS(50),
    [anon_sym_exp] = ACTIONS(50),
    [anon_sym_floor] = ACTIONS(50),
    [anon_sym_get] = ACTIONS(50),
    [anon_sym_getd] = ACTIONS(50),
    [anon_sym_hcf] = ACTIONS(50),
    [anon_sym_j] = ACTIONS(50),
    [anon_sym_jal] = ACTIONS(50),
    [anon_sym_jr] = ACTIONS(50),
    [anon_sym_l] = ACTIONS(50),
    [anon_sym_label] = ACTIONS(50),
    [anon_sym_lb] = ACTIONS(50),
    [anon_sym_lbn] = ACTIONS(50),
    [anon_sym_lbns] = ACTIONS(50),
    [anon_sym_lbs] = ACTIONS(50),
    [anon_sym_ld] = ACTIONS(50),
    [anon_sym_log] = ACTIONS(50),
    [anon_sym_lr] = ACTIONS(50),
    [anon_sym_ls] = ACTIONS(50),
    [anon_sym_max] = ACTIONS(50),
    [anon_sym_min] = ACTIONS(50),
    [anon_sym_mod] = ACTIONS(50),
    [anon_sym_move] = ACTIONS(50),
    [anon_sym_mul] = ACTIONS(50),
    [anon_sym_nor] = ACTIONS(50),
    [anon_sym_not] = ACTIONS(50),
    [anon_sym_or] = ACTIONS(50),
    [anon_sym_peek] = ACTIONS(50),
    [anon_sym_poke] = ACTIONS(50),
    [anon_sym_pop] = ACTIONS(50),
    [anon_sym_push] = ACTIONS(50),
    [anon_sym_put] = ACTIONS(50),
    [anon_sym_putd] = ACTIONS(50),
    [anon_sym_rand] = ACTIONS(50),
    [anon_sym_round] = ACTIONS(50),
    [anon_sym_s] = ACTIONS(50),
    [anon_sym_sap] = ACTIONS(50),
    [anon_sym_sapz] = ACTIONS(50),
    [anon_sym_sb] = ACTIONS(50),
    [anon_sym_sbn] = ACTIONS(50),
    [anon_sym_sbs] = ACTIONS(50),
    [anon_sym_sd] = ACTIONS(50),
    [anon_sym_sdns] = ACTIONS(50),
    [anon_sym_sdse] = ACTIONS(50),
    [anon_sym_select] = ACTIONS(50),
    [anon_sym_seq] = ACTIONS(50),
    [anon_sym_seqz] = ACTIONS(50),
    [anon_sym_sge] = ACTIONS(50),
    [anon_sym_sgez] = ACTIONS(50),
    [anon_sym_sgt] = ACTIONS(50),
    [anon_sym_sgtz] = ACTIONS(50),
    [anon_sym_sin] = ACTIONS(50),
    [anon_sym_sla] = ACTIONS(50),
    [anon_sym_sle] = ACTIONS(50),
    [anon_sym_sleep] = ACTIONS(50),
    [anon_sym_slez] = ACTIONS(50),
    [anon_sym_sll] = ACTIONS(50),
    [anon_sym_slt] = ACTIONS(50),
    [anon_sym_sltz] = ACTIONS(50),
    [anon_sym_sna] = ACTIONS(50),
    [anon_sym_snan] = ACTIONS(50),
    [anon_sym_snanz] = ACTIONS(50),
    [anon_sym_snaz] = ACTIONS(50),
    [anon_sym_sne] = ACTIONS(50),
    [anon_sym_snez] = ACTIONS(50),
    [anon_sym_sqrt] = ACTIONS(50),
    [anon_sym_sra] = ACTIONS(50),
    [anon_sym_srl] = ACTIONS(50),
    [anon_sym_ss] = ACTIONS(50),
    [anon_sym_sub] = ACTIONS(50),
    [anon_sym_tan] = ACTIONS(50),
    [anon_sym_trunc] = ACTIONS(50),
    [anon_sym_xor] = ACTIONS(50),
    [anon_sym_yield] = ACTIONS(50),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [anon_sym_LF] = ACTIONS(52),
    [anon_sym_CR_LF] = ACTIONS(52),
    [anon_sym_CR] = ACTIONS(54),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(52),
    [anon_sym_abs] = ACTIONS(54),
    [anon_sym_acos] = ACTIONS(54),
    [anon_sym_add] = ACTIONS(54),
    [anon_sym_alias] = ACTIONS(54),
    [anon_sym_and] = ACTIONS(54),
    [anon_sym_asin] = ACTIONS(54),
    [anon_sym_atan] = ACTIONS(54),
    [anon_sym_atan2] = ACTIONS(54),
    [anon_sym_bap] = ACTIONS(54),
    [anon_sym_bapal] = ACTIONS(54),
    [anon_sym_bapz] = ACTIONS(54),
    [anon_sym_bapzal] = ACTIONS(54),
    [anon_sym_bdns] = ACTIONS(54),
    [anon_sym_bdnsal] = ACTIONS(54),
    [anon_sym_bdse] = ACTIONS(54),
    [anon_sym_bdseal] = ACTIONS(54),
    [anon_sym_beq] = ACTIONS(54),
    [anon_sym_beqal] = ACTIONS(54),
    [anon_sym_beqz] = ACTIONS(54),
    [anon_sym_beqzal] = ACTIONS(54),
    [anon_sym_bge] = ACTIONS(54),
    [anon_sym_bgeal] = ACTIONS(54),
    [anon_sym_bgez] = ACTIONS(54),
    [anon_sym_bgezal] = ACTIONS(54),
    [anon_sym_bgt] = ACTIONS(54),
    [anon_sym_bgtal] = ACTIONS(54),
    [anon_sym_bgtz] = ACTIONS(54),
    [anon_sym_bgtzal] = ACTIONS(54),
    [anon_sym_ble] = ACTIONS(54),
    [anon_sym_bleal] = ACTIONS(54),
    [anon_sym_blez] = ACTIONS(54),
    [anon_sym_blezal] = ACTIONS(54),
    [anon_sym_blt] = ACTIONS(54),
    [anon_sym_bltal] = ACTIONS(54),
    [anon_sym_bltz] = ACTIONS(54),
    [anon_sym_bltzal] = ACTIONS(54),
    [anon_sym_bna] = ACTIONS(54),
    [anon_sym_bnaal] = ACTIONS(54),
    [anon_sym_bnan] = ACTIONS(54),
    [anon_sym_bnaz] = ACTIONS(54),
    [anon_sym_bnazal] = ACTIONS(54),
    [anon_sym_bne] = ACTIONS(54),
    [anon_sym_bneal] = ACTIONS(54),
    [anon_sym_bnez] = ACTIONS(54),
    [anon_sym_bnezal] = ACTIONS(54),
    [anon_sym_brap] = ACTIONS(54),
    [anon_sym_brapz] = ACTIONS(54),
    [anon_sym_brdns] = ACTIONS(54),
    [anon_sym_brdse] = ACTIONS(54),
    [anon_sym_breq] = ACTIONS(54),
    [anon_sym_breqz] = ACTIONS(54),
    [anon_sym_brge] = ACTIONS(54),
    [anon_sym_brgez] = ACTIONS(54),
    [anon_sym_brgt] = ACTIONS(54),
    [anon_sym_brgtz] = ACTIONS(54),
    [anon_sym_brle] = ACTIONS(54),
    [anon_sym_brlez] = ACTIONS(54),
    [anon_sym_brlt] = ACTIONS(54),
    [anon_sym_brltz] = ACTIONS(54),
    [anon_sym_brna] = ACTIONS(54),
    [anon_sym_brnan] = ACTIONS(54),
    [anon_sym_brnaz] = ACTIONS(54),
    [anon_sym_brne] = ACTIONS(54),
    [anon_sym_brnez] = ACTIONS(54),
    [anon_sym_ceil] = ACTIONS(54),
    [anon_sym_cos] = ACTIONS(54),
    [anon_sym_define] = ACTIONS(54),
    [anon_sym_div] = ACTIONS(54),
    [anon_sym_exp] = ACTIONS(54),
    [anon_sym_floor] = ACTIONS(54),
    [anon_sym_get] = ACTIONS(54),
    [anon_sym_getd] = ACTIONS(54),
    [anon_sym_hcf] = ACTIONS(54),
    [anon_sym_j] = ACTIONS(54),
    [anon_sym_jal] = ACTIONS(54),
    [anon_sym_jr] = ACTIONS(54),
    [anon_sym_l] = ACTIONS(54),
    [anon_sym_label] = ACTIONS(54),
    [anon_sym_lb] = ACTIONS(54),
    [anon_sym_lbn] = ACTIONS(54),
    [anon_sym_lbns] = ACTIONS(54),
    [anon_sym_lbs] = ACTIONS(54),
    [anon_sym_ld] = ACTIONS(54),
    [anon_sym_log] = ACTIONS(54),
    [anon_sym_lr] = ACTIONS(54),
    [anon_sym_ls] = ACTIONS(54),
    [anon_sym_max] = ACTIONS(54),
    [anon_sym_min] = ACTIONS(54),
    [anon_sym_mod] = ACTIONS(54),
    [anon_sym_move] = ACTIONS(54),
    [anon_sym_mul] = ACTIONS(54),
    [anon_sym_nor] = ACTIONS(54),
    [anon_sym_not] = ACTIONS(54),
    [anon_sym_or] = ACTIONS(54),
    [anon_sym_peek] = ACTIONS(54),
    [anon_sym_poke] = ACTIONS(54),
    [anon_sym_pop] = ACTIONS(54),
    [anon_sym_push] = ACTIONS(54),
    [anon_sym_put] = ACTIONS(54),
    [anon_sym_putd] = ACTIONS(54),
    [anon_sym_rand] = ACTIONS(54),
    [anon_sym_round] = ACTIONS(54),
    [anon_sym_s] = ACTIONS(54),
    [anon_sym_sap] = ACTIONS(54),
    [anon_sym_sapz] = ACTIONS(54),
    [anon_sym_sb] = ACTIONS(54),
    [anon_sym_sbn] = ACTIONS(54),
    [anon_sym_sbs] = ACTIONS(54),
    [anon_sym_sd] = ACTIONS(54),
    [anon_sym_sdns] = ACTIONS(54),
    [anon_sym_sdse] = ACTIONS(54),
    [anon_sym_select] = ACTIONS(54),
    [anon_sym_seq] = ACTIONS(54),
    [anon_sym_seqz] = ACTIONS(54),
    [anon_sym_sge] = ACTIONS(54),
    [anon_sym_sgez] = ACTIONS(54),
    [anon_sym_sgt] = ACTIONS(54),
    [anon_sym_sgtz] = ACTIONS(54),
    [anon_sym_sin] = ACTIONS(54),
    [anon_sym_sla] = ACTIONS(54),
    [anon_sym_sle] = ACTIONS(54),
    [anon_sym_sleep] = ACTIONS(54),
    [anon_sym_slez] = ACTIONS(54),
    [anon_sym_sll] = ACTIONS(54),
    [anon_sym_slt] = ACTIONS(54),
    [anon_sym_sltz] = ACTIONS(54),
    [anon_sym_sna] = ACTIONS(54),
    [anon_sym_snan] = ACTIONS(54),
    [anon_sym_snanz] = ACTIONS(54),
    [anon_sym_snaz] = ACTIONS(54),
    [anon_sym_sne] = ACTIONS(54),
    [anon_sym_snez] = ACTIONS(54),
    [anon_sym_sqrt] = ACTIONS(54),
    [anon_sym_sra] = ACTIONS(54),
    [anon_sym_srl] = ACTIONS(54),
    [anon_sym_ss] = ACTIONS(54),
    [anon_sym_sub] = ACTIONS(54),
    [anon_sym_tan] = ACTIONS(54),
    [anon_sym_trunc] = ACTIONS(54),
    [anon_sym_xor] = ACTIONS(54),
    [anon_sym_yield] = ACTIONS(54),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(58), 1,
      anon_sym_COLON,
    ACTIONS(62), 1,
      anon_sym_CR,
    ACTIONS(64), 1,
      sym_register,
    ACTIONS(66), 1,
      sym_device,
    ACTIONS(70), 1,
      anon_sym_HASH_LPAREN_DQUOTE,
    STATE(12), 1,
      aux_sym_instruction_repeat1,
    STATE(21), 1,
      sym_operand,
    ACTIONS(56), 2,
      sym_identifier,
      sym_logictype,
    ACTIONS(72), 2,
      aux_sym_number_token1,
      sym_enum,
    STATE(18), 2,
      sym_device_spec,
      sym_number,
    STATE(20), 2,
      sym_constant,
      sym_hash_preproc,
    ACTIONS(60), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
    ACTIONS(68), 7,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [55] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(79), 1,
      anon_sym_CR,
    ACTIONS(81), 1,
      sym_register,
    ACTIONS(84), 1,
      sym_device,
    ACTIONS(90), 1,
      anon_sym_HASH_LPAREN_DQUOTE,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(21), 1,
      sym_operand,
    ACTIONS(74), 2,
      sym_identifier,
      sym_logictype,
    ACTIONS(93), 2,
      aux_sym_number_token1,
      sym_enum,
    STATE(18), 2,
      sym_device_spec,
      sym_number,
    STATE(20), 2,
      sym_constant,
      sym_hash_preproc,
    ACTIONS(77), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
    ACTIONS(87), 7,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [107] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(64), 1,
      sym_register,
    ACTIONS(66), 1,
      sym_device,
    ACTIONS(70), 1,
      anon_sym_HASH_LPAREN_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_CR,
    STATE(13), 1,
      aux_sym_instruction_repeat1,
    STATE(21), 1,
      sym_operand,
    ACTIONS(56), 2,
      sym_identifier,
      sym_logictype,
    ACTIONS(72), 2,
      aux_sym_number_token1,
      sym_enum,
    STATE(18), 2,
      sym_device_spec,
      sym_number,
    STATE(20), 2,
      sym_constant,
      sym_hash_preproc,
    ACTIONS(96), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
    ACTIONS(68), 7,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [159] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(64), 1,
      sym_register,
    ACTIONS(66), 1,
      sym_device,
    ACTIONS(70), 1,
      anon_sym_HASH_LPAREN_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_CR,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(21), 1,
      sym_operand,
    ACTIONS(56), 2,
      sym_identifier,
      sym_logictype,
    ACTIONS(72), 2,
      aux_sym_number_token1,
      sym_enum,
    STATE(18), 2,
      sym_device_spec,
      sym_number,
    STATE(20), 2,
      sym_constant,
      sym_hash_preproc,
    ACTIONS(100), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
    ACTIONS(68), 7,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [211] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(64), 1,
      sym_register,
    ACTIONS(66), 1,
      sym_device,
    ACTIONS(70), 1,
      anon_sym_HASH_LPAREN_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_CR,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(21), 1,
      sym_operand,
    ACTIONS(56), 2,
      sym_identifier,
      sym_logictype,
    ACTIONS(72), 2,
      aux_sym_number_token1,
      sym_enum,
    STATE(18), 2,
      sym_device_spec,
      sym_number,
    STATE(20), 2,
      sym_constant,
      sym_hash_preproc,
    ACTIONS(104), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
    ACTIONS(68), 7,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [263] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(112), 8,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      anon_sym_HASH_LPAREN_DQUOTE,
      aux_sym_number_token1,
      sym_enum,
    ACTIONS(108), 10,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
      sym_logictype,
  [292] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(116), 8,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      anon_sym_HASH_LPAREN_DQUOTE,
      aux_sym_number_token1,
      sym_enum,
    ACTIONS(114), 10,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
      sym_logictype,
  [318] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(120), 8,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      anon_sym_HASH_LPAREN_DQUOTE,
      aux_sym_number_token1,
      sym_enum,
    ACTIONS(118), 10,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
      sym_logictype,
  [344] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(124), 8,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      anon_sym_HASH_LPAREN_DQUOTE,
      aux_sym_number_token1,
      sym_enum,
    ACTIONS(122), 10,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
      sym_logictype,
  [370] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(128), 8,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      anon_sym_HASH_LPAREN_DQUOTE,
      aux_sym_number_token1,
      sym_enum,
    ACTIONS(126), 10,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
      sym_logictype,
  [396] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(132), 8,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      anon_sym_HASH_LPAREN_DQUOTE,
      aux_sym_number_token1,
      sym_enum,
    ACTIONS(130), 10,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
      sym_logictype,
  [422] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(136), 8,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      anon_sym_HASH_LPAREN_DQUOTE,
      aux_sym_number_token1,
      sym_enum,
    ACTIONS(134), 10,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
      sym_logictype,
  [448] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(140), 8,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_register,
      sym_device,
      anon_sym_HASH_LPAREN_DQUOTE,
      aux_sym_number_token1,
      sym_enum,
    ACTIONS(138), 10,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
      sym_logictype,
  [474] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    STATE(4), 1,
      sym_newline,
    STATE(24), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [494] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    STATE(4), 1,
      sym_newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [508] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    STATE(7), 1,
      sym_newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [522] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(144), 1,
      anon_sym_CR,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
  [534] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(148), 1,
      anon_sym_CR,
    ACTIONS(146), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [545] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(150), 1,
      sym_network_index,
  [552] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_RPAREN,
  [559] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [566] = 2,
    ACTIONS(156), 1,
      sym__whitespace,
    ACTIONS(158), 1,
      sym_preproc_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 55,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 159,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 292,
  [SMALL_STATE(16)] = 318,
  [SMALL_STATE(17)] = 344,
  [SMALL_STATE(18)] = 370,
  [SMALL_STATE(19)] = 396,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 448,
  [SMALL_STATE(22)] = 474,
  [SMALL_STATE(23)] = 494,
  [SMALL_STATE(24)] = 508,
  [SMALL_STATE(25)] = 522,
  [SMALL_STATE(26)] = 534,
  [SMALL_STATE(27)] = 545,
  [SMALL_STATE(28)] = 552,
  [SMALL_STATE(29)] = 559,
  [SMALL_STATE(30)] = 566,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newline, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(18),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(14),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(19),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(30),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 5),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_spec, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_spec, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_preproc, 3, .production_id = 8),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_preproc, 3, .production_id = 8),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_spec, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_spec, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ic10() {
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
