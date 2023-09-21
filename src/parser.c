#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 170
#define ALIAS_COUNT 2
#define TOKEN_COUNT 156
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 9

enum {
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
  anon_sym_l = 22,
  anon_sym_s = 23,
  anon_sym_ls = 24,
  anon_sym_lr = 25,
  anon_sym_sb = 26,
  anon_sym_lb = 27,
  anon_sym_alias = 28,
  anon_sym_move = 29,
  anon_sym_add = 30,
  anon_sym_sub = 31,
  anon_sym_sdse = 32,
  anon_sym_sdns = 33,
  anon_sym_slt = 34,
  anon_sym_sgt = 35,
  anon_sym_sle = 36,
  anon_sym_sge = 37,
  anon_sym_seq = 38,
  anon_sym_sne = 39,
  anon_sym_sap = 40,
  anon_sym_sna = 41,
  anon_sym_and = 42,
  anon_sym_or = 43,
  anon_sym_xor = 44,
  anon_sym_nor = 45,
  anon_sym_mul = 46,
  anon_sym_div = 47,
  anon_sym_mod = 48,
  anon_sym_j = 49,
  anon_sym_bltz = 50,
  anon_sym_bgez = 51,
  anon_sym_blez = 52,
  anon_sym_bgtz = 53,
  anon_sym_bdse = 54,
  anon_sym_bdns = 55,
  anon_sym_bnan = 56,
  anon_sym_brnan = 57,
  anon_sym_lbn = 58,
  anon_sym_lbns = 59,
  anon_sym_lbs = 60,
  anon_sym_not = 61,
  anon_sym_sbn = 62,
  anon_sym_sbs = 63,
  anon_sym_sla = 64,
  anon_sym_sll = 65,
  anon_sym_sra = 66,
  anon_sym_srl = 67,
  anon_sym_snan = 68,
  anon_sym_snanz = 69,
  anon_sym_ss = 70,
  anon_sym_beq = 71,
  anon_sym_bne = 72,
  anon_sym_bap = 73,
  anon_sym_bna = 74,
  anon_sym_jal = 75,
  anon_sym_brdse = 76,
  anon_sym_brdns = 77,
  anon_sym_bltzal = 78,
  anon_sym_bgezal = 79,
  anon_sym_blezal = 80,
  anon_sym_bgtzal = 81,
  anon_sym_beqal = 82,
  anon_sym_bneal = 83,
  anon_sym_jr = 84,
  anon_sym_bdseal = 85,
  anon_sym_bdnsal = 86,
  anon_sym_brltz = 87,
  anon_sym_brgez = 88,
  anon_sym_brlez = 89,
  anon_sym_brgtz = 90,
  anon_sym_breq = 91,
  anon_sym_brne = 92,
  anon_sym_brap = 93,
  anon_sym_brna = 94,
  anon_sym_sqrt = 95,
  anon_sym_round = 96,
  anon_sym_trunc = 97,
  anon_sym_ceil = 98,
  anon_sym_floor = 99,
  anon_sym_max = 100,
  anon_sym_min = 101,
  anon_sym_abs = 102,
  anon_sym_log = 103,
  anon_sym_exp = 104,
  anon_sym_rand = 105,
  anon_sym_yield = 106,
  anon_sym_label = 107,
  anon_sym_peek = 108,
  anon_sym_push = 109,
  anon_sym_pop = 110,
  anon_sym_hcf = 111,
  anon_sym_select = 112,
  anon_sym_blt = 113,
  anon_sym_bgt = 114,
  anon_sym_ble = 115,
  anon_sym_bge = 116,
  anon_sym_brlt = 117,
  anon_sym_brgt = 118,
  anon_sym_brle = 119,
  anon_sym_brge = 120,
  anon_sym_bltal = 121,
  anon_sym_bgtal = 122,
  anon_sym_bleal = 123,
  anon_sym_bgeal = 124,
  anon_sym_bapal = 125,
  anon_sym_bnaal = 126,
  anon_sym_beqz = 127,
  anon_sym_bnez = 128,
  anon_sym_bapz = 129,
  anon_sym_bnaz = 130,
  anon_sym_breqz = 131,
  anon_sym_brnez = 132,
  anon_sym_brapz = 133,
  anon_sym_brnaz = 134,
  anon_sym_beqzal = 135,
  anon_sym_bnezal = 136,
  anon_sym_bapzal = 137,
  anon_sym_bnazal = 138,
  anon_sym_sltz = 139,
  anon_sym_sgtz = 140,
  anon_sym_slez = 141,
  anon_sym_sgez = 142,
  anon_sym_seqz = 143,
  anon_sym_snez = 144,
  anon_sym_sapz = 145,
  anon_sym_snaz = 146,
  anon_sym_define = 147,
  anon_sym_sleep = 148,
  anon_sym_sin = 149,
  anon_sym_asin = 150,
  anon_sym_tan = 151,
  anon_sym_atan = 152,
  anon_sym_cos = 153,
  anon_sym_acos = 154,
  sym_logictype = 155,
  sym_source_file = 156,
  sym_line = 157,
  sym_label = 158,
  sym_newline = 159,
  sym_comment = 160,
  sym_instruction = 161,
  sym_operand = 162,
  sym_device_spec = 163,
  sym__constant = 164,
  sym_hash_preproc = 165,
  sym_number = 166,
  sym_operation = 167,
  aux_sym_source_file_repeat1 = 168,
  aux_sym_instruction_repeat1 = 169,
  alias_sym_invalid_instruction = 170,
  alias_sym_program = 171,
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
  [anon_sym_bnan] = "bnan",
  [anon_sym_brnan] = "brnan",
  [anon_sym_lbn] = "lbn",
  [anon_sym_lbns] = "lbns",
  [anon_sym_lbs] = "lbs",
  [anon_sym_not] = "not",
  [anon_sym_sbn] = "sbn",
  [anon_sym_sbs] = "sbs",
  [anon_sym_sla] = "sla",
  [anon_sym_sll] = "sll",
  [anon_sym_sra] = "sra",
  [anon_sym_srl] = "srl",
  [anon_sym_snan] = "snan",
  [anon_sym_snanz] = "snanz",
  [anon_sym_ss] = "ss",
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
  [sym_device_spec] = "device_spec",
  [sym__constant] = "_constant",
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
  [anon_sym_bnan] = anon_sym_bnan,
  [anon_sym_brnan] = anon_sym_brnan,
  [anon_sym_lbn] = anon_sym_lbn,
  [anon_sym_lbns] = anon_sym_lbns,
  [anon_sym_lbs] = anon_sym_lbs,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_sbn] = anon_sym_sbn,
  [anon_sym_sbs] = anon_sym_sbs,
  [anon_sym_sla] = anon_sym_sla,
  [anon_sym_sll] = anon_sym_sll,
  [anon_sym_sra] = anon_sym_sra,
  [anon_sym_srl] = anon_sym_srl,
  [anon_sym_snan] = anon_sym_snan,
  [anon_sym_snanz] = anon_sym_snanz,
  [anon_sym_ss] = anon_sym_ss,
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
  [sym_device_spec] = sym_device_spec,
  [sym__constant] = sym__constant,
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
  [anon_sym_bnan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brnan] = {
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
  [anon_sym_not] = {
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
  [anon_sym_sla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sll] = {
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
  [anon_sym_snan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snanz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ss] = {
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
  [sym_device_spec] = {
    .visible = true,
    .named = true,
  },
  [sym__constant] = {
    .visible = false,
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

enum {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 'H') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 'H') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(23);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(17);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(14);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_network_index);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_preproc_string);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_preproc_string);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_HASH_LPAREN_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
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
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'h') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '5') ||
          lookahead == 'b') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_j);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 34:
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == 'q') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 50:
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'x') ADVANCE(185);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 67:
      if (lookahead == 'x') ADVANCE(188);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_logictype);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 'w') ADVANCE(194);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'q') ADVANCE(200);
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(204);
      if (lookahead == 'z') ADVANCE(205);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 102:
      if (lookahead == 'q') ADVANCE(228);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_device);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 111:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 112:
      if (lookahead == '1') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(250);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_jr);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(252);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_lb);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_lr);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ls);
      END_STATE();
    case 124:
      if (lookahead == 'x') ADVANCE(256);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'v') ADVANCE(259);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 139:
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_sb);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'q') ADVANCE(276);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(289);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 158:
      if (lookahead == 'R') ADVANCE(295);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 168:
      if (lookahead == 'v') ADVANCE(308);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 175:
      if (lookahead == 'w') ADVANCE(314);
      END_STATE();
    case 176:
      if (lookahead == 'v') ADVANCE(315);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 182:
      if (lookahead == 'k') ADVANCE(69);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 185:
      if (lookahead == 'Q') ADVANCE(322);
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 195:
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(337);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 208:
      if (lookahead == 'g') ADVANCE(347);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 217:
      if (lookahead == 'k') ADVANCE(355);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_abs);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_bap);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'z') ADVANCE(361);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_beq);
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'z') ADVANCE(365);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_bge);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'z') ADVANCE(367);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_bgt);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'z') ADVANCE(369);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_ble);
      if (lookahead == 'a') ADVANCE(370);
      if (lookahead == 'z') ADVANCE(371);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_blt);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'z') ADVANCE(373);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_bna);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead == 'z') ADVANCE(376);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_bne);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'z') ADVANCE(378);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(379);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 237:
      if (lookahead == 'q') ADVANCE(382);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_cos);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 244:
      if (lookahead == '2') ADVANCE(391);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_device);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(109);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_hcf);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_jal);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_lbn);
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_lbs);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 262:
      if (lookahead == 'f') ADVANCE(397);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 265:
      if (lookahead == 'k') ADVANCE(398);
      END_STATE();
    case 266:
      if (lookahead == 'f') ADVANCE(399);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(400);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_sap);
      if (lookahead == 'z') ADVANCE(402);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_sbn);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_sbs);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_seq);
      if (lookahead == 'z') ADVANCE(406);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_sge);
      if (lookahead == 'z') ADVANCE(407);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_sgt);
      if (lookahead == 'z') ADVANCE(408);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_sin);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_sla);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_sle);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'z') ADVANCE(410);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_sll);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_slt);
      if (lookahead == 'z') ADVANCE(411);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_sna);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 'z') ADVANCE(413);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_sne);
      if (lookahead == 'z') ADVANCE(414);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_sra);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_srl);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_tan);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 294:
      if (lookahead == 'v') ADVANCE(418);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(420);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 298:
      if (lookahead == 'g') ADVANCE(422);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 306:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 307:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 317:
      if (lookahead == 'z') ADVANCE(438);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 322:
      if (lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 323:
      if (lookahead == 'm') ADVANCE(444);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 325:
      if (lookahead == 'm') ADVANCE(446);
      END_STATE();
    case 326:
      if (lookahead == 'W') ADVANCE(447);
      END_STATE();
    case 327:
      if (lookahead == 'p') ADVANCE(448);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 329:
      if (lookahead == 'u') ADVANCE(450);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 338:
      if (lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 344:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(474);
      END_STATE();
    case 354:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_acos);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(477);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_asin);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_atan);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_bapz);
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_bdns);
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_bdse);
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 364:
      if (lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_beqz);
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_bgez);
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_bgtz);
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_blez);
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_bltz);
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_bnan);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_bnaz);
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_bnez);
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_brap);
      if (lookahead == 'z') ADVANCE(496);
      END_STATE();
    case 380:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_breq);
      if (lookahead == 'z') ADVANCE(499);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_brge);
      if (lookahead == 'z') ADVANCE(500);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_brgt);
      if (lookahead == 'z') ADVANCE(501);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_brle);
      if (lookahead == 'z') ADVANCE(502);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_brlt);
      if (lookahead == 'z') ADVANCE(503);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_brna);
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead == 'z') ADVANCE(505);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_brne);
      if (lookahead == 'z') ADVANCE(506);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_ceil);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(511);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_lbns);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_ninf);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_peek);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_pinf);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_sapz);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_sdns);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_sdse);
      END_STATE();
    case 405:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_seqz);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_sgez);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_sgtz);
      END_STATE();
    case 409:
      if (lookahead == 'p') ADVANCE(514);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_slez);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_sltz);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_snan);
      if (lookahead == 'z') ADVANCE(515);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_snaz);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_snez);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_sqrt);
      END_STATE();
    case 416:
      if (lookahead == 'c') ADVANCE(516);
      END_STATE();
    case 417:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 420:
      if (lookahead == 'g') ADVANCE(520);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 423:
      if (lookahead == 'M') ADVANCE(523);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(524);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(527);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 431:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 434:
      if (lookahead == 'W') ADVANCE(533);
      END_STATE();
    case 435:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 437:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 438:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 441:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(540);
      END_STATE();
    case 445:
      if (lookahead == 'b') ADVANCE(541);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(542);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == 'G') ADVANCE(548);
      if (lookahead == 'H') ADVANCE(549);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'A') ADVANCE(551);
      if (lookahead == 'G') ADVANCE(552);
      if (lookahead == 'P') ADVANCE(553);
      if (lookahead == 'R') ADVANCE(554);
      END_STATE();
    case 454:
      if (lookahead == 'b') ADVANCE(555);
      END_STATE();
    case 455:
      if (lookahead == 'u') ADVANCE(556);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'C') ADVANCE(558);
      if (lookahead == 'N') ADVANCE(559);
      if (lookahead == 'O') ADVANCE(560);
      if (lookahead == 'P') ADVANCE(561);
      if (lookahead == 'V') ADVANCE(562);
      if (lookahead == 'W') ADVANCE(563);
      END_STATE();
    case 458:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(566);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 462:
      if (lookahead == 'n') ADVANCE(568);
      END_STATE();
    case 463:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 464:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 466:
      if (lookahead == 'A') ADVANCE(572);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 471:
      if (lookahead == 'M') ADVANCE(576);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 473:
      if (lookahead == 'c') ADVANCE(578);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 475:
      if (lookahead == 'R') ADVANCE(579);
      END_STATE();
    case 476:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_bapal);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(581);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(582);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_beqal);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(584);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_bgeal);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_bgtal);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(586);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_bleal);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(587);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_bltal);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_bnaal);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_bneal);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_brapz);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_brdns);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_brdse);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_breqz);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_brgez);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_brgtz);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_brlez);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_brltz);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_brnan);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_brnaz);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_brnez);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 508:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_floor);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_round);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_sleep);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_snanz);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_trunc);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(597);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'R') ADVANCE(598);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(600);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(606);
      END_STATE();
    case 531:
      if (lookahead == 'C') ADVANCE(607);
      if (lookahead == 'Q') ADVANCE(608);
      if (lookahead == 'S') ADVANCE(609);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(610);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(612);
      END_STATE();
    case 536:
      if (lookahead == 'C') ADVANCE(613);
      if (lookahead == 'Q') ADVANCE(614);
      if (lookahead == 'S') ADVANCE(615);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 538:
      if (lookahead == 'R') ADVANCE(617);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 540:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(619);
      END_STATE();
    case 542:
      if (lookahead == 'm') ADVANCE(620);
      END_STATE();
    case 543:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 546:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 547:
      if (lookahead == 'f') ADVANCE(625);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 549:
      if (lookahead == 'a') ADVANCE(627);
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 551:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 552:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(632);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 555:
      if (lookahead == 'H') ADVANCE(634);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 558:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 559:
      if (lookahead == 'i') ADVANCE(638);
      END_STATE();
    case 560:
      if (lookahead == 'x') ADVANCE(639);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 563:
      if (lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(643);
      END_STATE();
    case 565:
      if (lookahead == 'H') ADVANCE(644);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 568:
      if (lookahead == 'F') ADVANCE(647);
      END_STATE();
    case 569:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 570:
      if (lookahead == 'g') ADVANCE(648);
      END_STATE();
    case 571:
      if (lookahead == 'I') ADVANCE(649);
      if (lookahead == 'S') ADVANCE(650);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 573:
      if (lookahead == 'P') ADVANCE(652);
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      END_STATE();
    case 574:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 575:
      if (lookahead == 'l') ADVANCE(654);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 578:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 579:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 580:
      if (lookahead == 'g') ADVANCE(659);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_bapzal);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_bdnsal);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_bdseal);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_beqzal);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_bgezal);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_bgtzal);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_blezal);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_bltzal);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_bnazal);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_bnezal);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 592:
      if (lookahead == 'd') ADVANCE(660);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(661);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 595:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 596:
      if (lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 597:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 598:
      if (lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 599:
      if (lookahead == 'm') ADVANCE(664);
      END_STATE();
    case 600:
      if (lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 601:
      if (lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 602:
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 603:
      if (lookahead == 'R') ADVANCE(668);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(669);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(670);
      END_STATE();
    case 606:
      if (lookahead == 'm') ADVANCE(671);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 608:
      if (lookahead == 'u') ADVANCE(673);
      END_STATE();
    case 609:
      if (lookahead == 'l') ADVANCE(674);
      END_STATE();
    case 610:
      if (lookahead == 'i') ADVANCE(675);
      END_STATE();
    case 611:
      if (lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 614:
      if (lookahead == 'u') ADVANCE(679);
      END_STATE();
    case 615:
      if (lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 616:
      if (lookahead == 'g') ADVANCE(681);
      END_STATE();
    case 617:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 619:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'W') ADVANCE(685);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(686);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(687);
      END_STATE();
    case 623:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 625:
      if (lookahead == 'f') ADVANCE(689);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(691);
      END_STATE();
    case 628:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(693);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(694);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(695);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 633:
      if (lookahead == 'q') ADVANCE(697);
      END_STATE();
    case 634:
      if (lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 635:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 636:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 637:
      if (lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(701);
      END_STATE();
    case 639:
      if (lookahead == 'y') ADVANCE(702);
      END_STATE();
    case 640:
      if (lookahead == 'l') ADVANCE(703);
      END_STATE();
    case 641:
      if (lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 644:
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 645:
      if (lookahead == 'H') ADVANCE(707);
      END_STATE();
    case 646:
      if (lookahead == 'd') ADVANCE(708);
      END_STATE();
    case 647:
      if (lookahead == 'u') ADVANCE(709);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(710);
      if (lookahead == 'O') ADVANCE(711);
      END_STATE();
    case 649:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(712);
      END_STATE();
    case 651:
      if (lookahead == 'g') ADVANCE(713);
      END_STATE();
    case 652:
      if (lookahead == 'a') ADVANCE(714);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(715);
      END_STATE();
    case 654:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 655:
      if (lookahead == 'l') ADVANCE(716);
      END_STATE();
    case 656:
      if (lookahead == 'y') ADVANCE(717);
      END_STATE();
    case 657:
      if (lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 658:
      if (lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 659:
      if (lookahead == 'G') ADVANCE(720);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_deg2rad);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_epsilon);
      END_STATE();
    case 662:
      if (lookahead == 's') ADVANCE(721);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(722);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 665:
      if (lookahead == 'b') ADVANCE(724);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 668:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 669:
      if (lookahead == 'c') ADVANCE(728);
      END_STATE();
    case 670:
      if (lookahead == 'L') ADVANCE(729);
      if (lookahead == 'S') ADVANCE(730);
      END_STATE();
    case 671:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 672:
      if (lookahead == 'u') ADVANCE(732);
      END_STATE();
    case 673:
      if (lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(736);
      END_STATE();
    case 677:
      if (lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 678:
      if (lookahead == 'u') ADVANCE(738);
      END_STATE();
    case 679:
      if (lookahead == 'a') ADVANCE(739);
      END_STATE();
    case 680:
      if (lookahead == 'o') ADVANCE(740);
      END_STATE();
    case 681:
      if (lookahead == 'a') ADVANCE(741);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(743);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(744);
      END_STATE();
    case 685:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 686:
      if (lookahead == 'h') ADVANCE(746);
      END_STATE();
    case 687:
      if (lookahead == 'H') ADVANCE(747);
      END_STATE();
    case 688:
      if (lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 689:
      if (lookahead == 'i') ADVANCE(749);
      END_STATE();
    case 690:
      if (lookahead == 'w') ADVANCE(750);
      END_STATE();
    case 691:
      if (lookahead == 'h') ADVANCE(751);
      END_STATE();
    case 692:
      if (lookahead == 'l') ADVANCE(752);
      END_STATE();
    case 693:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      END_STATE();
    case 694:
      if (lookahead == 'u') ADVANCE(753);
      END_STATE();
    case 695:
      if (lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 696:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 697:
      if (lookahead == 'u') ADVANCE(756);
      END_STATE();
    case 698:
      if (lookahead == 's') ADVANCE(757);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'A') ADVANCE(758);
      if (lookahead == 'E') ADVANCE(759);
      if (lookahead == 'I') ADVANCE(760);
      if (lookahead == 'O') ADVANCE(761);
      if (lookahead == 'S') ADVANCE(762);
      if (lookahead == 'W') ADVANCE(763);
      END_STATE();
    case 700:
      if (lookahead == 'b') ADVANCE(764);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 702:
      if (lookahead == 'g') ADVANCE(766);
      END_STATE();
    case 703:
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 704:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 705:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(770);
      END_STATE();
    case 707:
      if (lookahead == 'a') ADVANCE(771);
      END_STATE();
    case 708:
      if (lookahead == 'P') ADVANCE(772);
      END_STATE();
    case 709:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 710:
      if (lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 711:
      if (lookahead == 'u') ADVANCE(775);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(776);
      END_STATE();
    case 713:
      if (lookahead == 'l') ADVANCE(777);
      END_STATE();
    case 714:
      if (lookahead == 'd') ADVANCE(778);
      END_STATE();
    case 715:
      if (lookahead == 'u') ADVANCE(779);
      END_STATE();
    case 716:
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 717:
      if (lookahead == 'M') ADVANCE(781);
      if (lookahead == 'R') ADVANCE(782);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'R') ADVANCE(783);
      END_STATE();
    case 719:
      if (lookahead == 'c') ADVANCE(784);
      END_STATE();
    case 720:
      if (lookahead == 'a') ADVANCE(785);
      END_STATE();
    case 721:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 722:
      if (lookahead == 'i') ADVANCE(786);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(787);
      END_STATE();
    case 724:
      if (lookahead == 'l') ADVANCE(788);
      END_STATE();
    case 725:
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 726:
      if (lookahead == 'n') ADVANCE(790);
      END_STATE();
    case 727:
      if (lookahead == 's') ADVANCE(791);
      END_STATE();
    case 728:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 729:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 730:
      if (lookahead == 'p') ADVANCE(793);
      END_STATE();
    case 731:
      if (lookahead == 'n') ADVANCE(794);
      END_STATE();
    case 732:
      if (lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 733:
      if (lookahead == 'n') ADVANCE(796);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 735:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 736:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 737:
      if (lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 738:
      if (lookahead == 'n') ADVANCE(799);
      END_STATE();
    case 739:
      if (lookahead == 'n') ADVANCE(800);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(801);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(802);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(804);
      END_STATE();
    case 744:
      if (lookahead == 'I') ADVANCE(805);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(806);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 747:
      if (lookahead == 'a') ADVANCE(808);
      END_STATE();
    case 748:
      if (lookahead == 'a') ADVANCE(809);
      END_STATE();
    case 749:
      if (lookahead == 'c') ADVANCE(810);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(811);
      END_STATE();
    case 751:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(69);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(812);
      END_STATE();
    case 753:
      if (lookahead == 'a') ADVANCE(813);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(814);
      END_STATE();
    case 755:
      if (lookahead == 'n') ADVANCE(815);
      END_STATE();
    case 756:
      if (lookahead == 'i') ADVANCE(816);
      END_STATE();
    case 757:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 758:
      if (lookahead == 'i') ADVANCE(817);
      END_STATE();
    case 759:
      if (lookahead == 'f') ADVANCE(818);
      if (lookahead == 'x') ADVANCE(819);
      END_STATE();
    case 760:
      if (lookahead == 'n') ADVANCE(820);
      END_STATE();
    case 761:
      if (lookahead == 'u') ADVANCE(821);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 763:
      if (lookahead == 'a') ADVANCE(823);
      END_STATE();
    case 764:
      if (lookahead == 'o') ADVANCE(824);
      END_STATE();
    case 765:
      if (lookahead == 'o') ADVANCE(825);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 767:
      if (lookahead == 'u') ADVANCE(827);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(829);
      END_STATE();
    case 770:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 771:
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 772:
      if (lookahead == 'o') ADVANCE(831);
      END_STATE();
    case 773:
      if (lookahead == 'l') ADVANCE(832);
      END_STATE();
    case 774:
      if (lookahead == 'p') ADVANCE(833);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(834);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 778:
      if (lookahead == 'I') ADVANCE(836);
      END_STATE();
    case 779:
      if (lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 780:
      if (lookahead == 's') ADVANCE(838);
      END_STATE();
    case 781:
      if (lookahead == 'a') ADVANCE(839);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 783:
      if (lookahead == 'a') ADVANCE(841);
      END_STATE();
    case 784:
      if (lookahead == 'h') ADVANCE(842);
      END_STATE();
    case 785:
      if (lookahead == 's') ADVANCE(843);
      END_STATE();
    case 786:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 787:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(845);
      if (lookahead == 'L') ADVANCE(846);
      if (lookahead == 'O') ADVANCE(847);
      END_STATE();
    case 790:
      if (lookahead == 'R') ADVANCE(848);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 792:
      if (lookahead == 'v') ADVANCE(850);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(852);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(853);
      END_STATE();
    case 797:
      if (lookahead == 'H') ADVANCE(854);
      if (lookahead == 'O') ADVANCE(855);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'R') ADVANCE(856);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(857);
      END_STATE();
    case 801:
      if (lookahead == 'H') ADVANCE(858);
      if (lookahead == 'O') ADVANCE(859);
      END_STATE();
    case 802:
      if (lookahead == 'i') ADVANCE(860);
      END_STATE();
    case 803:
      if (lookahead == 'a') ADVANCE(861);
      END_STATE();
    case 804:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 805:
      if (lookahead == 'n') ADVANCE(862);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(863);
      END_STATE();
    case 807:
      if (lookahead == 'r') ADVANCE(864);
      END_STATE();
    case 808:
      if (lookahead == 's') ADVANCE(865);
      END_STATE();
    case 809:
      if (lookahead == 'l') ADVANCE(866);
      END_STATE();
    case 810:
      if (lookahead == 'i') ADVANCE(867);
      END_STATE();
    case 811:
      if (lookahead == 'h') ADVANCE(868);
      END_STATE();
    case 812:
      if (lookahead == 'h') ADVANCE(869);
      END_STATE();
    case 813:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 814:
      if (lookahead == 'a') ADVANCE(870);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(871);
      END_STATE();
    case 816:
      if (lookahead == 'r') ADVANCE(872);
      END_STATE();
    case 817:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 818:
      if (lookahead == 'f') ADVANCE(873);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 820:
      if (lookahead == 'p') ADVANCE(875);
      if (lookahead == 't') ADVANCE(876);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(877);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(878);
      END_STATE();
    case 823:
      if (lookahead == 's') ADVANCE(879);
      END_STATE();
    case 824:
      if (lookahead == 'n') ADVANCE(880);
      END_STATE();
    case 825:
      if (lookahead == 'g') ADVANCE(881);
      if (lookahead == 'u') ADVANCE(882);
      END_STATE();
    case 826:
      if (lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 828:
      if (lookahead == 'i') ADVANCE(885);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(886);
      if (lookahead == 'O') ADVANCE(887);
      END_STATE();
    case 830:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 831:
      if (lookahead == 'w') ADVANCE(888);
      END_STATE();
    case 832:
      if (lookahead == 'C') ADVANCE(889);
      END_STATE();
    case 833:
      if (lookahead == 'u') ADVANCE(890);
      END_STATE();
    case 834:
      if (lookahead == 'p') ADVANCE(891);
      END_STATE();
    case 835:
      if (lookahead == 'n') ADVANCE(892);
      END_STATE();
    case 836:
      if (lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 837:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(895);
      if (lookahead == 'O') ADVANCE(896);
      END_STATE();
    case 839:
      if (lookahead == 'g') ADVANCE(897);
      END_STATE();
    case 840:
      if (lookahead == 'l') ADVANCE(898);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(899);
      END_STATE();
    case 842:
      if (lookahead == 'i') ADVANCE(900);
      END_STATE();
    case 843:
      if (lookahead == 'E') ADVANCE(901);
      END_STATE();
    case 844:
      if (lookahead == 'G') ADVANCE(902);
      END_STATE();
    case 845:
      if (lookahead == 'n') ADVANCE(903);
      END_STATE();
    case 846:
      if (lookahead == 'i') ADVANCE(904);
      END_STATE();
    case 847:
      if (lookahead == 'u') ADVANCE(905);
      END_STATE();
    case 848:
      if (lookahead == 'a') ADVANCE(906);
      END_STATE();
    case 849:
      if (lookahead == 'a') ADVANCE(907);
      END_STATE();
    case 850:
      if (lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 851:
      if (lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 852:
      if (lookahead == 'E') ADVANCE(910);
      END_STATE();
    case 853:
      if (lookahead == 'i') ADVANCE(911);
      END_STATE();
    case 854:
      if (lookahead == 'a') ADVANCE(912);
      END_STATE();
    case 855:
      if (lookahead == 'c') ADVANCE(913);
      END_STATE();
    case 856:
      if (lookahead == 'a') ADVANCE(914);
      END_STATE();
    case 857:
      if (lookahead == 'i') ADVANCE(915);
      END_STATE();
    case 858:
      if (lookahead == 'a') ADVANCE(916);
      END_STATE();
    case 859:
      if (lookahead == 'c') ADVANCE(917);
      END_STATE();
    case 860:
      if (lookahead == 'o') ADVANCE(918);
      END_STATE();
    case 861:
      if (lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 862:
      if (lookahead == 'Q') ADVANCE(920);
      if (lookahead == 'V') ADVANCE(921);
      END_STATE();
    case 863:
      if (lookahead == 's') ADVANCE(922);
      END_STATE();
    case 864:
      if (lookahead == 'E') ADVANCE(923);
      END_STATE();
    case 865:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 866:
      if (lookahead == 'T') ADVANCE(924);
      END_STATE();
    case 867:
      if (lookahead == 'e') ADVANCE(925);
      END_STATE();
    case 868:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(69);
      END_STATE();
    case 869:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(69);
      END_STATE();
    case 870:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 871:
      if (lookahead == 'i') ADVANCE(927);
      END_STATE();
    case 872:
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 873:
      if (lookahead == 'i') ADVANCE(929);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 875:
      if (lookahead == 'u') ADVANCE(931);
      END_STATE();
    case 876:
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 877:
      if (lookahead == 'p') ADVANCE(933);
      END_STATE();
    case 878:
      if (lookahead == 't') ADVANCE(934);
      END_STATE();
    case 879:
      if (lookahead == 't') ADVANCE(935);
      END_STATE();
    case 880:
      if (lookahead == 'D') ADVANCE(936);
      END_STATE();
    case 881:
      if (lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 882:
      if (lookahead == 's') ADVANCE(938);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(939);
      if (lookahead == 'O') ADVANCE(940);
      END_STATE();
    case 884:
      if (lookahead == 'a') ADVANCE(941);
      END_STATE();
    case 885:
      if (lookahead == 'l') ADVANCE(942);
      END_STATE();
    case 886:
      if (lookahead == 'n') ADVANCE(943);
      END_STATE();
    case 887:
      if (lookahead == 'u') ADVANCE(944);
      END_STATE();
    case 888:
      if (lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 889:
      if (lookahead == 'o') ADVANCE(946);
      END_STATE();
    case 890:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 891:
      if (lookahead == 'u') ADVANCE(947);
      END_STATE();
    case 892:
      if (lookahead == 'g') ADVANCE(948);
      END_STATE();
    case 893:
      if (lookahead == 'd') ADVANCE(949);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'D') ADVANCE(950);
      if (lookahead == 'E') ADVANCE(951);
      if (lookahead == 'I') ADVANCE(952);
      if (lookahead == 'O') ADVANCE(953);
      if (lookahead == 'S') ADVANCE(954);
      END_STATE();
    case 895:
      if (lookahead == 'n') ADVANCE(955);
      END_STATE();
    case 896:
      if (lookahead == 'u') ADVANCE(956);
      END_STATE();
    case 897:
      if (lookahead == 'n') ADVANCE(957);
      END_STATE();
    case 898:
      if (lookahead == 'a') ADVANCE(958);
      END_STATE();
    case 899:
      if (lookahead == 'i') ADVANCE(959);
      END_STATE();
    case 900:
      if (lookahead == 'n') ADVANCE(960);
      END_STATE();
    case 901:
      if (lookahead == 'f') ADVANCE(961);
      END_STATE();
    case 902:
      if (lookahead == 'o') ADVANCE(962);
      END_STATE();
    case 903:
      if (lookahead == 'p') ADVANCE(963);
      END_STATE();
    case 904:
      if (lookahead == 'm') ADVANCE(964);
      END_STATE();
    case 905:
      if (lookahead == 't') ADVANCE(965);
      END_STATE();
    case 906:
      if (lookahead == 't') ADVANCE(966);
      END_STATE();
    case 907:
      if (lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 908:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 909:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 910:
      if (lookahead == 'f') ADVANCE(968);
      END_STATE();
    case 911:
      if (lookahead == 't') ADVANCE(969);
      END_STATE();
    case 912:
      if (lookahead == 's') ADVANCE(970);
      END_STATE();
    case 913:
      if (lookahead == 'c') ADVANCE(971);
      END_STATE();
    case 914:
      if (lookahead == 't') ADVANCE(972);
      END_STATE();
    case 915:
      if (lookahead == 't') ADVANCE(973);
      END_STATE();
    case 916:
      if (lookahead == 's') ADVANCE(974);
      END_STATE();
    case 917:
      if (lookahead == 'c') ADVANCE(975);
      END_STATE();
    case 918:
      if (lookahead == 'n') ADVANCE(976);
      END_STATE();
    case 919:
      if (lookahead == 'c') ADVANCE(977);
      END_STATE();
    case 920:
      if (lookahead == 'u') ADVANCE(978);
      END_STATE();
    case 921:
      if (lookahead == 'i') ADVANCE(979);
      END_STATE();
    case 922:
      if (lookahead == 'T') ADVANCE(980);
      END_STATE();
    case 923:
      if (lookahead == 'v') ADVANCE(981);
      END_STATE();
    case 924:
      if (lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 925:
      if (lookahead == 'n') ADVANCE(983);
      END_STATE();
    case 926:
      if (lookahead == 'i') ADVANCE(984);
      END_STATE();
    case 927:
      if (lookahead == 'a') ADVANCE(985);
      END_STATE();
    case 928:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 929:
      if (lookahead == 'c') ADVANCE(986);
      END_STATE();
    case 930:
      if (lookahead == 'r') ADVANCE(987);
      END_STATE();
    case 931:
      if (lookahead == 't') ADVANCE(988);
      END_STATE();
    case 932:
      if (lookahead == 'r') ADVANCE(989);
      END_STATE();
    case 933:
      if (lookahead == 'u') ADVANCE(990);
      END_STATE();
    case 934:
      if (lookahead == 'i') ADVANCE(991);
      END_STATE();
    case 935:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 936:
      if (lookahead == 'i') ADVANCE(992);
      END_STATE();
    case 937:
      if (lookahead == 'n') ADVANCE(993);
      END_STATE();
    case 938:
      if (lookahead == 'O') ADVANCE(994);
      END_STATE();
    case 939:
      if (lookahead == 'n') ADVANCE(995);
      END_STATE();
    case 940:
      if (lookahead == 'u') ADVANCE(996);
      END_STATE();
    case 941:
      if (lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 942:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 943:
      if (lookahead == 'p') ADVANCE(999);
      END_STATE();
    case 944:
      if (lookahead == 't') ADVANCE(1000);
      END_STATE();
    case 945:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 946:
      if (lookahead == 's') ADVANCE(1001);
      END_STATE();
    case 947:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 948:
      if (lookahead == 't') ADVANCE(1002);
      END_STATE();
    case 949:
      if (lookahead == 'e') ADVANCE(1003);
      END_STATE();
    case 950:
      if (lookahead == 'i') ADVANCE(1004);
      END_STATE();
    case 951:
      if (lookahead == 'x') ADVANCE(1005);
      END_STATE();
    case 952:
      if (lookahead == 'n') ADVANCE(1006);
      END_STATE();
    case 953:
      if (lookahead == 'u') ADVANCE(1007);
      END_STATE();
    case 954:
      if (lookahead == 'e') ADVANCE(1008);
      END_STATE();
    case 955:
      if (lookahead == 'p') ADVANCE(1009);
      END_STATE();
    case 956:
      if (lookahead == 't') ADVANCE(1010);
      END_STATE();
    case 957:
      if (lookahead == 'i') ADVANCE(1011);
      END_STATE();
    case 958:
      if (lookahead == 't') ADVANCE(1012);
      END_STATE();
    case 959:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 960:
      if (lookahead == 'g') ADVANCE(1013);
      END_STATE();
    case 961:
      if (lookahead == 'f') ADVANCE(1014);
      END_STATE();
    case 962:
      if (lookahead == 'o') ADVANCE(1015);
      END_STATE();
    case 963:
      if (lookahead == 'u') ADVANCE(1016);
      END_STATE();
    case 964:
      if (lookahead == 'i') ADVANCE(1017);
      END_STATE();
    case 965:
      if (lookahead == 'p') ADVANCE(1018);
      END_STATE();
    case 966:
      if (lookahead == 'i') ADVANCE(1019);
      END_STATE();
    case 967:
      if (lookahead == 'c') ADVANCE(1020);
      END_STATE();
    case 968:
      if (lookahead == 'f') ADVANCE(1021);
      END_STATE();
    case 969:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 970:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 971:
      if (lookahead == 'u') ADVANCE(1022);
      END_STATE();
    case 972:
      if (lookahead == 'i') ADVANCE(1023);
      END_STATE();
    case 973:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 974:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 975:
      if (lookahead == 'u') ADVANCE(1024);
      END_STATE();
    case 976:
      if (lookahead == 'P') ADVANCE(1025);
      END_STATE();
    case 977:
      if (lookahead == 'h') ADVANCE(1026);
      END_STATE();
    case 978:
      if (lookahead == 'e') ADVANCE(1027);
      END_STATE();
    case 979:
      if (lookahead == 'c') ADVANCE(1028);
      END_STATE();
    case 980:
      if (lookahead == 'o') ADVANCE(1029);
      END_STATE();
    case 981:
      if (lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 982:
      if (lookahead == 'm') ADVANCE(1031);
      END_STATE();
    case 983:
      if (lookahead == 'c') ADVANCE(1032);
      END_STATE();
    case 984:
      if (lookahead == 'o') ADVANCE(1033);
      END_STATE();
    case 985:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 986:
      if (lookahead == 'i') ADVANCE(1034);
      END_STATE();
    case 987:
      if (lookahead == 'n') ADVANCE(1035);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 989:
      if (lookahead == 'n') ADVANCE(1036);
      END_STATE();
    case 990:
      if (lookahead == 't') ADVANCE(1037);
      END_STATE();
    case 991:
      if (lookahead == 'n') ADVANCE(1038);
      END_STATE();
    case 992:
      if (lookahead == 'o') ADVANCE(1039);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1040);
      if (lookahead == 'O') ADVANCE(1041);
      END_STATE();
    case 994:
      if (lookahead == 'x') ADVANCE(1042);
      END_STATE();
    case 995:
      if (lookahead == 'p') ADVANCE(1043);
      END_STATE();
    case 996:
      if (lookahead == 't') ADVANCE(1044);
      END_STATE();
    case 997:
      if (lookahead == 't') ADVANCE(1045);
      END_STATE();
    case 998:
      if (lookahead == 's') ADVANCE(1046);
      END_STATE();
    case 999:
      if (lookahead == 'u') ADVANCE(1047);
      END_STATE();
    case 1000:
      if (lookahead == 'p') ADVANCE(1048);
      END_STATE();
    case 1001:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 1002:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 1003:
      if (lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 1004:
      if (lookahead == 'f') ADVANCE(1049);
      END_STATE();
    case 1005:
      if (lookahead == 't') ADVANCE(1050);
      END_STATE();
    case 1006:
      if (lookahead == 'p') ADVANCE(1051);
      END_STATE();
    case 1007:
      if (lookahead == 't') ADVANCE(1052);
      END_STATE();
    case 1008:
      if (lookahead == 't') ADVANCE(1053);
      END_STATE();
    case 1009:
      if (lookahead == 'u') ADVANCE(1054);
      END_STATE();
    case 1010:
      if (lookahead == 'p') ADVANCE(1055);
      END_STATE();
    case 1011:
      if (lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 1012:
      if (lookahead == 'i') ADVANCE(1057);
      END_STATE();
    case 1013:
      if (lookahead == 'C') ADVANCE(1058);
      END_STATE();
    case 1014:
      if (lookahead == 'i') ADVANCE(1059);
      END_STATE();
    case 1015:
      if (lookahead == 'd') ADVANCE(1060);
      END_STATE();
    case 1016:
      if (lookahead == 't') ADVANCE(1061);
      END_STATE();
    case 1017:
      if (lookahead == 't') ADVANCE(1062);
      END_STATE();
    case 1018:
      if (lookahead == 'u') ADVANCE(1063);
      END_STATE();
    case 1019:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 1020:
      if (lookahead == 'h') ADVANCE(1064);
      END_STATE();
    case 1021:
      if (lookahead == 'i') ADVANCE(1065);
      END_STATE();
    case 1022:
      if (lookahead == 'p') ADVANCE(1066);
      END_STATE();
    case 1023:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 1024:
      if (lookahead == 'p') ADVANCE(1067);
      END_STATE();
    case 1025:
      if (lookahead == 'r') ADVANCE(1068);
      END_STATE();
    case 1026:
      if (lookahead == 'R') ADVANCE(1069);
      END_STATE();
    case 1027:
      if (lookahead == 'u') ADVANCE(1070);
      END_STATE();
    case 1028:
      if (lookahead == 'i') ADVANCE(1071);
      END_STATE();
    case 1029:
      if (lookahead == 'C') ADVANCE(1072);
      END_STATE();
    case 1030:
      if (lookahead == 'n') ADVANCE(1073);
      END_STATE();
    case 1031:
      if (lookahead == 'p') ADVANCE(1074);
      END_STATE();
    case 1032:
      if (lookahead == 'y') ADVANCE(1075);
      END_STATE();
    case 1033:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 1034:
      if (lookahead == 'e') ADVANCE(1076);
      END_STATE();
    case 1035:
      if (lookahead == 'a') ADVANCE(1077);
      END_STATE();
    case 1036:
      if (lookahead == 'a') ADVANCE(1078);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1038:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 1039:
      if (lookahead == 'x') ADVANCE(1079);
      END_STATE();
    case 1040:
      if (lookahead == 'n') ADVANCE(1080);
      END_STATE();
    case 1041:
      if (lookahead == 'u') ADVANCE(1081);
      END_STATE();
    case 1042:
      if (lookahead == 'i') ADVANCE(1082);
      END_STATE();
    case 1043:
      if (lookahead == 'u') ADVANCE(1083);
      END_STATE();
    case 1044:
      if (lookahead == 'p') ADVANCE(1084);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1085);
      if (lookahead == 'O') ADVANCE(1086);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1087);
      if (lookahead == 'O') ADVANCE(1088);
      END_STATE();
    case 1047:
      if (lookahead == 't') ADVANCE(1089);
      END_STATE();
    case 1048:
      if (lookahead == 'u') ADVANCE(1090);
      END_STATE();
    case 1049:
      if (lookahead == 'f') ADVANCE(1091);
      END_STATE();
    case 1050:
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 1051:
      if (lookahead == 'u') ADVANCE(1093);
      END_STATE();
    case 1052:
      if (lookahead == 'p') ADVANCE(1094);
      END_STATE();
    case 1053:
      if (lookahead == 't') ADVANCE(1095);
      END_STATE();
    case 1054:
      if (lookahead == 't') ADVANCE(1096);
      END_STATE();
    case 1055:
      if (lookahead == 'u') ADVANCE(1097);
      END_STATE();
    case 1056:
      if (lookahead == 'u') ADVANCE(1098);
      END_STATE();
    case 1057:
      if (lookahead == 'v') ADVANCE(1099);
      END_STATE();
    case 1058:
      if (lookahead == 'o') ADVANCE(1100);
      END_STATE();
    case 1059:
      if (lookahead == 'c') ADVANCE(1101);
      END_STATE();
    case 1060:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1062:
      if (lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 1063:
      if (lookahead == 't') ADVANCE(1103);
      END_STATE();
    case 1064:
      if (lookahead == 'P') ADVANCE(1104);
      END_STATE();
    case 1065:
      if (lookahead == 'c') ADVANCE(1105);
      END_STATE();
    case 1066:
      if (lookahead == 'a') ADVANCE(1106);
      END_STATE();
    case 1067:
      if (lookahead == 'a') ADVANCE(1107);
      END_STATE();
    case 1068:
      if (lookahead == 'o') ADVANCE(1108);
      END_STATE();
    case 1069:
      if (lookahead == 'e') ADVANCE(1109);
      END_STATE();
    case 1070:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 1071:
      if (lookahead == 'n') ADVANCE(1110);
      END_STATE();
    case 1072:
      if (lookahead == 'o') ADVANCE(1111);
      END_STATE();
    case 1073:
      if (lookahead == 't') ADVANCE(1112);
      END_STATE();
    case 1074:
      if (lookahead == 'e') ADVANCE(1113);
      END_STATE();
    case 1075:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(69);
      END_STATE();
    case 1076:
      if (lookahead == 'n') ADVANCE(1114);
      END_STATE();
    case 1077:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 1078:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 1079:
      if (lookahead == 'i') ADVANCE(1115);
      END_STATE();
    case 1080:
      if (lookahead == 'p') ADVANCE(1116);
      END_STATE();
    case 1081:
      if (lookahead == 't') ADVANCE(1117);
      END_STATE();
    case 1082:
      if (lookahead == 'd') ADVANCE(1118);
      END_STATE();
    case 1083:
      if (lookahead == 't') ADVANCE(1119);
      END_STATE();
    case 1084:
      if (lookahead == 'u') ADVANCE(1120);
      END_STATE();
    case 1085:
      if (lookahead == 'n') ADVANCE(1121);
      END_STATE();
    case 1086:
      if (lookahead == 'u') ADVANCE(1122);
      END_STATE();
    case 1087:
      if (lookahead == 'n') ADVANCE(1123);
      END_STATE();
    case 1088:
      if (lookahead == 'u') ADVANCE(1124);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1090:
      if (lookahead == 't') ADVANCE(1125);
      END_STATE();
    case 1091:
      if (lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 1092:
      if (lookahead == 'r') ADVANCE(1127);
      END_STATE();
    case 1093:
      if (lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 1094:
      if (lookahead == 'u') ADVANCE(1129);
      END_STATE();
    case 1095:
      if (lookahead == 'i') ADVANCE(1130);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1097:
      if (lookahead == 't') ADVANCE(1131);
      END_STATE();
    case 1098:
      if (lookahead == 'd') ADVANCE(1132);
      END_STATE();
    case 1099:
      if (lookahead == 'e') ADVANCE(1133);
      END_STATE();
    case 1100:
      if (lookahead == 'n') ADVANCE(1134);
      END_STATE();
    case 1101:
      if (lookahead == 'i') ADVANCE(1135);
      END_STATE();
    case 1102:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1104:
      if (lookahead == 'o') ADVANCE(1136);
      END_STATE();
    case 1105:
      if (lookahead == 'i') ADVANCE(1137);
      END_STATE();
    case 1106:
      if (lookahead == 'n') ADVANCE(1138);
      END_STATE();
    case 1107:
      if (lookahead == 'n') ADVANCE(1139);
      END_STATE();
    case 1108:
      if (lookahead == 'g') ADVANCE(1140);
      END_STATE();
    case 1109:
      if (lookahead == 'q') ADVANCE(1141);
      END_STATE();
    case 1110:
      if (lookahead == 'i') ADVANCE(1142);
      END_STATE();
    case 1111:
      if (lookahead == 'n') ADVANCE(1143);
      END_STATE();
    case 1112:
      if (lookahead == 'T') ADVANCE(1144);
      END_STATE();
    case 1113:
      if (lookahead == 'r') ADVANCE(1145);
      END_STATE();
    case 1114:
      if (lookahead == 'c') ADVANCE(1146);
      END_STATE();
    case 1115:
      if (lookahead == 'd') ADVANCE(1147);
      END_STATE();
    case 1116:
      if (lookahead == 'u') ADVANCE(1148);
      END_STATE();
    case 1117:
      if (lookahead == 'p') ADVANCE(1149);
      END_STATE();
    case 1118:
      if (lookahead == 'e') ADVANCE(1150);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1120:
      if (lookahead == 't') ADVANCE(1151);
      END_STATE();
    case 1121:
      if (lookahead == 'p') ADVANCE(1152);
      END_STATE();
    case 1122:
      if (lookahead == 't') ADVANCE(1153);
      END_STATE();
    case 1123:
      if (lookahead == 'p') ADVANCE(1154);
      END_STATE();
    case 1124:
      if (lookahead == 't') ADVANCE(1155);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1126:
      if (lookahead == 'r') ADVANCE(1156);
      END_STATE();
    case 1127:
      if (lookahead == 'n') ADVANCE(1157);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1129:
      if (lookahead == 't') ADVANCE(1158);
      END_STATE();
    case 1130:
      if (lookahead == 'n') ADVANCE(1159);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1132:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 1133:
      if (('X' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      END_STATE();
    case 1134:
      if (lookahead == 't') ADVANCE(1160);
      END_STATE();
    case 1135:
      if (lookahead == 'e') ADVANCE(1161);
      END_STATE();
    case 1136:
      if (lookahead == 'd') ADVANCE(1162);
      END_STATE();
    case 1137:
      if (lookahead == 'e') ADVANCE(1163);
      END_STATE();
    case 1138:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 1139:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 1140:
      if (lookahead == 'r') ADVANCE(1164);
      END_STATE();
    case 1141:
      if (lookahead == 'u') ADVANCE(1165);
      END_STATE();
    case 1142:
      if (lookahead == 't') ADVANCE(1166);
      END_STATE();
    case 1143:
      if (lookahead == 't') ADVANCE(1167);
      END_STATE();
    case 1144:
      if (lookahead == 'i') ADVANCE(1168);
      END_STATE();
    case 1145:
      if (lookahead == 'a') ADVANCE(1169);
      END_STATE();
    case 1146:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 1147:
      if (lookahead == 'e') ADVANCE(1170);
      END_STATE();
    case 1148:
      if (lookahead == 't') ADVANCE(1171);
      END_STATE();
    case 1149:
      if (lookahead == 'u') ADVANCE(1172);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1173);
      if (lookahead == 'O') ADVANCE(1174);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1152:
      if (lookahead == 'u') ADVANCE(1175);
      END_STATE();
    case 1153:
      if (lookahead == 'p') ADVANCE(1176);
      END_STATE();
    case 1154:
      if (lookahead == 'u') ADVANCE(1177);
      END_STATE();
    case 1155:
      if (lookahead == 'p') ADVANCE(1178);
      END_STATE();
    case 1156:
      if (lookahead == 'e') ADVANCE(1179);
      END_STATE();
    case 1157:
      if (lookahead == 'a') ADVANCE(1180);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1159:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 1160:
      if (lookahead == 'a') ADVANCE(1181);
      END_STATE();
    case 1161:
      if (lookahead == 'n') ADVANCE(1182);
      END_STATE();
    case 1162:
      if (lookahead == 'T') ADVANCE(1183);
      END_STATE();
    case 1163:
      if (lookahead == 'n') ADVANCE(1184);
      END_STATE();
    case 1164:
      if (lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 1165:
      if (lookahead == 'i') ADVANCE(1186);
      END_STATE();
    case 1166:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 1167:
      if (lookahead == 'a') ADVANCE(1187);
      END_STATE();
    case 1168:
      if (lookahead == 'm') ADVANCE(1188);
      END_STATE();
    case 1169:
      if (lookahead == 't') ADVANCE(1189);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == 'I') ADVANCE(1190);
      if (lookahead == 'O') ADVANCE(1191);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1172:
      if (lookahead == 't') ADVANCE(1192);
      END_STATE();
    case 1173:
      if (lookahead == 'n') ADVANCE(1193);
      END_STATE();
    case 1174:
      if (lookahead == 'u') ADVANCE(1194);
      END_STATE();
    case 1175:
      if (lookahead == 't') ADVANCE(1195);
      END_STATE();
    case 1176:
      if (lookahead == 'u') ADVANCE(1196);
      END_STATE();
    case 1177:
      if (lookahead == 't') ADVANCE(1197);
      END_STATE();
    case 1178:
      if (lookahead == 'u') ADVANCE(1198);
      END_STATE();
    case 1179:
      if (lookahead == 'n') ADVANCE(1199);
      END_STATE();
    case 1180:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 1181:
      if (lookahead == 'c') ADVANCE(1200);
      END_STATE();
    case 1182:
      if (lookahead == 'c') ADVANCE(1201);
      END_STATE();
    case 1183:
      if (lookahead == 'y') ADVANCE(1202);
      END_STATE();
    case 1184:
      if (lookahead == 'c') ADVANCE(1203);
      END_STATE();
    case 1185:
      if (lookahead == 's') ADVANCE(1204);
      END_STATE();
    case 1186:
      if (lookahead == 'r') ADVANCE(1205);
      END_STATE();
    case 1187:
      if (lookahead == 'c') ADVANCE(1206);
      END_STATE();
    case 1188:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 1189:
      if (lookahead == 'u') ADVANCE(1207);
      END_STATE();
    case 1190:
      if (lookahead == 'n') ADVANCE(1208);
      END_STATE();
    case 1191:
      if (lookahead == 'u') ADVANCE(1209);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1193:
      if (lookahead == 'p') ADVANCE(1210);
      END_STATE();
    case 1194:
      if (lookahead == 't') ADVANCE(1211);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1196:
      if (lookahead == 't') ADVANCE(1212);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1198:
      if (lookahead == 't') ADVANCE(1213);
      END_STATE();
    case 1199:
      if (lookahead == 't') ADVANCE(1214);
      END_STATE();
    case 1200:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 1201:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 1202:
      if (lookahead == 'p') ADVANCE(1215);
      END_STATE();
    case 1203:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 1204:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 1205:
      if (lookahead == 'e') ADVANCE(1216);
      END_STATE();
    case 1206:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 1207:
      if (lookahead == 'r') ADVANCE(1217);
      END_STATE();
    case 1208:
      if (lookahead == 'p') ADVANCE(1218);
      END_STATE();
    case 1209:
      if (lookahead == 't') ADVANCE(1219);
      END_STATE();
    case 1210:
      if (lookahead == 'u') ADVANCE(1220);
      END_STATE();
    case 1211:
      if (lookahead == 'p') ADVANCE(1221);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1214:
      if (lookahead == 'i') ADVANCE(1222);
      END_STATE();
    case 1215:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 1216:
      if (lookahead == 'd') ADVANCE(1223);
      END_STATE();
    case 1217:
      if (lookahead == 'e') ADVANCE(1224);
      END_STATE();
    case 1218:
      if (lookahead == 'u') ADVANCE(1225);
      END_STATE();
    case 1219:
      if (lookahead == 'p') ADVANCE(1226);
      END_STATE();
    case 1220:
      if (lookahead == 't') ADVANCE(1227);
      END_STATE();
    case 1221:
      if (lookahead == 'u') ADVANCE(1228);
      END_STATE();
    case 1222:
      if (lookahead == 'a') ADVANCE(1229);
      END_STATE();
    case 1223:
      if (lookahead == 'P') ADVANCE(1230);
      END_STATE();
    case 1224:
      if (lookahead == 'E') ADVANCE(1231);
      END_STATE();
    case 1225:
      if (lookahead == 't') ADVANCE(1232);
      END_STATE();
    case 1226:
      if (lookahead == 'u') ADVANCE(1233);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1228:
      if (lookahead == 't') ADVANCE(1234);
      END_STATE();
    case 1229:
      if (lookahead == 'l') ADVANCE(1235);
      END_STATE();
    case 1230:
      if (lookahead == 'o') ADVANCE(1236);
      END_STATE();
    case 1231:
      if (lookahead == 'f') ADVANCE(1237);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1233:
      if (lookahead == 't') ADVANCE(1238);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1235:
      if (lookahead == 'E') ADVANCE(1239);
      END_STATE();
    case 1236:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 1237:
      if (lookahead == 'f') ADVANCE(1240);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_logictype);
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 1239:
      if (lookahead == 'f') ADVANCE(1241);
      END_STATE();
    case 1240:
      if (lookahead == 'i') ADVANCE(1242);
      END_STATE();
    case 1241:
      if (lookahead == 'f') ADVANCE(1243);
      END_STATE();
    case 1242:
      if (lookahead == 'c') ADVANCE(1244);
      END_STATE();
    case 1243:
      if (lookahead == 'i') ADVANCE(1245);
      END_STATE();
    case 1244:
      if (lookahead == 'i') ADVANCE(1246);
      END_STATE();
    case 1245:
      if (lookahead == 'c') ADVANCE(1247);
      END_STATE();
    case 1246:
      if (lookahead == 'e') ADVANCE(1248);
      END_STATE();
    case 1247:
      if (lookahead == 'i') ADVANCE(1249);
      END_STATE();
    case 1248:
      if (lookahead == 'n') ADVANCE(1250);
      END_STATE();
    case 1249:
      if (lookahead == 'e') ADVANCE(1251);
      END_STATE();
    case 1250:
      if (lookahead == 'c') ADVANCE(1252);
      END_STATE();
    case 1251:
      if (lookahead == 'n') ADVANCE(1253);
      END_STATE();
    case 1252:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 1253:
      if (lookahead == 'c') ADVANCE(1254);
      END_STATE();
    case 1254:
      if (lookahead == 'y') ADVANCE(69);
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
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
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
    [anon_sym_bnan] = ACTIONS(1),
    [anon_sym_brnan] = ACTIONS(1),
    [anon_sym_lbn] = ACTIONS(1),
    [anon_sym_lbns] = ACTIONS(1),
    [anon_sym_lbs] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_sbn] = ACTIONS(1),
    [anon_sym_sbs] = ACTIONS(1),
    [anon_sym_sla] = ACTIONS(1),
    [anon_sym_sll] = ACTIONS(1),
    [anon_sym_sra] = ACTIONS(1),
    [anon_sym_srl] = ACTIONS(1),
    [anon_sym_snan] = ACTIONS(1),
    [anon_sym_snanz] = ACTIONS(1),
    [anon_sym_ss] = ACTIONS(1),
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
    [sym_source_file] = STATE(29),
    [sym_line] = STATE(6),
    [sym_label] = STATE(21),
    [sym_newline] = STATE(7),
    [sym_comment] = STATE(24),
    [sym_instruction] = STATE(21),
    [sym_operation] = STATE(12),
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
    [anon_sym_bnan] = ACTIONS(15),
    [anon_sym_brnan] = ACTIONS(15),
    [anon_sym_lbn] = ACTIONS(15),
    [anon_sym_lbns] = ACTIONS(15),
    [anon_sym_lbs] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_sbn] = ACTIONS(15),
    [anon_sym_sbs] = ACTIONS(15),
    [anon_sym_sla] = ACTIONS(15),
    [anon_sym_sll] = ACTIONS(15),
    [anon_sym_sra] = ACTIONS(15),
    [anon_sym_srl] = ACTIONS(15),
    [anon_sym_snan] = ACTIONS(15),
    [anon_sym_snanz] = ACTIONS(15),
    [anon_sym_ss] = ACTIONS(15),
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
    [sym_label] = STATE(21),
    [sym_newline] = STATE(7),
    [sym_comment] = STATE(24),
    [sym_instruction] = STATE(21),
    [sym_operation] = STATE(12),
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
    [anon_sym_bnan] = ACTIONS(31),
    [anon_sym_brnan] = ACTIONS(31),
    [anon_sym_lbn] = ACTIONS(31),
    [anon_sym_lbns] = ACTIONS(31),
    [anon_sym_lbs] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_sbn] = ACTIONS(31),
    [anon_sym_sbs] = ACTIONS(31),
    [anon_sym_sla] = ACTIONS(31),
    [anon_sym_sll] = ACTIONS(31),
    [anon_sym_sra] = ACTIONS(31),
    [anon_sym_srl] = ACTIONS(31),
    [anon_sym_snan] = ACTIONS(31),
    [anon_sym_snanz] = ACTIONS(31),
    [anon_sym_ss] = ACTIONS(31),
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
    [sym_label] = STATE(21),
    [sym_newline] = STATE(7),
    [sym_comment] = STATE(24),
    [sym_instruction] = STATE(21),
    [sym_operation] = STATE(12),
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
    [anon_sym_bnan] = ACTIONS(15),
    [anon_sym_brnan] = ACTIONS(15),
    [anon_sym_lbn] = ACTIONS(15),
    [anon_sym_lbns] = ACTIONS(15),
    [anon_sym_lbs] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_sbn] = ACTIONS(15),
    [anon_sym_sbs] = ACTIONS(15),
    [anon_sym_sla] = ACTIONS(15),
    [anon_sym_sll] = ACTIONS(15),
    [anon_sym_sra] = ACTIONS(15),
    [anon_sym_srl] = ACTIONS(15),
    [anon_sym_snan] = ACTIONS(15),
    [anon_sym_snanz] = ACTIONS(15),
    [anon_sym_ss] = ACTIONS(15),
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
    [anon_sym_bnan] = ACTIONS(38),
    [anon_sym_brnan] = ACTIONS(38),
    [anon_sym_lbn] = ACTIONS(38),
    [anon_sym_lbns] = ACTIONS(38),
    [anon_sym_lbs] = ACTIONS(38),
    [anon_sym_not] = ACTIONS(38),
    [anon_sym_sbn] = ACTIONS(38),
    [anon_sym_sbs] = ACTIONS(38),
    [anon_sym_sla] = ACTIONS(38),
    [anon_sym_sll] = ACTIONS(38),
    [anon_sym_sra] = ACTIONS(38),
    [anon_sym_srl] = ACTIONS(38),
    [anon_sym_snan] = ACTIONS(38),
    [anon_sym_snanz] = ACTIONS(38),
    [anon_sym_ss] = ACTIONS(38),
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
    [anon_sym_bnan] = ACTIONS(42),
    [anon_sym_brnan] = ACTIONS(42),
    [anon_sym_lbn] = ACTIONS(42),
    [anon_sym_lbns] = ACTIONS(42),
    [anon_sym_lbs] = ACTIONS(42),
    [anon_sym_not] = ACTIONS(42),
    [anon_sym_sbn] = ACTIONS(42),
    [anon_sym_sbs] = ACTIONS(42),
    [anon_sym_sla] = ACTIONS(42),
    [anon_sym_sll] = ACTIONS(42),
    [anon_sym_sra] = ACTIONS(42),
    [anon_sym_srl] = ACTIONS(42),
    [anon_sym_snan] = ACTIONS(42),
    [anon_sym_snanz] = ACTIONS(42),
    [anon_sym_ss] = ACTIONS(42),
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
    [anon_sym_bnan] = ACTIONS(46),
    [anon_sym_brnan] = ACTIONS(46),
    [anon_sym_lbn] = ACTIONS(46),
    [anon_sym_lbns] = ACTIONS(46),
    [anon_sym_lbs] = ACTIONS(46),
    [anon_sym_not] = ACTIONS(46),
    [anon_sym_sbn] = ACTIONS(46),
    [anon_sym_sbs] = ACTIONS(46),
    [anon_sym_sla] = ACTIONS(46),
    [anon_sym_sll] = ACTIONS(46),
    [anon_sym_sra] = ACTIONS(46),
    [anon_sym_srl] = ACTIONS(46),
    [anon_sym_snan] = ACTIONS(46),
    [anon_sym_snanz] = ACTIONS(46),
    [anon_sym_ss] = ACTIONS(46),
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
    [anon_sym_bnan] = ACTIONS(50),
    [anon_sym_brnan] = ACTIONS(50),
    [anon_sym_lbn] = ACTIONS(50),
    [anon_sym_lbns] = ACTIONS(50),
    [anon_sym_lbs] = ACTIONS(50),
    [anon_sym_not] = ACTIONS(50),
    [anon_sym_sbn] = ACTIONS(50),
    [anon_sym_sbs] = ACTIONS(50),
    [anon_sym_sla] = ACTIONS(50),
    [anon_sym_sll] = ACTIONS(50),
    [anon_sym_sra] = ACTIONS(50),
    [anon_sym_srl] = ACTIONS(50),
    [anon_sym_snan] = ACTIONS(50),
    [anon_sym_snanz] = ACTIONS(50),
    [anon_sym_ss] = ACTIONS(50),
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
    [anon_sym_bnan] = ACTIONS(54),
    [anon_sym_brnan] = ACTIONS(54),
    [anon_sym_lbn] = ACTIONS(54),
    [anon_sym_lbns] = ACTIONS(54),
    [anon_sym_lbs] = ACTIONS(54),
    [anon_sym_not] = ACTIONS(54),
    [anon_sym_sbn] = ACTIONS(54),
    [anon_sym_sbs] = ACTIONS(54),
    [anon_sym_sla] = ACTIONS(54),
    [anon_sym_sll] = ACTIONS(54),
    [anon_sym_sra] = ACTIONS(54),
    [anon_sym_srl] = ACTIONS(54),
    [anon_sym_snan] = ACTIONS(54),
    [anon_sym_snanz] = ACTIONS(54),
    [anon_sym_ss] = ACTIONS(54),
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
  [0] = 14,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_COLON,
    ACTIONS(62), 1,
      anon_sym_CR,
    ACTIONS(66), 1,
      sym_device,
    ACTIONS(70), 1,
      anon_sym_HASH_LPAREN_DQUOTE,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    STATE(13), 1,
      aux_sym_instruction_repeat1,
    STATE(17), 1,
      sym_operand,
    ACTIONS(64), 2,
      sym_register,
      sym_logictype,
    STATE(15), 2,
      sym_device_spec,
      sym_number,
    STATE(16), 2,
      sym__constant,
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
  [54] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_CR,
    ACTIONS(84), 1,
      sym_device,
    ACTIONS(90), 1,
      anon_sym_HASH_LPAREN_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_number_token1,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(17), 1,
      sym_operand,
    ACTIONS(81), 2,
      sym_register,
      sym_logictype,
    STATE(15), 2,
      sym_device_spec,
      sym_number,
    STATE(16), 2,
      sym__constant,
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
  [105] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(66), 1,
      sym_device,
    ACTIONS(70), 1,
      anon_sym_HASH_LPAREN_DQUOTE,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    ACTIONS(98), 1,
      anon_sym_CR,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(17), 1,
      sym_operand,
    ACTIONS(64), 2,
      sym_register,
      sym_logictype,
    STATE(15), 2,
      sym_device_spec,
      sym_number,
    STATE(16), 2,
      sym__constant,
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
  [156] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(66), 1,
      sym_device,
    ACTIONS(70), 1,
      anon_sym_HASH_LPAREN_DQUOTE,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    ACTIONS(102), 1,
      anon_sym_CR,
    STATE(11), 1,
      aux_sym_instruction_repeat1,
    STATE(17), 1,
      sym_operand,
    ACTIONS(64), 2,
      sym_register,
      sym_logictype,
    STATE(15), 2,
      sym_device_spec,
      sym_number,
    STATE(16), 2,
      sym__constant,
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
  [207] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(66), 1,
      sym_device,
    ACTIONS(70), 1,
      anon_sym_HASH_LPAREN_DQUOTE,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    ACTIONS(106), 1,
      anon_sym_CR,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    STATE(17), 1,
      sym_operand,
    ACTIONS(64), 2,
      sym_register,
      sym_logictype,
    STATE(15), 2,
      sym_device_spec,
      sym_number,
    STATE(16), 2,
      sym__constant,
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
  [258] = 4,
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
      sym_logictype,
    ACTIONS(108), 9,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [286] = 3,
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
      sym_logictype,
    ACTIONS(114), 9,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [311] = 3,
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
      sym_logictype,
    ACTIONS(118), 9,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [336] = 3,
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
      sym_logictype,
    ACTIONS(122), 9,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [361] = 3,
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
      sym_logictype,
    ACTIONS(126), 9,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [386] = 3,
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
      sym_logictype,
    ACTIONS(130), 9,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [411] = 3,
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
      sym_logictype,
    ACTIONS(134), 9,
      anon_sym_CR,
      sym_identifier,
      anon_sym_nan,
      anon_sym_pinf,
      anon_sym_ninf,
      anon_sym_pi,
      anon_sym_deg2rad,
      anon_sym_rad2deg,
      anon_sym_epsilon,
  [436] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    STATE(8), 1,
      sym_newline,
    STATE(23), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [456] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(140), 1,
      anon_sym_CR,
    ACTIONS(138), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
  [468] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    STATE(5), 1,
      sym_newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [482] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      anon_sym_CR,
    STATE(8), 1,
      sym_newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [496] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(144), 1,
      anon_sym_CR,
    ACTIONS(142), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [507] = 2,
    ACTIONS(146), 1,
      sym__whitespace,
    ACTIONS(148), 1,
      sym_preproc_string,
  [514] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(150), 1,
      sym_network_index,
  [521] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(152), 1,
      anon_sym_DQUOTE_RPAREN,
  [528] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 54,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 258,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 311,
  [SMALL_STATE(17)] = 336,
  [SMALL_STATE(18)] = 361,
  [SMALL_STATE(19)] = 386,
  [SMALL_STATE(20)] = 411,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 456,
  [SMALL_STATE(23)] = 468,
  [SMALL_STATE(24)] = 482,
  [SMALL_STATE(25)] = 496,
  [SMALL_STATE(26)] = 507,
  [SMALL_STATE(27)] = 514,
  [SMALL_STATE(28)] = 521,
  [SMALL_STATE(29)] = 528,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
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
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(15),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(14),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(16),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(26),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, .production_id = 7), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 6),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_spec, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_spec, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1, .production_id = 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_spec, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_spec, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_preproc, 3, .production_id = 8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_preproc, 3, .production_id = 8),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
