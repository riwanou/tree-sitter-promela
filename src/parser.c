#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 231
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_proctype = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_init = 6,
  anon_sym_never = 7,
  anon_sym_trace = 8,
  anon_sym_typedef = 9,
  anon_sym_mtype = 10,
  anon_sym_EQ = 11,
  anon_sym_COMMA = 12,
  anon_sym_SEMI = 13,
  anon_sym_unsigned = 14,
  anon_sym_COLON = 15,
  anon_sym_bit = 16,
  anon_sym_bool = 17,
  anon_sym_byte = 18,
  anon_sym_short = 19,
  anon_sym_int = 20,
  anon_sym_chan = 21,
  anon_sym_active = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_priority = 25,
  anon_sym_provided = 26,
  anon_sym_hidden = 27,
  anon_sym_show = 28,
  anon_sym_of = 29,
  anon_sym_DOT = 30,
  anon_sym_PLUS_PLUS = 31,
  anon_sym_DASH_DASH = 32,
  anon_sym_atomic = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_len = 35,
  anon_sym_timeout = 36,
  anon_sym_np_ = 37,
  anon_sym_enabled = 38,
  anon_sym_pc_value = 39,
  anon_sym_AT = 40,
  anon_sym_run = 41,
  anon_sym_full = 42,
  anon_sym_empty = 43,
  anon_sym_nfull = 44,
  anon_sym_nempty = 45,
  anon_sym_PIPE_PIPE = 46,
  anon_sym_AMP_AMP = 47,
  anon_sym_PIPE = 48,
  anon_sym_CARET = 49,
  anon_sym_AMP = 50,
  anon_sym_EQ_EQ = 51,
  anon_sym_BANG_EQ = 52,
  anon_sym_GT = 53,
  anon_sym_GT_EQ = 54,
  anon_sym_LT_EQ = 55,
  anon_sym_LT = 56,
  anon_sym_LT_LT = 57,
  anon_sym_GT_GT = 58,
  anon_sym_PLUS = 59,
  anon_sym_DASH = 60,
  anon_sym_STAR = 61,
  anon_sym_SLASH = 62,
  anon_sym_PERCENT = 63,
  anon_sym_TILDE = 64,
  anon_sym_BANG = 65,
  anon_sym_true = 66,
  anon_sym_false = 67,
  anon_sym_skip = 68,
  sym_string = 69,
  sym_name = 70,
  sym_number = 71,
  sym_source_file = 72,
  sym__module = 73,
  sym_proctype = 74,
  sym_init = 75,
  sym_never = 76,
  sym_trace = 77,
  sym_utype = 78,
  sym_mtype = 79,
  sym_decl_lst = 80,
  sym_one_decl = 81,
  sym_unsigned_decl = 82,
  sym_typename = 83,
  sym_active = 84,
  sym_priority = 85,
  sym_enabler = 86,
  sym_visible = 87,
  sym__sequence = 88,
  sym__step = 89,
  sym_ivar = 90,
  sym_ch_init = 91,
  sym_varref = 92,
  sym_arg_lst = 93,
  sym_assign = 94,
  sym__stmnt = 95,
  sym__any_expr = 96,
  sym__const_expr = 97,
  sym__expr = 98,
  sym_chanpoll = 99,
  sym_andor_expr = 100,
  sym_binary_expr = 101,
  sym_unary_expr = 102,
  sym__const = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym_mtype_repeat1 = 105,
  aux_sym_decl_lst_repeat1 = 106,
  aux_sym_one_decl_repeat1 = 107,
  aux_sym__sequence_repeat1 = 108,
  aux_sym_ch_init_repeat1 = 109,
  aux_sym_arg_lst_repeat1 = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_proctype] = "proctype",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_init] = "init",
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
  [anon_sym_hidden] = "hidden",
  [anon_sym_show] = "show",
  [anon_sym_of] = "of",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_atomic] = "atomic",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_len] = "len",
  [anon_sym_timeout] = "timeout",
  [anon_sym_np_] = "np_",
  [anon_sym_enabled] = "enabled",
  [anon_sym_pc_value] = "pc_value",
  [anon_sym_AT] = "@",
  [anon_sym_run] = "run",
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
  [sym_proctype] = "proctype",
  [sym_init] = "init",
  [sym_never] = "never",
  [sym_trace] = "trace",
  [sym_utype] = "utype",
  [sym_mtype] = "mtype",
  [sym_decl_lst] = "decl_lst",
  [sym_one_decl] = "one_decl",
  [sym_unsigned_decl] = "unsigned_decl",
  [sym_typename] = "typename",
  [sym_active] = "active",
  [sym_priority] = "priority",
  [sym_enabler] = "enabler",
  [sym_visible] = "visible",
  [sym__sequence] = "_sequence",
  [sym__step] = "_step",
  [sym_ivar] = "ivar",
  [sym_ch_init] = "ch_init",
  [sym_varref] = "varref",
  [sym_arg_lst] = "arg_lst",
  [sym_assign] = "assign",
  [sym__stmnt] = "_stmnt",
  [sym__any_expr] = "_any_expr",
  [sym__const_expr] = "_const_expr",
  [sym__expr] = "_expr",
  [sym_chanpoll] = "chanpoll",
  [sym_andor_expr] = "andor_expr",
  [sym_binary_expr] = "binary_expr",
  [sym_unary_expr] = "unary_expr",
  [sym__const] = "_const",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_mtype_repeat1] = "mtype_repeat1",
  [aux_sym_decl_lst_repeat1] = "decl_lst_repeat1",
  [aux_sym_one_decl_repeat1] = "one_decl_repeat1",
  [aux_sym__sequence_repeat1] = "_sequence_repeat1",
  [aux_sym_ch_init_repeat1] = "ch_init_repeat1",
  [aux_sym_arg_lst_repeat1] = "arg_lst_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_proctype] = anon_sym_proctype,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_init] = anon_sym_init,
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
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_show] = anon_sym_show,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_atomic] = anon_sym_atomic,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_len] = anon_sym_len,
  [anon_sym_timeout] = anon_sym_timeout,
  [anon_sym_np_] = anon_sym_np_,
  [anon_sym_enabled] = anon_sym_enabled,
  [anon_sym_pc_value] = anon_sym_pc_value,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_run] = anon_sym_run,
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
  [sym_proctype] = sym_proctype,
  [sym_init] = sym_init,
  [sym_never] = sym_never,
  [sym_trace] = sym_trace,
  [sym_utype] = sym_utype,
  [sym_mtype] = sym_mtype,
  [sym_decl_lst] = sym_decl_lst,
  [sym_one_decl] = sym_one_decl,
  [sym_unsigned_decl] = sym_unsigned_decl,
  [sym_typename] = sym_typename,
  [sym_active] = sym_active,
  [sym_priority] = sym_priority,
  [sym_enabler] = sym_enabler,
  [sym_visible] = sym_visible,
  [sym__sequence] = sym__sequence,
  [sym__step] = sym__step,
  [sym_ivar] = sym_ivar,
  [sym_ch_init] = sym_ch_init,
  [sym_varref] = sym_varref,
  [sym_arg_lst] = sym_arg_lst,
  [sym_assign] = sym_assign,
  [sym__stmnt] = sym__stmnt,
  [sym__any_expr] = sym__any_expr,
  [sym__const_expr] = sym__const_expr,
  [sym__expr] = sym__expr,
  [sym_chanpoll] = sym_chanpoll,
  [sym_andor_expr] = sym_andor_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym__const] = sym__const,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_mtype_repeat1] = aux_sym_mtype_repeat1,
  [aux_sym_decl_lst_repeat1] = aux_sym_decl_lst_repeat1,
  [aux_sym_one_decl_repeat1] = aux_sym_one_decl_repeat1,
  [aux_sym__sequence_repeat1] = aux_sym__sequence_repeat1,
  [aux_sym_ch_init_repeat1] = aux_sym_ch_init_repeat1,
  [aux_sym_arg_lst_repeat1] = aux_sym_arg_lst_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_proctype] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_init] = {
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
  [anon_sym_len] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
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
  [sym_proctype] = {
    .visible = true,
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
  [sym_active] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym_enabler] = {
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
  [sym_arg_lst] = {
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
  [sym__const_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_chanpoll] = {
    .visible = true,
    .named = true,
  },
  [sym_andor_expr] = {
    .visible = true,
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
  [sym__const] = {
    .visible = false,
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
  [aux_sym_arg_lst_repeat1] = {
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
  [43] = 13,
  [44] = 18,
  [45] = 12,
  [46] = 14,
  [47] = 23,
  [48] = 28,
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
  [82] = 80,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 75,
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
  [101] = 101,
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
  [118] = 108,
  [119] = 119,
  [120] = 120,
  [121] = 110,
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
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 60,
  [162] = 63,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 165,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 166,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(127);
      if (lookahead == '!') ADVANCE(218);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '<') ADVANCE(204);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '~') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '~') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'b') ADVANCE(258);
      if (lookahead == 'c') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == 'u') ADVANCE(273);
      if (lookahead == '~') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '~') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '<') ADVANCE(204);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '}') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == 'k') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 'w') ADVANCE(164);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 119:
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 120:
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(192);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == '&') ADVANCE(198);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(207);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '<') ADVANCE(204);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '}') ADVANCE(132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(126)
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_proctype);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_mtype);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_mtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_chan);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_chan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_provided);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_show);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_len);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_len);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_timeout);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_np_);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_np_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_enabled);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_enabled);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_pc_value);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_pc_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_run);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_full);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_empty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_nfull);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_nfull);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_nempty);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_nempty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(194);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(195);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(202);
      if (lookahead == '>') ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(205);
      if (lookahead == '=') ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(168);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_skip);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'u') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'p') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(281);
      if (lookahead == 'k') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == 'y') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == 'w') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 126},
  [13] = {.lex_state = 126},
  [14] = {.lex_state = 126},
  [15] = {.lex_state = 126},
  [16] = {.lex_state = 126},
  [17] = {.lex_state = 126},
  [18] = {.lex_state = 126},
  [19] = {.lex_state = 126},
  [20] = {.lex_state = 126},
  [21] = {.lex_state = 126},
  [22] = {.lex_state = 126},
  [23] = {.lex_state = 126},
  [24] = {.lex_state = 126},
  [25] = {.lex_state = 126},
  [26] = {.lex_state = 126},
  [27] = {.lex_state = 126},
  [28] = {.lex_state = 126},
  [29] = {.lex_state = 126},
  [30] = {.lex_state = 126},
  [31] = {.lex_state = 126},
  [32] = {.lex_state = 126},
  [33] = {.lex_state = 126},
  [34] = {.lex_state = 126},
  [35] = {.lex_state = 126},
  [36] = {.lex_state = 126},
  [37] = {.lex_state = 126},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 126},
  [62] = {.lex_state = 126},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 126},
  [97] = {.lex_state = 126},
  [98] = {.lex_state = 126},
  [99] = {.lex_state = 126},
  [100] = {.lex_state = 126},
  [101] = {.lex_state = 126},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 126},
  [106] = {.lex_state = 126},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 126},
  [109] = {.lex_state = 126},
  [110] = {.lex_state = 126},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 126},
  [114] = {.lex_state = 126},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 126},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 126},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 126},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_proctype] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_init] = ACTIONS(1),
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
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_show] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_atomic] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_len] = ACTIONS(1),
    [anon_sym_timeout] = ACTIONS(1),
    [anon_sym_np_] = ACTIONS(1),
    [anon_sym_enabled] = ACTIONS(1),
    [anon_sym_pc_value] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
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
    [sym_source_file] = STATE(197),
    [sym__module] = STATE(39),
    [sym_proctype] = STATE(39),
    [sym_init] = STATE(39),
    [sym_never] = STATE(39),
    [sym_trace] = STATE(39),
    [sym_utype] = STATE(39),
    [sym_mtype] = STATE(39),
    [sym_decl_lst] = STATE(39),
    [sym_one_decl] = STATE(60),
    [sym_unsigned_decl] = STATE(81),
    [sym_typename] = STATE(177),
    [sym_active] = STATE(188),
    [sym_visible] = STATE(128),
    [aux_sym_source_file_repeat1] = STATE(39),
    [anon_sym_proctype] = ACTIONS(3),
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
    [anon_sym_active] = ACTIONS(19),
    [anon_sym_hidden] = ACTIONS(21),
    [anon_sym_show] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_unsigned,
    ACTIONS(31), 1,
      anon_sym_atomic,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(161), 1,
      sym_one_decl,
    STATE(177), 1,
      sym_typename,
    STATE(206), 1,
      sym__sequence,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(29), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(61), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(144), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(25), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [94] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_unsigned,
    ACTIONS(31), 1,
      anon_sym_atomic,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(161), 1,
      sym_one_decl,
    STATE(177), 1,
      sym_typename,
    STATE(212), 1,
      sym__sequence,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(29), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(61), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(144), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(25), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [188] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_unsigned,
    ACTIONS(31), 1,
      anon_sym_atomic,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(161), 1,
      sym_one_decl,
    STATE(177), 1,
      sym_typename,
    STATE(195), 1,
      sym__sequence,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(29), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(61), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(144), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(25), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [282] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_unsigned,
    ACTIONS(31), 1,
      anon_sym_atomic,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(161), 1,
      sym_one_decl,
    STATE(177), 1,
      sym_typename,
    STATE(184), 1,
      sym__sequence,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(29), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(61), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(144), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(25), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [376] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_unsigned,
    ACTIONS(31), 1,
      anon_sym_atomic,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(161), 1,
      sym_one_decl,
    STATE(177), 1,
      sym_typename,
    STATE(215), 1,
      sym__sequence,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(29), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(61), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(144), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(25), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [470] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_unsigned,
    ACTIONS(31), 1,
      anon_sym_atomic,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(161), 1,
      sym_one_decl,
    STATE(177), 1,
      sym_typename,
    STATE(180), 1,
      sym__sequence,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(29), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(61), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(144), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(25), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [564] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_unsigned,
    ACTIONS(31), 1,
      anon_sym_atomic,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(161), 1,
      sym_one_decl,
    STATE(177), 1,
      sym_typename,
    STATE(228), 1,
      sym__sequence,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(29), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(61), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(144), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(25), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [658] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_unsigned,
    ACTIONS(31), 1,
      anon_sym_atomic,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(161), 1,
      sym_one_decl,
    STATE(177), 1,
      sym_typename,
    STATE(227), 1,
      sym__sequence,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(29), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(61), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(144), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(25), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [752] = 23,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_unsigned,
    ACTIONS(31), 1,
      anon_sym_atomic,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(161), 1,
      sym_one_decl,
    STATE(177), 1,
      sym_typename,
    STATE(194), 1,
      sym__sequence,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(29), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(61), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(144), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(25), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [846] = 22,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_unsigned,
    ACTIONS(31), 1,
      anon_sym_atomic,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(161), 1,
      sym_one_decl,
    STATE(177), 1,
      sym_typename,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(29), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(61), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(178), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(25), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [937] = 4,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(49), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [990] = 4,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(63), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(57), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1043] = 4,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(57), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1096] = 2,
    ACTIONS(69), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(67), 39,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_provided,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1145] = 4,
    ACTIONS(73), 1,
      anon_sym_priority,
    STATE(31), 1,
      sym_priority,
    ACTIONS(75), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(71), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1198] = 4,
    ACTIONS(73), 1,
      anon_sym_priority,
    STATE(22), 1,
      sym_priority,
    ACTIONS(79), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(77), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1251] = 3,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(55), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(49), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1301] = 8,
    ACTIONS(91), 1,
      anon_sym_PLUS,
    ACTIONS(93), 1,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(81), 29,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1360] = 5,
    ACTIONS(91), 1,
      anon_sym_PLUS,
    ACTIONS(93), 1,
      anon_sym_DASH,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 33,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1413] = 2,
    ACTIONS(99), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(97), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1460] = 2,
    ACTIONS(75), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(71), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1507] = 2,
    ACTIONS(103), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(101), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1554] = 2,
    ACTIONS(107), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(105), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1601] = 11,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PLUS,
    ACTIONS(93), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(81), 26,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1666] = 2,
    ACTIONS(79), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(77), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1713] = 2,
    ACTIONS(117), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(115), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1760] = 2,
    ACTIONS(121), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(119), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1807] = 10,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_PLUS,
    ACTIONS(93), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(81), 27,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [1870] = 9,
    ACTIONS(91), 1,
      anon_sym_PLUS,
    ACTIONS(93), 1,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(81), 27,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [1931] = 2,
    ACTIONS(125), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(123), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [1978] = 2,
    ACTIONS(83), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(81), 37,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
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
  [2025] = 3,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(81), 34,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
  [2074] = 6,
    ACTIONS(91), 1,
      anon_sym_PLUS,
    ACTIONS(93), 1,
      anon_sym_DASH,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 31,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_RBRACK,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_DASH_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2129] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(127), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [2187] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(133), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [2245] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(135), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [2302] = 17,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_proctype,
    ACTIONS(142), 1,
      anon_sym_init,
    ACTIONS(145), 1,
      anon_sym_never,
    ACTIONS(148), 1,
      anon_sym_trace,
    ACTIONS(151), 1,
      anon_sym_typedef,
    ACTIONS(154), 1,
      anon_sym_mtype,
    ACTIONS(157), 1,
      anon_sym_unsigned,
    ACTIONS(163), 1,
      anon_sym_active,
    STATE(60), 1,
      sym_one_decl,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(177), 1,
      sym_typename,
    STATE(188), 1,
      sym_active,
    ACTIONS(166), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(160), 6,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
    STATE(38), 9,
      sym__module,
      sym_proctype,
      sym_init,
      sym_never,
      sym_trace,
      sym_utype,
      sym_mtype,
      sym_decl_lst,
      aux_sym_source_file_repeat1,
  [2368] = 17,
    ACTIONS(3), 1,
      anon_sym_proctype,
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
    ACTIONS(19), 1,
      anon_sym_active,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_one_decl,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(177), 1,
      sym_typename,
    STATE(188), 1,
      sym_active,
    ACTIONS(21), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(17), 6,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
    STATE(38), 9,
      sym__module,
      sym_proctype,
      sym_init,
      sym_never,
      sym_trace,
      sym_utype,
      sym_mtype,
      sym_decl_lst,
      aux_sym_source_file_repeat1,
  [2434] = 12,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(171), 1,
      sym_name,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(141), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(61), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [2486] = 12,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(171), 1,
      sym_name,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(155), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(61), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [2538] = 12,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(171), 1,
      sym_name,
    STATE(229), 1,
      sym_chanpoll,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(132), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(41), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    ACTIONS(35), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(61), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [2590] = 4,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(63), 7,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2625] = 3,
    ACTIONS(177), 1,
      anon_sym_DOT,
    ACTIONS(55), 7,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2657] = 4,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      anon_sym_DOT,
    ACTIONS(55), 7,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 16,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2691] = 4,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 7,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 16,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2725] = 2,
    ACTIONS(103), 7,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(101), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2754] = 2,
    ACTIONS(121), 7,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(119), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2783] = 3,
    ACTIONS(183), 1,
      anon_sym_EQ,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [2813] = 4,
    ACTIONS(189), 1,
      anon_sym_EQ,
    ACTIONS(191), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(193), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 14,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2845] = 11,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      sym_number,
    STATE(71), 1,
      sym_ch_init,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(199), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(36), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [2890] = 11,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 1,
      sym_number,
    STATE(213), 1,
      sym_arg_lst,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(205), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(96), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [2935] = 2,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(209), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [2962] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(213), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [2991] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(217), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3020] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(219), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3049] = 11,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      sym_number,
    STATE(67), 1,
      sym_ch_init,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(224), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(35), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3094] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(228), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3123] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(228), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3152] = 3,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      aux_sym_decl_lst_repeat1,
    ACTIONS(230), 19,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3180] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(234), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3222] = 3,
    ACTIONS(117), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(238), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(115), 12,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3250] = 3,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      aux_sym_decl_lst_repeat1,
    ACTIONS(240), 19,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3278] = 1,
    ACTIONS(242), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3302] = 1,
    ACTIONS(244), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3326] = 1,
    ACTIONS(219), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3350] = 1,
    ACTIONS(127), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3374] = 3,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      aux_sym_decl_lst_repeat1,
    ACTIONS(246), 19,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3402] = 11,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      sym_name,
    ACTIONS(255), 1,
      sym_number,
    STATE(210), 1,
      sym__const_expr,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(109), 2,
      sym_binary_expr,
      sym_unary_expr,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(124), 3,
      sym_varref,
      sym__any_expr,
      sym__const,
    ACTIONS(251), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
  [3446] = 2,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(257), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3472] = 1,
    ACTIONS(133), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3496] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(261), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(32), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3535] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(265), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(30), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3574] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(269), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(100), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3613] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(273), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(121), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3652] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(277), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(98), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3691] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(281), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(105), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3730] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(285), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(113), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3769] = 1,
    ACTIONS(213), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3792] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(289), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(108), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3831] = 1,
    ACTIONS(293), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [3854] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(295), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(118), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3893] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(299), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(21), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3932] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(303), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(99), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3971] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(307), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(25), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4010] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(311), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(29), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4049] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(315), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(110), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4088] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(319), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(19), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4127] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(323), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(34), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4166] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(327), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(20), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4205] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(331), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(33), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4244] = 1,
    ACTIONS(246), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [4267] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(335), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(101), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4306] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(339), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(114), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4345] = 9,
    ACTIONS(33), 1,
      anon_sym_len,
    ACTIONS(39), 1,
      anon_sym_run,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_number,
    ACTIONS(37), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(43), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(343), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(37), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4384] = 12,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_arg_lst_repeat1,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4428] = 5,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 14,
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
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4458] = 12,
    ACTIONS(91), 1,
      anon_sym_PLUS,
    ACTIONS(93), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(355), 1,
      anon_sym_DASH_GT,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4501] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4540] = 12,
    ACTIONS(91), 1,
      anon_sym_PLUS,
    ACTIONS(93), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(355), 1,
      anon_sym_DASH_GT,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4583] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(361), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4622] = 1,
    ACTIONS(363), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [4642] = 1,
    ACTIONS(365), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [4662] = 1,
    ACTIONS(367), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [4682] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4720] = 3,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(373), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 14,
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
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4744] = 1,
    ACTIONS(375), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [4764] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4802] = 3,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(193), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 14,
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
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4826] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4864] = 1,
    ACTIONS(381), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [4884] = 1,
    ACTIONS(383), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [4904] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4942] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4980] = 1,
    ACTIONS(389), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [5000] = 1,
    ACTIONS(391), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [5020] = 1,
    ACTIONS(393), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [5040] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5078] = 1,
    ACTIONS(397), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [5098] = 1,
    ACTIONS(399), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [5118] = 10,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5156] = 1,
    ACTIONS(403), 17,
      ts_builtin_sym_end,
      anon_sym_proctype,
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
      anon_sym_active,
      anon_sym_hidden,
      anon_sym_show,
  [5176] = 9,
    ACTIONS(15), 1,
      anon_sym_unsigned,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_one_decl,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(177), 1,
      sym_typename,
    STATE(199), 1,
      sym_decl_lst,
    ACTIONS(21), 2,
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
  [5211] = 9,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(89), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5246] = 9,
    ACTIONS(15), 1,
      anon_sym_unsigned,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_one_decl,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(177), 1,
      sym_typename,
    STATE(200), 1,
      sym_decl_lst,
    ACTIONS(21), 2,
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
  [5281] = 8,
    ACTIONS(15), 1,
      anon_sym_unsigned,
    STATE(60), 1,
      sym_one_decl,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(128), 1,
      sym_visible,
    STATE(177), 1,
      sym_typename,
    STATE(189), 1,
      sym_decl_lst,
    ACTIONS(21), 2,
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
  [5313] = 7,
    ACTIONS(15), 1,
      anon_sym_unsigned,
    STATE(81), 1,
      sym_unsigned_decl,
    STATE(92), 1,
      sym_one_decl,
    STATE(128), 1,
      sym_visible,
    STATE(177), 1,
      sym_typename,
    ACTIONS(21), 2,
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
  [5342] = 4,
    ACTIONS(15), 1,
      anon_sym_unsigned,
    STATE(79), 1,
      sym_unsigned_decl,
    STATE(169), 1,
      sym_typename,
    ACTIONS(17), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5361] = 2,
    STATE(170), 1,
      sym_typename,
    ACTIONS(17), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5374] = 2,
    STATE(146), 1,
      sym_typename,
    ACTIONS(17), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5387] = 1,
    ACTIONS(409), 8,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5398] = 2,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(411), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [5408] = 2,
    STATE(70), 1,
      sym__const,
    ACTIONS(415), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [5418] = 2,
    STATE(209), 1,
      sym__const,
    ACTIONS(417), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [5428] = 2,
    STATE(201), 1,
      sym__const,
    ACTIONS(419), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [5438] = 1,
    ACTIONS(421), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [5446] = 2,
    STATE(15), 1,
      sym__const,
    ACTIONS(423), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [5456] = 5,
    ACTIONS(73), 1,
      anon_sym_priority,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    ACTIONS(427), 1,
      anon_sym_provided,
    STATE(153), 1,
      sym_priority,
    STATE(186), 1,
      sym_enabler,
  [5472] = 5,
    ACTIONS(73), 1,
      anon_sym_priority,
    ACTIONS(427), 1,
      anon_sym_provided,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_priority,
    STATE(198), 1,
      sym_enabler,
  [5488] = 5,
    ACTIONS(73), 1,
      anon_sym_priority,
    ACTIONS(427), 1,
      anon_sym_provided,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_priority,
    STATE(196), 1,
      sym_enabler,
  [5504] = 1,
    ACTIONS(411), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [5512] = 3,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(435), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(433), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [5523] = 3,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_mtype_repeat1,
  [5533] = 3,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      aux_sym__sequence_repeat1,
  [5543] = 1,
    ACTIONS(446), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_name,
  [5549] = 3,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_ch_init_repeat1,
  [5559] = 3,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_mtype_repeat1,
  [5569] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      aux_sym_mtype_repeat1,
  [5579] = 3,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      aux_sym__sequence_repeat1,
  [5589] = 3,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_arg_lst_repeat1,
  [5599] = 3,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      aux_sym_ch_init_repeat1,
  [5609] = 3,
    ACTIONS(444), 1,
      anon_sym_SEMI,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      aux_sym__sequence_repeat1,
  [5619] = 3,
    ACTIONS(427), 1,
      anon_sym_provided,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_enabler,
  [5629] = 3,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_arg_lst_repeat1,
  [5639] = 3,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(435), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [5649] = 3,
    ACTIONS(427), 1,
      anon_sym_provided,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(198), 1,
      sym_enabler,
  [5659] = 3,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_mtype_repeat1,
  [5669] = 3,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
    ACTIONS(427), 1,
      anon_sym_provided,
    STATE(186), 1,
      sym_enabler,
  [5679] = 3,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym_ch_init_repeat1,
  [5689] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      aux_sym_mtype_repeat1,
  [5699] = 3,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      aux_sym_decl_lst_repeat1,
  [5709] = 3,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(486), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      aux_sym_decl_lst_repeat1,
  [5719] = 3,
    ACTIONS(446), 1,
      sym_name,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      anon_sym_EQ,
  [5729] = 2,
    ACTIONS(493), 1,
      anon_sym_proctype,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
  [5736] = 2,
    ACTIONS(497), 1,
      sym_name,
    STATE(48), 1,
      sym_varref,
  [5743] = 2,
    ACTIONS(499), 1,
      sym_name,
    STATE(23), 1,
      sym_varref,
  [5750] = 2,
    ACTIONS(499), 1,
      sym_name,
    STATE(28), 1,
      sym_varref,
  [5757] = 1,
    ACTIONS(501), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [5762] = 2,
    ACTIONS(503), 1,
      sym_name,
    STATE(59), 1,
      sym_ivar,
  [5769] = 1,
    ACTIONS(476), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5774] = 1,
    ACTIONS(437), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [5779] = 2,
    ACTIONS(503), 1,
      sym_name,
    STATE(66), 1,
      sym_ivar,
  [5786] = 2,
    ACTIONS(497), 1,
      sym_name,
    STATE(207), 1,
      sym_varref,
  [5793] = 1,
    ACTIONS(505), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [5798] = 2,
    ACTIONS(497), 1,
      sym_name,
    STATE(47), 1,
      sym_varref,
  [5805] = 2,
    ACTIONS(497), 1,
      sym_name,
    STATE(211), 1,
      sym_varref,
  [5812] = 2,
    ACTIONS(503), 1,
      sym_name,
    STATE(54), 1,
      sym_ivar,
  [5819] = 1,
    ACTIONS(458), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [5824] = 1,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
  [5828] = 1,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
  [5832] = 1,
    ACTIONS(511), 1,
      anon_sym_of,
  [5836] = 1,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
  [5840] = 1,
    ACTIONS(515), 1,
      anon_sym_proctype,
  [5844] = 1,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
  [5848] = 1,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
  [5852] = 1,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
  [5856] = 1,
    ACTIONS(521), 1,
      sym_name,
  [5860] = 1,
    ACTIONS(523), 1,
      anon_sym_proctype,
  [5864] = 1,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
  [5868] = 1,
    ACTIONS(527), 1,
      sym_name,
  [5872] = 1,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
  [5876] = 1,
    ACTIONS(531), 1,
      sym_name,
  [5880] = 1,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
  [5884] = 1,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
  [5888] = 1,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
  [5892] = 1,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
  [5896] = 1,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
  [5900] = 1,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
  [5904] = 1,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [5908] = 1,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [5912] = 1,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
  [5916] = 1,
    ACTIONS(545), 1,
      anon_sym_LBRACE,
  [5920] = 1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
  [5924] = 1,
    ACTIONS(549), 1,
      sym_name,
  [5928] = 1,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
  [5932] = 1,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
  [5936] = 1,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
  [5940] = 1,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
  [5944] = 1,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
  [5948] = 1,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
  [5952] = 1,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
  [5956] = 1,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
  [5960] = 1,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [5964] = 1,
    ACTIONS(567), 1,
      sym_name,
  [5968] = 1,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
  [5972] = 1,
    ACTIONS(571), 1,
      anon_sym_COLON,
  [5976] = 1,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
  [5980] = 1,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [5984] = 1,
    ACTIONS(577), 1,
      sym_name,
  [5988] = 1,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
  [5992] = 1,
    ACTIONS(581), 1,
      sym_name,
  [5996] = 1,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
  [6000] = 1,
    ACTIONS(585), 1,
      sym_name,
  [6004] = 1,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
  [6008] = 1,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
  [6012] = 1,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
  [6016] = 1,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
  [6020] = 1,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
  [6024] = 1,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
  [6028] = 1,
    ACTIONS(599), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 282,
  [SMALL_STATE(6)] = 376,
  [SMALL_STATE(7)] = 470,
  [SMALL_STATE(8)] = 564,
  [SMALL_STATE(9)] = 658,
  [SMALL_STATE(10)] = 752,
  [SMALL_STATE(11)] = 846,
  [SMALL_STATE(12)] = 937,
  [SMALL_STATE(13)] = 990,
  [SMALL_STATE(14)] = 1043,
  [SMALL_STATE(15)] = 1096,
  [SMALL_STATE(16)] = 1145,
  [SMALL_STATE(17)] = 1198,
  [SMALL_STATE(18)] = 1251,
  [SMALL_STATE(19)] = 1301,
  [SMALL_STATE(20)] = 1360,
  [SMALL_STATE(21)] = 1413,
  [SMALL_STATE(22)] = 1460,
  [SMALL_STATE(23)] = 1507,
  [SMALL_STATE(24)] = 1554,
  [SMALL_STATE(25)] = 1601,
  [SMALL_STATE(26)] = 1666,
  [SMALL_STATE(27)] = 1713,
  [SMALL_STATE(28)] = 1760,
  [SMALL_STATE(29)] = 1807,
  [SMALL_STATE(30)] = 1870,
  [SMALL_STATE(31)] = 1931,
  [SMALL_STATE(32)] = 1978,
  [SMALL_STATE(33)] = 2025,
  [SMALL_STATE(34)] = 2074,
  [SMALL_STATE(35)] = 2129,
  [SMALL_STATE(36)] = 2187,
  [SMALL_STATE(37)] = 2245,
  [SMALL_STATE(38)] = 2302,
  [SMALL_STATE(39)] = 2368,
  [SMALL_STATE(40)] = 2434,
  [SMALL_STATE(41)] = 2486,
  [SMALL_STATE(42)] = 2538,
  [SMALL_STATE(43)] = 2590,
  [SMALL_STATE(44)] = 2625,
  [SMALL_STATE(45)] = 2657,
  [SMALL_STATE(46)] = 2691,
  [SMALL_STATE(47)] = 2725,
  [SMALL_STATE(48)] = 2754,
  [SMALL_STATE(49)] = 2783,
  [SMALL_STATE(50)] = 2813,
  [SMALL_STATE(51)] = 2845,
  [SMALL_STATE(52)] = 2890,
  [SMALL_STATE(53)] = 2935,
  [SMALL_STATE(54)] = 2962,
  [SMALL_STATE(55)] = 2991,
  [SMALL_STATE(56)] = 3020,
  [SMALL_STATE(57)] = 3049,
  [SMALL_STATE(58)] = 3094,
  [SMALL_STATE(59)] = 3123,
  [SMALL_STATE(60)] = 3152,
  [SMALL_STATE(61)] = 3180,
  [SMALL_STATE(62)] = 3222,
  [SMALL_STATE(63)] = 3250,
  [SMALL_STATE(64)] = 3278,
  [SMALL_STATE(65)] = 3302,
  [SMALL_STATE(66)] = 3326,
  [SMALL_STATE(67)] = 3350,
  [SMALL_STATE(68)] = 3374,
  [SMALL_STATE(69)] = 3402,
  [SMALL_STATE(70)] = 3446,
  [SMALL_STATE(71)] = 3472,
  [SMALL_STATE(72)] = 3496,
  [SMALL_STATE(73)] = 3535,
  [SMALL_STATE(74)] = 3574,
  [SMALL_STATE(75)] = 3613,
  [SMALL_STATE(76)] = 3652,
  [SMALL_STATE(77)] = 3691,
  [SMALL_STATE(78)] = 3730,
  [SMALL_STATE(79)] = 3769,
  [SMALL_STATE(80)] = 3792,
  [SMALL_STATE(81)] = 3831,
  [SMALL_STATE(82)] = 3854,
  [SMALL_STATE(83)] = 3893,
  [SMALL_STATE(84)] = 3932,
  [SMALL_STATE(85)] = 3971,
  [SMALL_STATE(86)] = 4010,
  [SMALL_STATE(87)] = 4049,
  [SMALL_STATE(88)] = 4088,
  [SMALL_STATE(89)] = 4127,
  [SMALL_STATE(90)] = 4166,
  [SMALL_STATE(91)] = 4205,
  [SMALL_STATE(92)] = 4244,
  [SMALL_STATE(93)] = 4267,
  [SMALL_STATE(94)] = 4306,
  [SMALL_STATE(95)] = 4345,
  [SMALL_STATE(96)] = 4384,
  [SMALL_STATE(97)] = 4428,
  [SMALL_STATE(98)] = 4458,
  [SMALL_STATE(99)] = 4501,
  [SMALL_STATE(100)] = 4540,
  [SMALL_STATE(101)] = 4583,
  [SMALL_STATE(102)] = 4622,
  [SMALL_STATE(103)] = 4642,
  [SMALL_STATE(104)] = 4662,
  [SMALL_STATE(105)] = 4682,
  [SMALL_STATE(106)] = 4720,
  [SMALL_STATE(107)] = 4744,
  [SMALL_STATE(108)] = 4764,
  [SMALL_STATE(109)] = 4802,
  [SMALL_STATE(110)] = 4826,
  [SMALL_STATE(111)] = 4864,
  [SMALL_STATE(112)] = 4884,
  [SMALL_STATE(113)] = 4904,
  [SMALL_STATE(114)] = 4942,
  [SMALL_STATE(115)] = 4980,
  [SMALL_STATE(116)] = 5000,
  [SMALL_STATE(117)] = 5020,
  [SMALL_STATE(118)] = 5040,
  [SMALL_STATE(119)] = 5078,
  [SMALL_STATE(120)] = 5098,
  [SMALL_STATE(121)] = 5118,
  [SMALL_STATE(122)] = 5156,
  [SMALL_STATE(123)] = 5176,
  [SMALL_STATE(124)] = 5211,
  [SMALL_STATE(125)] = 5246,
  [SMALL_STATE(126)] = 5281,
  [SMALL_STATE(127)] = 5313,
  [SMALL_STATE(128)] = 5342,
  [SMALL_STATE(129)] = 5361,
  [SMALL_STATE(130)] = 5374,
  [SMALL_STATE(131)] = 5387,
  [SMALL_STATE(132)] = 5398,
  [SMALL_STATE(133)] = 5408,
  [SMALL_STATE(134)] = 5418,
  [SMALL_STATE(135)] = 5428,
  [SMALL_STATE(136)] = 5438,
  [SMALL_STATE(137)] = 5446,
  [SMALL_STATE(138)] = 5456,
  [SMALL_STATE(139)] = 5472,
  [SMALL_STATE(140)] = 5488,
  [SMALL_STATE(141)] = 5504,
  [SMALL_STATE(142)] = 5512,
  [SMALL_STATE(143)] = 5523,
  [SMALL_STATE(144)] = 5533,
  [SMALL_STATE(145)] = 5543,
  [SMALL_STATE(146)] = 5549,
  [SMALL_STATE(147)] = 5559,
  [SMALL_STATE(148)] = 5569,
  [SMALL_STATE(149)] = 5579,
  [SMALL_STATE(150)] = 5589,
  [SMALL_STATE(151)] = 5599,
  [SMALL_STATE(152)] = 5609,
  [SMALL_STATE(153)] = 5619,
  [SMALL_STATE(154)] = 5629,
  [SMALL_STATE(155)] = 5639,
  [SMALL_STATE(156)] = 5649,
  [SMALL_STATE(157)] = 5659,
  [SMALL_STATE(158)] = 5669,
  [SMALL_STATE(159)] = 5679,
  [SMALL_STATE(160)] = 5689,
  [SMALL_STATE(161)] = 5699,
  [SMALL_STATE(162)] = 5709,
  [SMALL_STATE(163)] = 5719,
  [SMALL_STATE(164)] = 5729,
  [SMALL_STATE(165)] = 5736,
  [SMALL_STATE(166)] = 5743,
  [SMALL_STATE(167)] = 5750,
  [SMALL_STATE(168)] = 5757,
  [SMALL_STATE(169)] = 5762,
  [SMALL_STATE(170)] = 5769,
  [SMALL_STATE(171)] = 5774,
  [SMALL_STATE(172)] = 5779,
  [SMALL_STATE(173)] = 5786,
  [SMALL_STATE(174)] = 5793,
  [SMALL_STATE(175)] = 5798,
  [SMALL_STATE(176)] = 5805,
  [SMALL_STATE(177)] = 5812,
  [SMALL_STATE(178)] = 5819,
  [SMALL_STATE(179)] = 5824,
  [SMALL_STATE(180)] = 5828,
  [SMALL_STATE(181)] = 5832,
  [SMALL_STATE(182)] = 5836,
  [SMALL_STATE(183)] = 5840,
  [SMALL_STATE(184)] = 5844,
  [SMALL_STATE(185)] = 5848,
  [SMALL_STATE(186)] = 5852,
  [SMALL_STATE(187)] = 5856,
  [SMALL_STATE(188)] = 5860,
  [SMALL_STATE(189)] = 5864,
  [SMALL_STATE(190)] = 5868,
  [SMALL_STATE(191)] = 5872,
  [SMALL_STATE(192)] = 5876,
  [SMALL_STATE(193)] = 5880,
  [SMALL_STATE(194)] = 5884,
  [SMALL_STATE(195)] = 5888,
  [SMALL_STATE(196)] = 5892,
  [SMALL_STATE(197)] = 5896,
  [SMALL_STATE(198)] = 5900,
  [SMALL_STATE(199)] = 5904,
  [SMALL_STATE(200)] = 5908,
  [SMALL_STATE(201)] = 5912,
  [SMALL_STATE(202)] = 5916,
  [SMALL_STATE(203)] = 5920,
  [SMALL_STATE(204)] = 5924,
  [SMALL_STATE(205)] = 5928,
  [SMALL_STATE(206)] = 5932,
  [SMALL_STATE(207)] = 5936,
  [SMALL_STATE(208)] = 5940,
  [SMALL_STATE(209)] = 5944,
  [SMALL_STATE(210)] = 5948,
  [SMALL_STATE(211)] = 5952,
  [SMALL_STATE(212)] = 5956,
  [SMALL_STATE(213)] = 5960,
  [SMALL_STATE(214)] = 5964,
  [SMALL_STATE(215)] = 5968,
  [SMALL_STATE(216)] = 5972,
  [SMALL_STATE(217)] = 5976,
  [SMALL_STATE(218)] = 5980,
  [SMALL_STATE(219)] = 5984,
  [SMALL_STATE(220)] = 5988,
  [SMALL_STATE(221)] = 5992,
  [SMALL_STATE(222)] = 5996,
  [SMALL_STATE(223)] = 6000,
  [SMALL_STATE(224)] = 6004,
  [SMALL_STATE(225)] = 6008,
  [SMALL_STATE(226)] = 6012,
  [SMALL_STATE(227)] = 6016,
  [SMALL_STATE(228)] = 6020,
  [SMALL_STATE(229)] = 6024,
  [SMALL_STATE(230)] = 6028,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varref, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varref, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varref, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varref, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 6),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_decl, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_decl_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_decl_repeat1, 2), SHIFT_REPEAT(172),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_lst, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_lst, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ch_init, 8),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ch_init, 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_lst_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_lst_repeat1, 2), SHIFT_REPEAT(127),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_decl, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_lst, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__const_expr, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_lst_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proctype, 7),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proctype, 11),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proctype, 9),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__const, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__const, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proctype, 10),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proctype, 8),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utype, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_never, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtype, 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtype, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtype, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visible, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_andor_expr, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmnt, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mtype_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mtype_repeat1, 2), SHIFT_REPEAT(187),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typename, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(11),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_lst_repeat1, 2), SHIFT_REPEAT(93),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_lst, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ch_init_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ch_init_repeat1, 2), SHIFT_REPEAT(129),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_decl_lst, 1), SHIFT(127),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_decl_lst, 2), SHIFT(127),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmnt, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enabler, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [539] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chanpoll, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
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
