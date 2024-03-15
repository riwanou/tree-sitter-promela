#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_proctype = 1,
  anon_sym_init = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_never = 5,
  anon_sym_trace = 6,
  anon_sym_typedef = 7,
  anon_sym_mtype = 8,
  anon_sym_EQ = 9,
  anon_sym_COMMA = 10,
  anon_sym_SEMI = 11,
  anon_sym_unsigned = 12,
  anon_sym_COLON = 13,
  anon_sym_bit = 14,
  anon_sym_bool = 15,
  anon_sym_byte = 16,
  anon_sym_short = 17,
  anon_sym_int = 18,
  anon_sym_chan = 19,
  anon_sym_active = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_priority = 23,
  anon_sym_provided = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_hidden = 27,
  anon_sym_show = 28,
  anon_sym_of = 29,
  anon_sym_DOT = 30,
  anon_sym_PLUS_PLUS = 31,
  anon_sym_DASH_DASH = 32,
  anon_sym_atomic = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_timeout = 35,
  anon_sym_np_ = 36,
  anon_sym_enabled = 37,
  anon_sym_pc_value = 38,
  anon_sym_full = 39,
  anon_sym_empty = 40,
  anon_sym_nfull = 41,
  anon_sym_nempty = 42,
  anon_sym_PIPE_PIPE = 43,
  anon_sym_AMP_AMP = 44,
  anon_sym_PIPE = 45,
  anon_sym_CARET = 46,
  anon_sym_AMP = 47,
  anon_sym_EQ_EQ = 48,
  anon_sym_BANG_EQ = 49,
  anon_sym_GT = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_LT_EQ = 52,
  anon_sym_LT = 53,
  anon_sym_LT_LT = 54,
  anon_sym_GT_GT = 55,
  anon_sym_PLUS = 56,
  anon_sym_DASH = 57,
  anon_sym_STAR = 58,
  anon_sym_SLASH = 59,
  anon_sym_PERCENT = 60,
  anon_sym_TILDE = 61,
  anon_sym_BANG = 62,
  anon_sym_true = 63,
  anon_sym_false = 64,
  anon_sym_skip = 65,
  sym_string = 66,
  sym_name = 67,
  sym_number = 68,
  sym_source_file = 69,
  sym__module = 70,
  sym_init = 71,
  sym_never = 72,
  sym_trace = 73,
  sym_utype = 74,
  sym_mtype = 75,
  sym_decl_lst = 76,
  sym_one_decl = 77,
  sym_unsigned_decl = 78,
  sym_typename = 79,
  sym_visible = 80,
  sym__sequence = 81,
  sym__step = 82,
  sym_ivar = 83,
  sym_ch_init = 84,
  sym_varref = 85,
  sym_assign = 86,
  sym__stmnt = 87,
  sym__any_expr = 88,
  sym_binary_expr = 89,
  sym_unary_expr = 90,
  sym_const = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_mtype_repeat1 = 93,
  aux_sym_decl_lst_repeat1 = 94,
  aux_sym_one_decl_repeat1 = 95,
  aux_sym__sequence_repeat1 = 96,
  aux_sym_ch_init_repeat1 = 97,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_proctype] = "proctype",
  [anon_sym_init] = "init",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_never] = "never",
  [anon_sym_trace] = "trace",
  [anon_sym_typedef] = "typedef",
  [anon_sym_mtype] = "mtype",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_COLON] = ":",
  [anon_sym_bit] = "bit",
  [anon_sym_bool] = "bool",
  [anon_sym_byte] = "byte",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_chan] = "chan",
  [anon_sym_active] = "active",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_priority] = "priority",
  [anon_sym_provided] = "provided",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_hidden] = "hidden",
  [anon_sym_show] = "show",
  [anon_sym_of] = "of",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_atomic] = "atomic",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_timeout] = "timeout",
  [anon_sym_np_] = "np_",
  [anon_sym_enabled] = "enabled",
  [anon_sym_pc_value] = "pc_value",
  [anon_sym_full] = "full",
  [anon_sym_empty] = "empty",
  [anon_sym_nfull] = "nfull",
  [anon_sym_nempty] = "nempty",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_skip] = "skip",
  [sym_string] = "string",
  [sym_name] = "name",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__module] = "_module",
  [sym_init] = "init",
  [sym_never] = "never",
  [sym_trace] = "trace",
  [sym_utype] = "utype",
  [sym_mtype] = "mtype",
  [sym_decl_lst] = "decl_lst",
  [sym_one_decl] = "one_decl",
  [sym_unsigned_decl] = "unsigned_decl",
  [sym_typename] = "typename",
  [sym_visible] = "visible",
  [sym__sequence] = "_sequence",
  [sym__step] = "_step",
  [sym_ivar] = "ivar",
  [sym_ch_init] = "ch_init",
  [sym_varref] = "varref",
  [sym_assign] = "assign",
  [sym__stmnt] = "_stmnt",
  [sym__any_expr] = "_any_expr",
  [sym_binary_expr] = "binary_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_const] = "const",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_mtype_repeat1] = "mtype_repeat1",
  [aux_sym_decl_lst_repeat1] = "decl_lst_repeat1",
  [aux_sym_one_decl_repeat1] = "one_decl_repeat1",
  [aux_sym__sequence_repeat1] = "_sequence_repeat1",
  [aux_sym_ch_init_repeat1] = "ch_init_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_proctype] = sym_proctype,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_trace] = anon_sym_trace,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_mtype] = anon_sym_mtype,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_bit] = anon_sym_bit,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_chan] = anon_sym_chan,
  [anon_sym_active] = anon_sym_active,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_priority] = anon_sym_priority,
  [anon_sym_provided] = anon_sym_provided,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_show] = anon_sym_show,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_atomic] = anon_sym_atomic,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_timeout] = anon_sym_timeout,
  [anon_sym_np_] = anon_sym_np_,
  [anon_sym_enabled] = anon_sym_enabled,
  [anon_sym_pc_value] = anon_sym_pc_value,
  [anon_sym_full] = anon_sym_full,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_nfull] = anon_sym_nfull,
  [anon_sym_nempty] = anon_sym_nempty,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_skip] = anon_sym_skip,
  [sym_string] = sym_string,
  [sym_name] = sym_name,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__module] = sym__module,
  [sym_init] = sym_init,
  [sym_never] = sym_never,
  [sym_trace] = sym_trace,
  [sym_utype] = sym_utype,
  [sym_mtype] = sym_mtype,
  [sym_decl_lst] = sym_decl_lst,
  [sym_one_decl] = sym_one_decl,
  [sym_unsigned_decl] = sym_unsigned_decl,
  [sym_typename] = sym_typename,
  [sym_visible] = sym_visible,
  [sym__sequence] = sym__sequence,
  [sym__step] = sym__step,
  [sym_ivar] = sym_ivar,
  [sym_ch_init] = sym_ch_init,
  [sym_varref] = sym_varref,
  [sym_assign] = sym_assign,
  [sym__stmnt] = sym__stmnt,
  [sym__any_expr] = sym__any_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_const] = sym_const,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_mtype_repeat1] = aux_sym_mtype_repeat1,
  [aux_sym_decl_lst_repeat1] = aux_sym_decl_lst_repeat1,
  [aux_sym_one_decl_repeat1] = aux_sym_one_decl_repeat1,
  [aux_sym__sequence_repeat1] = aux_sym__sequence_repeat1,
  [aux_sym_ch_init_repeat1] = aux_sym_ch_init_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_proctype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_never] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_active] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priority] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_provided] = {
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
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_show] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atomic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_np_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pc_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_full] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nfull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_skip] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__module] = {
    .visible = false,
    .named = true,
  },
  [sym_init] = {
    .visible = true,
    .named = true,
  },
  [sym_never] = {
    .visible = true,
    .named = true,
  },
  [sym_trace] = {
    .visible = true,
    .named = true,
  },
  [sym_utype] = {
    .visible = true,
    .named = true,
  },
  [sym_mtype] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_lst] = {
    .visible = true,
    .named = true,
  },
  [sym_one_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_unsigned_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_typename] = {
    .visible = true,
    .named = true,
  },
  [sym_visible] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__step] = {
    .visible = false,
    .named = true,
  },
  [sym_ivar] = {
    .visible = true,
    .named = true,
  },
  [sym_ch_init] = {
    .visible = true,
    .named = true,
  },
  [sym_varref] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym__stmnt] = {
    .visible = false,
    .named = true,
  },
  [sym__any_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mtype_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_lst_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_one_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ch_init_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
  [87] = 33,
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
  [100] = 100,
  [101] = 37,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(205);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == '&') ADVANCE(187);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(197);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(193);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(190);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(157);
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '~') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(168);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == 'u') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(174);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(116);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(164);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 115:
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 116:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 117:
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 118:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(180);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(158);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 123:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == '&') ADVANCE(186);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(193);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(190);
      if (lookahead == ']') ADVANCE(157);
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '}') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(123)
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(202);
      if (lookahead == '&') ADVANCE(186);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(193);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(190);
      if (lookahead == ']') ADVANCE(157);
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '|') ADVANCE(183);
      if (lookahead == '}') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(124)
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(204);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '~') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(125)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_proctype);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_mtype);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_mtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_chan);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_chan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_provided);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_show);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_atomic);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_timeout);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_np_);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_enabled);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_pc_value);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_nfull);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_nempty);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(181);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(182);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '>') ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(168);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == 'w') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 123},
  [3] = {.lex_state = 124},
  [4] = {.lex_state = 124},
  [5] = {.lex_state = 124},
  [6] = {.lex_state = 124},
  [7] = {.lex_state = 124},
  [8] = {.lex_state = 124},
  [9] = {.lex_state = 124},
  [10] = {.lex_state = 124},
  [11] = {.lex_state = 124},
  [12] = {.lex_state = 124},
  [13] = {.lex_state = 124},
  [14] = {.lex_state = 124},
  [15] = {.lex_state = 124},
  [16] = {.lex_state = 124},
  [17] = {.lex_state = 124},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 125},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 125},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 125},
  [41] = {.lex_state = 125},
  [42] = {.lex_state = 124},
  [43] = {.lex_state = 124},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 125},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 124},
  [49] = {.lex_state = 124},
  [50] = {.lex_state = 124},
  [51] = {.lex_state = 124},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 125},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 125},
  [56] = {.lex_state = 125},
  [57] = {.lex_state = 125},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 125},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 125},
  [64] = {.lex_state = 125},
  [65] = {.lex_state = 125},
  [66] = {.lex_state = 125},
  [67] = {.lex_state = 125},
  [68] = {.lex_state = 125},
  [69] = {.lex_state = 125},
  [70] = {.lex_state = 125},
  [71] = {.lex_state = 125},
  [72] = {.lex_state = 125},
  [73] = {.lex_state = 125},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_proctype] = ACTIONS(1),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_mtype] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_bit] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_chan] = ACTIONS(1),
    [anon_sym_active] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_priority] = ACTIONS(1),
    [anon_sym_provided] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_show] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_atomic] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_timeout] = ACTIONS(1),
    [anon_sym_np_] = ACTIONS(1),
    [anon_sym_enabled] = ACTIONS(1),
    [anon_sym_pc_value] = ACTIONS(1),
    [anon_sym_full] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_nfull] = ACTIONS(1),
    [anon_sym_nempty] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_skip] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(119),
    [sym__module] = STATE(19),
    [sym_init] = STATE(19),
    [sym_never] = STATE(19),
    [sym_trace] = STATE(19),
    [sym_utype] = STATE(19),
    [sym_mtype] = STATE(19),
    [sym_decl_lst] = STATE(19),
    [sym_one_decl] = STATE(33),
    [sym_unsigned_decl] = STATE(44),
    [sym_typename] = STATE(113),
    [sym_visible] = STATE(77),
    [aux_sym_source_file_repeat1] = STATE(19),
    [sym_proctype] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_never] = ACTIONS(7),
    [anon_sym_trace] = ACTIONS(9),
    [anon_sym_typedef] = ACTIONS(11),
    [anon_sym_mtype] = ACTIONS(13),
    [anon_sym_unsigned] = ACTIONS(15),
    [anon_sym_bit] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_byte] = ACTIONS(17),
    [anon_sym_short] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_chan] = ACTIONS(17),
    [anon_sym_hidden] = ACTIONS(19),
    [anon_sym_show] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(23), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(21), 36,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [45] = 8,
    ACTIONS(35), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 26,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [101] = 2,
    ACTIONS(43), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(41), 36,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [145] = 10,
    ACTIONS(35), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 24,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
  [205] = 2,
    ACTIONS(51), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(49), 36,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [249] = 2,
    ACTIONS(55), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(53), 36,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [293] = 2,
    ACTIONS(59), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(57), 36,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [337] = 9,
    ACTIONS(35), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 25,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
  [395] = 2,
    ACTIONS(61), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(25), 36,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [439] = 3,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(25), 33,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
  [485] = 5,
    ACTIONS(35), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 32,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [535] = 6,
    ACTIONS(35), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 30,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [587] = 7,
    ACTIONS(35), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(25), 28,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_COLON,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [641] = 10,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(63), 19,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [697] = 10,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(67), 19,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [753] = 10,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 18,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [808] = 15,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_proctype,
    ACTIONS(76), 1,
      anon_sym_init,
    ACTIONS(79), 1,
      anon_sym_never,
    ACTIONS(82), 1,
      anon_sym_trace,
    ACTIONS(85), 1,
      anon_sym_typedef,
    ACTIONS(88), 1,
      anon_sym_mtype,
    ACTIONS(91), 1,
      anon_sym_unsigned,
    STATE(33), 1,
      sym_one_decl,
    STATE(44), 1,
      sym_unsigned_decl,
    STATE(77), 1,
      sym_visible,
    STATE(113), 1,
      sym_typename,
    ACTIONS(97), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(94), 6,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
    STATE(18), 8,
      sym__module,
      sym_init,
      sym_never,
      sym_trace,
      sym_utype,
      sym_mtype,
      sym_decl_lst,
      aux_sym_source_file_repeat1,
  [867] = 15,
    ACTIONS(5), 1,
      anon_sym_init,
    ACTIONS(7), 1,
      anon_sym_never,
    ACTIONS(9), 1,
      anon_sym_trace,
    ACTIONS(11), 1,
      anon_sym_typedef,
    ACTIONS(13), 1,
      anon_sym_mtype,
    ACTIONS(15), 1,
      anon_sym_unsigned,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym_proctype,
    STATE(33), 1,
      sym_one_decl,
    STATE(44), 1,
      sym_unsigned_decl,
    STATE(77), 1,
      sym_visible,
    STATE(113), 1,
      sym_typename,
    ACTIONS(19), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(17), 6,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
    STATE(18), 8,
      sym__module,
      sym_init,
      sym_never,
      sym_trace,
      sym_utype,
      sym_mtype,
      sym_decl_lst,
      aux_sym_source_file_repeat1,
  [926] = 12,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(110), 1,
      anon_sym_atomic,
    ACTIONS(112), 1,
      sym_name,
    STATE(44), 1,
      sym_unsigned_decl,
    STATE(77), 1,
      sym_visible,
    STATE(87), 1,
      sym_one_decl,
    STATE(102), 1,
      sym_varref,
    STATE(113), 1,
      sym_typename,
    STATE(126), 1,
      sym__sequence,
    ACTIONS(108), 2,
      anon_sym_hidden,
      anon_sym_show,
    STATE(103), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(104), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [973] = 12,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(110), 1,
      anon_sym_atomic,
    ACTIONS(112), 1,
      sym_name,
    STATE(44), 1,
      sym_unsigned_decl,
    STATE(77), 1,
      sym_visible,
    STATE(87), 1,
      sym_one_decl,
    STATE(102), 1,
      sym_varref,
    STATE(113), 1,
      sym_typename,
    STATE(120), 1,
      sym__sequence,
    ACTIONS(108), 2,
      anon_sym_hidden,
      anon_sym_show,
    STATE(103), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(104), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [1020] = 12,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(110), 1,
      anon_sym_atomic,
    ACTIONS(112), 1,
      sym_name,
    STATE(44), 1,
      sym_unsigned_decl,
    STATE(77), 1,
      sym_visible,
    STATE(87), 1,
      sym_one_decl,
    STATE(102), 1,
      sym_varref,
    STATE(113), 1,
      sym_typename,
    STATE(134), 1,
      sym__sequence,
    ACTIONS(108), 2,
      anon_sym_hidden,
      anon_sym_show,
    STATE(103), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(104), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [1067] = 12,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(110), 1,
      anon_sym_atomic,
    ACTIONS(112), 1,
      sym_name,
    STATE(44), 1,
      sym_unsigned_decl,
    STATE(77), 1,
      sym_visible,
    STATE(87), 1,
      sym_one_decl,
    STATE(102), 1,
      sym_varref,
    STATE(113), 1,
      sym_typename,
    STATE(130), 1,
      sym__sequence,
    ACTIONS(108), 2,
      anon_sym_hidden,
      anon_sym_show,
    STATE(103), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(104), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [1114] = 11,
    ACTIONS(106), 1,
      anon_sym_unsigned,
    ACTIONS(110), 1,
      anon_sym_atomic,
    ACTIONS(112), 1,
      sym_name,
    STATE(44), 1,
      sym_unsigned_decl,
    STATE(77), 1,
      sym_visible,
    STATE(87), 1,
      sym_one_decl,
    STATE(102), 1,
      sym_varref,
    STATE(113), 1,
      sym_typename,
    ACTIONS(108), 2,
      anon_sym_hidden,
      anon_sym_show,
    STATE(110), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(104), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [1158] = 3,
    ACTIONS(116), 1,
      anon_sym_EQ,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 19,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1186] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(120), 18,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1213] = 2,
    ACTIONS(126), 1,
      anon_sym_EQ,
    ACTIONS(124), 19,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1238] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(128), 18,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1265] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(128), 18,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1292] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(130), 18,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1319] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(135), 18,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1346] = 1,
    ACTIONS(67), 19,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1368] = 3,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym_decl_lst_repeat1,
    ACTIONS(137), 17,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1394] = 1,
    ACTIONS(141), 19,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1416] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      aux_sym_decl_lst_repeat1,
    ACTIONS(143), 17,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1442] = 1,
    ACTIONS(130), 19,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1464] = 3,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      aux_sym_decl_lst_repeat1,
    ACTIONS(148), 17,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1490] = 1,
    ACTIONS(63), 19,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1512] = 1,
    ACTIONS(150), 19,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1534] = 2,
    ACTIONS(154), 1,
      anon_sym_EQ,
    ACTIONS(152), 18,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1558] = 8,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_ch_init,
    ACTIONS(160), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(16), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [1593] = 12,
    ACTIONS(35), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      anon_sym_DASH_GT,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1636] = 10,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(172), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1675] = 1,
    ACTIONS(174), 18,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1696] = 1,
    ACTIONS(143), 18,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1717] = 8,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_ch_init,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(176), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(15), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [1752] = 1,
    ACTIONS(120), 18,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_RBRACE,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_SEMI,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1773] = 10,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(178), 1,
      anon_sym_COLON,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1811] = 10,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1849] = 10,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1887] = 10,
    ACTIONS(45), 1,
      anon_sym_CARET,
    ACTIONS(47), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(33), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1925] = 1,
    ACTIONS(186), 16,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1944] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(188), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(3), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [1973] = 1,
    ACTIONS(190), 16,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [1992] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(192), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(17), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2021] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(194), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(43), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2050] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(196), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(51), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2079] = 1,
    ACTIONS(198), 16,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [2098] = 1,
    ACTIONS(200), 16,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [2117] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(202), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(50), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2146] = 1,
    ACTIONS(204), 16,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [2165] = 1,
    ACTIONS(206), 16,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [2184] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(208), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(5), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2213] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(210), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(9), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2242] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(212), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(48), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2271] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(214), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(42), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2300] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(216), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(10), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2329] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(218), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(6), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2358] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(220), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(11), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2387] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(222), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(49), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2416] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(224), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(12), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2445] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(226), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(13), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2474] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(228), 2,
      anon_sym_timeout,
      anon_sym_np_,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
    STATE(14), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym_const,
  [2503] = 1,
    ACTIONS(230), 16,
      ts_builtin_sym_end,
      sym_proctype,
      anon_sym_init,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
      anon_sym_hidden,
      anon_sym_show,
  [2522] = 8,
    ACTIONS(15), 1,
      anon_sym_unsigned,
    STATE(33), 1,
      sym_one_decl,
    STATE(44), 1,
      sym_unsigned_decl,
    STATE(77), 1,
      sym_visible,
    STATE(113), 1,
      sym_typename,
    STATE(115), 1,
      sym_decl_lst,
    ACTIONS(19), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(17), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [2554] = 7,
    ACTIONS(15), 1,
      anon_sym_unsigned,
    STATE(44), 1,
      sym_unsigned_decl,
    STATE(45), 1,
      sym_one_decl,
    STATE(77), 1,
      sym_visible,
    STATE(113), 1,
      sym_typename,
    ACTIONS(19), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(17), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [2583] = 4,
    ACTIONS(15), 1,
      anon_sym_unsigned,
    STATE(47), 1,
      sym_unsigned_decl,
    STATE(109), 1,
      sym_typename,
    ACTIONS(17), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [2602] = 1,
    ACTIONS(232), 8,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [2613] = 2,
    STATE(94), 1,
      sym_typename,
    ACTIONS(17), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [2626] = 2,
    STATE(107), 1,
      sym_typename,
    ACTIONS(17), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [2639] = 2,
    STATE(40), 1,
      sym_const,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [2649] = 3,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_DOT,
    ACTIONS(234), 3,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [2661] = 2,
    STATE(135), 1,
      sym_const,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [2671] = 2,
    STATE(123), 1,
      sym_const,
    ACTIONS(166), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [2681] = 2,
    ACTIONS(242), 1,
      anon_sym_DOT,
    ACTIONS(240), 3,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [2690] = 3,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      aux_sym__sequence_repeat1,
  [2700] = 3,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      aux_sym_decl_lst_repeat1,
  [2710] = 3,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_mtype_repeat1,
  [2720] = 3,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_mtype_repeat1,
  [2730] = 3,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_ch_init_repeat1,
  [2740] = 3,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_ch_init_repeat1,
  [2750] = 1,
    ACTIONS(269), 3,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [2756] = 3,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      anon_sym_EQ,
    ACTIONS(275), 1,
      sym_name,
  [2766] = 3,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_ch_init_repeat1,
  [2776] = 3,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_mtype_repeat1,
  [2786] = 1,
    ACTIONS(281), 3,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [2792] = 1,
    ACTIONS(275), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_name,
  [2798] = 3,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_mtype_repeat1,
  [2808] = 3,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_mtype_repeat1,
  [2818] = 3,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      aux_sym__sequence_repeat1,
  [2828] = 3,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      aux_sym_decl_lst_repeat1,
  [2838] = 2,
    ACTIONS(293), 1,
      anon_sym_EQ,
    ACTIONS(295), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [2846] = 3,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym__sequence_repeat1,
  [2856] = 2,
    ACTIONS(299), 1,
      sym_name,
    STATE(92), 1,
      sym_varref,
  [2863] = 2,
    ACTIONS(299), 1,
      sym_name,
    STATE(96), 1,
      sym_varref,
  [2870] = 1,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2875] = 1,
    ACTIONS(260), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2880] = 1,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [2885] = 2,
    ACTIONS(303), 1,
      sym_name,
    STATE(28), 1,
      sym_ivar,
  [2892] = 1,
    ACTIONS(285), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [2897] = 2,
    ACTIONS(303), 1,
      sym_name,
    STATE(36), 1,
      sym_ivar,
  [2904] = 1,
    ACTIONS(305), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [2909] = 2,
    ACTIONS(303), 1,
      sym_name,
    STATE(26), 1,
      sym_ivar,
  [2916] = 1,
    ACTIONS(307), 1,
      sym_name,
  [2920] = 1,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
  [2924] = 1,
    ACTIONS(311), 1,
      anon_sym_of,
  [2928] = 1,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
  [2932] = 1,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
  [2936] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
  [2940] = 1,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
  [2944] = 1,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
  [2948] = 1,
    ACTIONS(323), 1,
      sym_name,
  [2952] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
  [2956] = 1,
    ACTIONS(327), 1,
      sym_name,
  [2960] = 1,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
  [2964] = 1,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
  [2968] = 1,
    ACTIONS(333), 1,
      sym_name,
  [2972] = 1,
    ACTIONS(335), 1,
      sym_name,
  [2976] = 1,
    ACTIONS(337), 1,
      anon_sym_COLON,
  [2980] = 1,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
  [2984] = 1,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
  [2988] = 1,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
  [2992] = 1,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
  [2996] = 1,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
  [3000] = 1,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
  [3004] = 1,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 101,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 205,
  [SMALL_STATE(7)] = 249,
  [SMALL_STATE(8)] = 293,
  [SMALL_STATE(9)] = 337,
  [SMALL_STATE(10)] = 395,
  [SMALL_STATE(11)] = 439,
  [SMALL_STATE(12)] = 485,
  [SMALL_STATE(13)] = 535,
  [SMALL_STATE(14)] = 587,
  [SMALL_STATE(15)] = 641,
  [SMALL_STATE(16)] = 697,
  [SMALL_STATE(17)] = 753,
  [SMALL_STATE(18)] = 808,
  [SMALL_STATE(19)] = 867,
  [SMALL_STATE(20)] = 926,
  [SMALL_STATE(21)] = 973,
  [SMALL_STATE(22)] = 1020,
  [SMALL_STATE(23)] = 1067,
  [SMALL_STATE(24)] = 1114,
  [SMALL_STATE(25)] = 1158,
  [SMALL_STATE(26)] = 1186,
  [SMALL_STATE(27)] = 1213,
  [SMALL_STATE(28)] = 1238,
  [SMALL_STATE(29)] = 1265,
  [SMALL_STATE(30)] = 1292,
  [SMALL_STATE(31)] = 1319,
  [SMALL_STATE(32)] = 1346,
  [SMALL_STATE(33)] = 1368,
  [SMALL_STATE(34)] = 1394,
  [SMALL_STATE(35)] = 1416,
  [SMALL_STATE(36)] = 1442,
  [SMALL_STATE(37)] = 1464,
  [SMALL_STATE(38)] = 1490,
  [SMALL_STATE(39)] = 1512,
  [SMALL_STATE(40)] = 1534,
  [SMALL_STATE(41)] = 1558,
  [SMALL_STATE(42)] = 1593,
  [SMALL_STATE(43)] = 1636,
  [SMALL_STATE(44)] = 1675,
  [SMALL_STATE(45)] = 1696,
  [SMALL_STATE(46)] = 1717,
  [SMALL_STATE(47)] = 1752,
  [SMALL_STATE(48)] = 1773,
  [SMALL_STATE(49)] = 1811,
  [SMALL_STATE(50)] = 1849,
  [SMALL_STATE(51)] = 1887,
  [SMALL_STATE(52)] = 1925,
  [SMALL_STATE(53)] = 1944,
  [SMALL_STATE(54)] = 1973,
  [SMALL_STATE(55)] = 1992,
  [SMALL_STATE(56)] = 2021,
  [SMALL_STATE(57)] = 2050,
  [SMALL_STATE(58)] = 2079,
  [SMALL_STATE(59)] = 2098,
  [SMALL_STATE(60)] = 2117,
  [SMALL_STATE(61)] = 2146,
  [SMALL_STATE(62)] = 2165,
  [SMALL_STATE(63)] = 2184,
  [SMALL_STATE(64)] = 2213,
  [SMALL_STATE(65)] = 2242,
  [SMALL_STATE(66)] = 2271,
  [SMALL_STATE(67)] = 2300,
  [SMALL_STATE(68)] = 2329,
  [SMALL_STATE(69)] = 2358,
  [SMALL_STATE(70)] = 2387,
  [SMALL_STATE(71)] = 2416,
  [SMALL_STATE(72)] = 2445,
  [SMALL_STATE(73)] = 2474,
  [SMALL_STATE(74)] = 2503,
  [SMALL_STATE(75)] = 2522,
  [SMALL_STATE(76)] = 2554,
  [SMALL_STATE(77)] = 2583,
  [SMALL_STATE(78)] = 2602,
  [SMALL_STATE(79)] = 2613,
  [SMALL_STATE(80)] = 2626,
  [SMALL_STATE(81)] = 2639,
  [SMALL_STATE(82)] = 2649,
  [SMALL_STATE(83)] = 2661,
  [SMALL_STATE(84)] = 2671,
  [SMALL_STATE(85)] = 2681,
  [SMALL_STATE(86)] = 2690,
  [SMALL_STATE(87)] = 2700,
  [SMALL_STATE(88)] = 2710,
  [SMALL_STATE(89)] = 2720,
  [SMALL_STATE(90)] = 2730,
  [SMALL_STATE(91)] = 2740,
  [SMALL_STATE(92)] = 2750,
  [SMALL_STATE(93)] = 2756,
  [SMALL_STATE(94)] = 2766,
  [SMALL_STATE(95)] = 2776,
  [SMALL_STATE(96)] = 2786,
  [SMALL_STATE(97)] = 2792,
  [SMALL_STATE(98)] = 2798,
  [SMALL_STATE(99)] = 2808,
  [SMALL_STATE(100)] = 2818,
  [SMALL_STATE(101)] = 2828,
  [SMALL_STATE(102)] = 2838,
  [SMALL_STATE(103)] = 2846,
  [SMALL_STATE(104)] = 2856,
  [SMALL_STATE(105)] = 2863,
  [SMALL_STATE(106)] = 2870,
  [SMALL_STATE(107)] = 2875,
  [SMALL_STATE(108)] = 2880,
  [SMALL_STATE(109)] = 2885,
  [SMALL_STATE(110)] = 2892,
  [SMALL_STATE(111)] = 2897,
  [SMALL_STATE(112)] = 2904,
  [SMALL_STATE(113)] = 2909,
  [SMALL_STATE(114)] = 2916,
  [SMALL_STATE(115)] = 2920,
  [SMALL_STATE(116)] = 2924,
  [SMALL_STATE(117)] = 2928,
  [SMALL_STATE(118)] = 2932,
  [SMALL_STATE(119)] = 2936,
  [SMALL_STATE(120)] = 2940,
  [SMALL_STATE(121)] = 2944,
  [SMALL_STATE(122)] = 2948,
  [SMALL_STATE(123)] = 2952,
  [SMALL_STATE(124)] = 2956,
  [SMALL_STATE(125)] = 2960,
  [SMALL_STATE(126)] = 2964,
  [SMALL_STATE(127)] = 2968,
  [SMALL_STATE(128)] = 2972,
  [SMALL_STATE(129)] = 2976,
  [SMALL_STATE(130)] = 2980,
  [SMALL_STATE(131)] = 2984,
  [SMALL_STATE(132)] = 2988,
  [SMALL_STATE(133)] = 2992,
  [SMALL_STATE(134)] = 2996,
  [SMALL_STATE(135)] = 3000,
  [SMALL_STATE(136)] = 3004,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 7),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_decl, 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_decl_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_decl_repeat1, 2), SHIFT_REPEAT(111),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_lst, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ch_init, 8),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_lst_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_lst_repeat1, 2), SHIFT_REPEAT(76),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_lst, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ch_init, 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_decl, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtype, 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_never, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtype, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtype, 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utype, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visible, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_decl_lst, 1), SHIFT(76),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mtype_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mtype_repeat1, 2), SHIFT_REPEAT(124),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ch_init_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ch_init_repeat1, 2), SHIFT_REPEAT(80),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typename, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(24),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_decl_lst, 2), SHIFT(76),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmnt, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [317] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_promela(void) {
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
