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
#define STATE_COUNT 235
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
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
  anon_sym_SEMI = 7,
  anon_sym_never = 8,
  anon_sym_trace = 9,
  anon_sym_typedef = 10,
  anon_sym_mtype = 11,
  anon_sym_EQ = 12,
  anon_sym_COMMA = 13,
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
  sym_comment = 72,
  sym_source_file = 73,
  sym__module = 74,
  sym_proctype = 75,
  sym_init = 76,
  sym_never = 77,
  sym_trace = 78,
  sym_utype = 79,
  sym_mtype = 80,
  sym_decl_lst = 81,
  sym_one_decl = 82,
  sym_unsigned_decl = 83,
  sym_typename = 84,
  sym_active = 85,
  sym_priority = 86,
  sym_enabler = 87,
  sym_visible = 88,
  sym__sequence = 89,
  sym__step = 90,
  sym_ivar = 91,
  sym_ch_init = 92,
  sym_varref = 93,
  sym_arg_lst = 94,
  sym_assign = 95,
  sym__stmnt = 96,
  sym__any_expr = 97,
  sym__const_expr = 98,
  sym__expr = 99,
  sym_chanpoll = 100,
  sym_andor_expr = 101,
  sym_binary_expr = 102,
  sym_unary_expr = 103,
  sym__const = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_mtype_repeat1 = 106,
  aux_sym_decl_lst_repeat1 = 107,
  aux_sym_one_decl_repeat1 = 108,
  aux_sym__sequence_repeat1 = 109,
  aux_sym_ch_init_repeat1 = 110,
  aux_sym_arg_lst_repeat1 = 111,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_proctype] = "proctype",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_init] = "init",
  [anon_sym_SEMI] = ";",
  [anon_sym_never] = "never",
  [anon_sym_trace] = "trace",
  [anon_sym_typedef] = "typedef",
  [anon_sym_mtype] = "mtype",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
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
  [sym_comment] = "comment",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_trace] = anon_sym_trace,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_mtype] = anon_sym_mtype,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_comment] = sym_comment,
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
  [anon_sym_SEMI] = {
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
  [sym_comment] = {
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
  [43] = 15,
  [44] = 18,
  [45] = 17,
  [46] = 14,
  [47] = 20,
  [48] = 34,
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
  [75] = 74,
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
  [94] = 78,
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
  [113] = 102,
  [114] = 114,
  [115] = 103,
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
  [154] = 71,
  [155] = 62,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 151,
  [163] = 163,
  [164] = 144,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 167,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 170,
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
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      if (lookahead == '!') ADVANCE(234);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '&') ADVANCE(214);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(217);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '\\') SKIP(139)
      if (lookahead == ']') ADVANCE(175);
      if (lookahead == '^') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '~') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(233);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '~') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(233);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(310);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(289);
      if (lookahead == '~') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(233);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '~') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '&') ADVANCE(214);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(217);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '^') ADVANCE(213);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == '}') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(330);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(216);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(193);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(130);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(182);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 'w') ADVANCE(180);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 129:
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 130:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 131:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 132:
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 133:
      if (lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 137:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(330);
      if (lookahead == '\r') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(331);
      END_STATE();
    case 138:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 139:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(138)
      END_STATE();
    case 140:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') SKIP(142)
      END_STATE();
    case 141:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') SKIP(142)
      if (lookahead == '\r') SKIP(140)
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '&') ADVANCE(214);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(223);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(217);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '\\') SKIP(141)
      if (lookahead == ']') ADVANCE(175);
      if (lookahead == '^') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(212);
      if (lookahead == '}') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(142)
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_proctype);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_mtype);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_mtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_bit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_chan);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_chan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_provided);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_show);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_atomic);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_len);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_len);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_timeout);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_np_);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_np_);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_enabled);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_enabled);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_pc_value);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_pc_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_run);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_full);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_empty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_nfull);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_nfull);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_nempty);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_nempty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(210);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(211);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(218);
      if (lookahead == '>') ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(221);
      if (lookahead == '=') ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(184);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '>') ADVANCE(188);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(188);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(330);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(216);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_skip);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'f') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'y') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == 'w') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(330);
      if (lookahead == '\r') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(137);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 142},
  [13] = {.lex_state = 142},
  [14] = {.lex_state = 142},
  [15] = {.lex_state = 142},
  [16] = {.lex_state = 142},
  [17] = {.lex_state = 142},
  [18] = {.lex_state = 142},
  [19] = {.lex_state = 142},
  [20] = {.lex_state = 142},
  [21] = {.lex_state = 142},
  [22] = {.lex_state = 142},
  [23] = {.lex_state = 142},
  [24] = {.lex_state = 142},
  [25] = {.lex_state = 142},
  [26] = {.lex_state = 142},
  [27] = {.lex_state = 142},
  [28] = {.lex_state = 142},
  [29] = {.lex_state = 142},
  [30] = {.lex_state = 142},
  [31] = {.lex_state = 142},
  [32] = {.lex_state = 142},
  [33] = {.lex_state = 142},
  [34] = {.lex_state = 142},
  [35] = {.lex_state = 142},
  [36] = {.lex_state = 142},
  [37] = {.lex_state = 142},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 142},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 142},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 142},
  [97] = {.lex_state = 142},
  [98] = {.lex_state = 142},
  [99] = {.lex_state = 142},
  [100] = {.lex_state = 142},
  [101] = {.lex_state = 142},
  [102] = {.lex_state = 142},
  [103] = {.lex_state = 142},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 142},
  [107] = {.lex_state = 142},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 142},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 142},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 142},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 142},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 142},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 142},
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
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 12},
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
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 12},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 12},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_mtype] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(224),
    [sym__module] = STATE(39),
    [sym_proctype] = STATE(39),
    [sym_init] = STATE(39),
    [sym_never] = STATE(39),
    [sym_trace] = STATE(39),
    [sym_utype] = STATE(39),
    [sym_mtype] = STATE(39),
    [sym_decl_lst] = STATE(39),
    [sym_one_decl] = STATE(62),
    [sym_unsigned_decl] = STATE(76),
    [sym_typename] = STATE(179),
    [sym_active] = STATE(218),
    [sym_visible] = STATE(129),
    [aux_sym_source_file_repeat1] = STATE(39),
    [anon_sym_proctype] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(7),
    [anon_sym_never] = ACTIONS(9),
    [anon_sym_trace] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(13),
    [anon_sym_mtype] = ACTIONS(15),
    [anon_sym_unsigned] = ACTIONS(17),
    [anon_sym_bit] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_short] = ACTIONS(19),
    [anon_sym_int] = ACTIONS(19),
    [anon_sym_chan] = ACTIONS(19),
    [anon_sym_active] = ACTIONS(21),
    [anon_sym_hidden] = ACTIONS(23),
    [anon_sym_show] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_unsigned,
    ACTIONS(33), 1,
      anon_sym_atomic,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(49), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(155), 1,
      sym_one_decl,
    STATE(179), 1,
      sym_typename,
    STATE(190), 1,
      sym_chanpoll,
    STATE(195), 1,
      sym__sequence,
    ACTIONS(31), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(143), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(60), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(151), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(27), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [97] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_unsigned,
    ACTIONS(33), 1,
      anon_sym_atomic,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(49), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(155), 1,
      sym_one_decl,
    STATE(179), 1,
      sym_typename,
    STATE(186), 1,
      sym__sequence,
    STATE(190), 1,
      sym_chanpoll,
    ACTIONS(31), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(143), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(60), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(151), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(27), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [194] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_unsigned,
    ACTIONS(33), 1,
      anon_sym_atomic,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(49), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(155), 1,
      sym_one_decl,
    STATE(179), 1,
      sym_typename,
    STATE(190), 1,
      sym_chanpoll,
    STATE(206), 1,
      sym__sequence,
    ACTIONS(31), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(143), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(60), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(151), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(27), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [291] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_unsigned,
    ACTIONS(33), 1,
      anon_sym_atomic,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(49), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(155), 1,
      sym_one_decl,
    STATE(179), 1,
      sym_typename,
    STATE(190), 1,
      sym_chanpoll,
    STATE(194), 1,
      sym__sequence,
    ACTIONS(31), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(143), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(60), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(151), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(27), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [388] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_unsigned,
    ACTIONS(33), 1,
      anon_sym_atomic,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(49), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(155), 1,
      sym_one_decl,
    STATE(173), 1,
      sym__sequence,
    STATE(179), 1,
      sym_typename,
    STATE(190), 1,
      sym_chanpoll,
    ACTIONS(31), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(143), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(60), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(162), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(27), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [485] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_unsigned,
    ACTIONS(33), 1,
      anon_sym_atomic,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(49), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(155), 1,
      sym_one_decl,
    STATE(179), 1,
      sym_typename,
    STATE(185), 1,
      sym__sequence,
    STATE(190), 1,
      sym_chanpoll,
    ACTIONS(31), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(143), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(60), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(151), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(27), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [582] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_unsigned,
    ACTIONS(33), 1,
      anon_sym_atomic,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(49), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(155), 1,
      sym_one_decl,
    STATE(179), 1,
      sym_typename,
    STATE(183), 1,
      sym__sequence,
    STATE(190), 1,
      sym_chanpoll,
    ACTIONS(31), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(143), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(60), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(151), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(27), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [679] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_unsigned,
    ACTIONS(33), 1,
      anon_sym_atomic,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(49), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(155), 1,
      sym_one_decl,
    STATE(179), 1,
      sym_typename,
    STATE(190), 1,
      sym_chanpoll,
    STATE(220), 1,
      sym__sequence,
    ACTIONS(31), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(143), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(60), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(151), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(27), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [776] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_unsigned,
    ACTIONS(33), 1,
      anon_sym_atomic,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(49), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(155), 1,
      sym_one_decl,
    STATE(179), 1,
      sym_typename,
    STATE(190), 1,
      sym_chanpoll,
    STATE(214), 1,
      sym__sequence,
    ACTIONS(31), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(143), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(60), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(151), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(27), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [873] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_unsigned,
    ACTIONS(33), 1,
      anon_sym_atomic,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(49), 1,
      sym_number,
    STATE(50), 1,
      sym_varref,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(155), 1,
      sym_one_decl,
    STATE(179), 1,
      sym_typename,
    STATE(190), 1,
      sym_chanpoll,
    ACTIONS(31), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(143), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    STATE(60), 4,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
    STATE(175), 4,
      sym_decl_lst,
      sym__step,
      sym_assign,
      sym__stmnt,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    ACTIONS(27), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_priority,
    STATE(30), 1,
      sym_priority,
    ACTIONS(55), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(51), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1023] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_priority,
    STATE(23), 1,
      sym_priority,
    ACTIONS(59), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(57), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(67), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(61), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(75), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(69), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(77), 38,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(69), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(67), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(61), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1352] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(85), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 33,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [1410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(95), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1460] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(85), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(83), 29,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [1524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(85), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
    ACTIONS(83), 34,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [1578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(51), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(83), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1678] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(85), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(83), 27,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [1744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(107), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [1794] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(85), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 31,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [1854] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(83), 27,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [1922] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(83), 26,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [1992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(115), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [2042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(119), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [2092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(57), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [2142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(123), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [2192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(127), 36,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
      anon_sym_PERCENT,
  [2242] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(131), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [2305] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(137), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [2368] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(139), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
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
  [2430] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      anon_sym_proctype,
    ACTIONS(146), 1,
      anon_sym_init,
    ACTIONS(149), 1,
      anon_sym_never,
    ACTIONS(152), 1,
      anon_sym_trace,
    ACTIONS(155), 1,
      anon_sym_typedef,
    ACTIONS(158), 1,
      anon_sym_mtype,
    ACTIONS(161), 1,
      anon_sym_unsigned,
    ACTIONS(167), 1,
      anon_sym_active,
    STATE(62), 1,
      sym_one_decl,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(179), 1,
      sym_typename,
    STATE(218), 1,
      sym_active,
    ACTIONS(170), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(164), 6,
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
  [2499] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_proctype,
    ACTIONS(7), 1,
      anon_sym_init,
    ACTIONS(9), 1,
      anon_sym_never,
    ACTIONS(11), 1,
      anon_sym_trace,
    ACTIONS(13), 1,
      anon_sym_typedef,
    ACTIONS(15), 1,
      anon_sym_mtype,
    ACTIONS(17), 1,
      anon_sym_unsigned,
    ACTIONS(21), 1,
      anon_sym_active,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_one_decl,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(179), 1,
      sym_typename,
    STATE(218), 1,
      sym_active,
    ACTIONS(23), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(19), 6,
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
  [2568] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(175), 1,
      sym_name,
    STATE(190), 1,
      sym_chanpoll,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(142), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(60), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [2623] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(175), 1,
      sym_name,
    STATE(190), 1,
      sym_chanpoll,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(134), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(60), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [2678] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(175), 1,
      sym_name,
    STATE(190), 1,
      sym_chanpoll,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(161), 2,
      sym__expr,
      sym_andor_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_empty,
      anon_sym_nfull,
      anon_sym_nempty,
    ACTIONS(37), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(60), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [2733] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(75), 8,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(69), 16,
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
      anon_sym_PERCENT,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(67), 8,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(61), 16,
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
      anon_sym_PERCENT,
  [2806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 8,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(69), 15,
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
      anon_sym_PERCENT,
  [2843] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(67), 8,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(61), 15,
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
      anon_sym_PERCENT,
  [2880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 8,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(95), 16,
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
      anon_sym_PERCENT,
  [2912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 8,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(127), 16,
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
      anon_sym_PERCENT,
  [2944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_EQ,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [2977] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(195), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(197), 7,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(191), 13,
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
      anon_sym_PERCENT,
  [3012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_EQ,
    ACTIONS(199), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [3042] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      sym_number,
    STATE(184), 1,
      sym_arg_lst,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(207), 5,
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
  [3090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(211), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
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
  [3122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(215), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
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
  [3154] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      sym_number,
    STATE(69), 1,
      sym_ch_init,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(222), 5,
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
  [3202] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      sym_number,
    STATE(61), 1,
      sym_ch_init,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(226), 5,
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
  [3250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(230), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
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
  [3282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(230), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
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
  [3314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_one_decl_repeat1,
    ACTIONS(232), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
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
  [3346] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(234), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [3420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      aux_sym_decl_lst_repeat1,
    ACTIONS(238), 19,
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
  [3451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(242), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(123), 11,
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
      anon_sym_PERCENT,
  [3482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [3509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    STATE(65), 1,
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
  [3540] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      sym_name,
    ACTIONS(255), 1,
      sym_number,
    STATE(225), 1,
      sym__const_expr,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    STATE(110), 2,
      sym_binary_expr,
      sym_unary_expr,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(126), 3,
      sym_varref,
      sym__any_expr,
      sym__const,
    ACTIONS(251), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
  [3587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [3614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [3641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 21,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
      anon_sym_never,
      anon_sym_trace,
      anon_sym_typedef,
      anon_sym_mtype,
      anon_sym_COMMA,
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
  [3668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(259), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
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
  [3697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      aux_sym_decl_lst_repeat1,
    ACTIONS(263), 19,
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
  [3728] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(265), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(31), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3770] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(269), 5,
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
  [3812] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(273), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(115), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3854] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(277), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(103), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
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
  [3922] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(283), 5,
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
  [3964] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(102), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4006] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(291), 5,
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
  [4048] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(295), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(106), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4090] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(299), 5,
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
  [4132] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(303), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(122), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4174] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(307), 5,
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
  [4216] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(311), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(28), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4258] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(315), 5,
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
  [4300] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(319), 5,
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
  [4342] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(323), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(27), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4384] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(327), 5,
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
  [4426] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(331), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(22), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4468] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(335), 5,
      anon_sym_timeout,
      anon_sym_np_,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
    STATE(24), 5,
      sym_varref,
      sym__any_expr,
      sym_binary_expr,
      sym_unary_expr,
      sym__const,
  [4510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
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
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 20,
      ts_builtin_sym_end,
      anon_sym_proctype,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_init,
      anon_sym_SEMI,
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
  [4562] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(339), 5,
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
  [4604] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(343), 5,
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
  [4646] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_len,
    ACTIONS(41), 1,
      anon_sym_run,
    ACTIONS(175), 1,
      sym_name,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_enabled,
      anon_sym_pc_value,
    ACTIONS(45), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(347), 5,
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
  [4688] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_arg_lst_repeat1,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    ACTIONS(75), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(69), 13,
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
      anon_sym_PERCENT,
  [4770] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      anon_sym_DASH_GT,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4818] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PLUS,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(359), 1,
      anon_sym_DASH_GT,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4866] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(363), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4910] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(365), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [4954] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4997] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 17,
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
  [5063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 17,
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
  [5086] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    ACTIONS(379), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(377), 13,
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
      anon_sym_PERCENT,
  [5156] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [5179] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [5202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    ACTIONS(197), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(191), 13,
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
      anon_sym_PERCENT,
  [5229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 17,
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
  [5252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 17,
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
  [5275] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5318] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [5341] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 17,
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
  [5407] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [5430] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 17,
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
  [5496] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [5519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 17,
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
  [5542] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 17,
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
  [5608] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_unsigned,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_one_decl,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(179), 1,
      sym_typename,
    STATE(203), 1,
      sym_decl_lst,
    ACTIONS(23), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(19), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5646] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_unsigned,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_one_decl,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(179), 1,
      sym_typename,
    STATE(221), 1,
      sym_decl_lst,
    ACTIONS(23), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(19), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5684] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_AMP,
    ACTIONS(87), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [5724] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_unsigned,
    STATE(62), 1,
      sym_one_decl,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(129), 1,
      sym_visible,
    STATE(179), 1,
      sym_typename,
    STATE(217), 1,
      sym_decl_lst,
    ACTIONS(23), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(19), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5759] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_unsigned,
    STATE(76), 1,
      sym_unsigned_decl,
    STATE(92), 1,
      sym_one_decl,
    STATE(129), 1,
      sym_visible,
    STATE(179), 1,
      sym_typename,
    ACTIONS(23), 2,
      anon_sym_hidden,
      anon_sym_show,
    ACTIONS(19), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5791] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_unsigned,
    STATE(91), 1,
      sym_unsigned_decl,
    STATE(168), 1,
      sym_typename,
    ACTIONS(19), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(165), 1,
      sym_typename,
    ACTIONS(19), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 8,
      anon_sym_mtype,
      anon_sym_unsigned,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(178), 1,
      sym_typename,
    ACTIONS(19), 7,
      anon_sym_mtype,
      anon_sym_bit,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_chan,
  [5859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym__const,
    ACTIONS(417), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [5872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [5883] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_priority,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
    ACTIONS(423), 1,
      anon_sym_provided,
    STATE(160), 1,
      sym_priority,
    STATE(215), 1,
      sym_enabler,
  [5902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(70), 1,
      sym__const,
    ACTIONS(425), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [5915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_priority,
    ACTIONS(423), 1,
      anon_sym_provided,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_priority,
    STATE(191), 1,
      sym_enabler,
  [5934] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_priority,
    ACTIONS(423), 1,
      anon_sym_provided,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_priority,
    STATE(208), 1,
      sym_enabler,
  [5953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [5964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(192), 1,
      sym__const,
    ACTIONS(433), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [5977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(222), 1,
      sym__const,
    ACTIONS(435), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_skip,
      sym_number,
  [5990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_AMP_AMP,
    ACTIONS(419), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [6003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_AMP_AMP,
    ACTIONS(441), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(439), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      aux_sym__sequence_repeat1,
  [6030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      aux_sym__sequence_repeat1,
  [6043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_arg_lst_repeat1,
  [6056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_mtype_repeat1,
  [6069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
    ACTIONS(423), 1,
      anon_sym_provided,
    STATE(215), 1,
      sym_enabler,
  [6082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_mtype_repeat1,
  [6095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      aux_sym_mtype_repeat1,
  [6108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym__sequence_repeat1,
  [6121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    ACTIONS(469), 1,
      anon_sym_EQ,
    ACTIONS(471), 1,
      sym_name,
  [6134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      aux_sym_mtype_repeat1,
  [6147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(475), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      aux_sym_decl_lst_repeat1,
  [6160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    STATE(154), 1,
      aux_sym_decl_lst_repeat1,
  [6173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      aux_sym_mtype_repeat1,
  [6186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_ch_init_repeat1,
  [6199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_provided,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_enabler,
  [6212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_ch_init_repeat1,
  [6225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_provided,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(191), 1,
      sym_enabler,
  [6238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_AMP_AMP,
    ACTIONS(441), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [6251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    ACTIONS(494), 1,
      anon_sym_SEMI,
    STATE(164), 1,
      aux_sym__sequence_repeat1,
  [6264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_name,
  [6273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      aux_sym__sequence_repeat1,
  [6286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      aux_sym_ch_init_repeat1,
  [6299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_arg_lst_repeat1,
  [6312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_name,
    STATE(34), 1,
      sym_varref,
  [6322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_name,
    STATE(58), 1,
      sym_ivar,
  [6332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_name,
    STATE(230), 1,
      sym_varref,
  [6342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_name,
    STATE(20), 1,
      sym_varref,
  [6352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_name,
    STATE(48), 1,
      sym_varref,
  [6362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    ACTIONS(515), 1,
      anon_sym_SEMI,
  [6380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [6396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_name,
    STATE(67), 1,
      sym_ivar,
  [6406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_name,
    STATE(226), 1,
      sym_varref,
  [6416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_name,
    STATE(59), 1,
      sym_ivar,
  [6434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_name,
    STATE(47), 1,
      sym_varref,
  [6444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_proctype,
    ACTIONS(521), 1,
      anon_sym_LBRACK,
  [6462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
  [6469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
  [6476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
  [6483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
  [6490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_name,
  [6497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_name,
  [6504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
  [6511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
  [6518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
  [6525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
  [6532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
  [6539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [6546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
  [6553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
  [6560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
  [6567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_name,
  [6574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
  [6581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
  [6588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_of,
  [6595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
  [6602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [6609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
  [6616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_name,
  [6623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
  [6630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
  [6637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
  [6644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COLON,
  [6651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
  [6658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym_name,
  [6665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
  [6672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
  [6679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
  [6686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
  [6693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_LPAREN,
  [6700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
  [6707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_proctype,
  [6714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym_name,
  [6721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
  [6728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [6735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RBRACK,
  [6742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_proctype,
  [6749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
  [6756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
  [6763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
  [6770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
  [6777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_name,
  [6784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_name,
  [6791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [6798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_name,
  [6805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
  [6812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
  [6819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 194,
  [SMALL_STATE(5)] = 291,
  [SMALL_STATE(6)] = 388,
  [SMALL_STATE(7)] = 485,
  [SMALL_STATE(8)] = 582,
  [SMALL_STATE(9)] = 679,
  [SMALL_STATE(10)] = 776,
  [SMALL_STATE(11)] = 873,
  [SMALL_STATE(12)] = 967,
  [SMALL_STATE(13)] = 1023,
  [SMALL_STATE(14)] = 1079,
  [SMALL_STATE(15)] = 1135,
  [SMALL_STATE(16)] = 1191,
  [SMALL_STATE(17)] = 1243,
  [SMALL_STATE(18)] = 1299,
  [SMALL_STATE(19)] = 1352,
  [SMALL_STATE(20)] = 1410,
  [SMALL_STATE(21)] = 1460,
  [SMALL_STATE(22)] = 1524,
  [SMALL_STATE(23)] = 1578,
  [SMALL_STATE(24)] = 1628,
  [SMALL_STATE(25)] = 1678,
  [SMALL_STATE(26)] = 1744,
  [SMALL_STATE(27)] = 1794,
  [SMALL_STATE(28)] = 1854,
  [SMALL_STATE(29)] = 1922,
  [SMALL_STATE(30)] = 1992,
  [SMALL_STATE(31)] = 2042,
  [SMALL_STATE(32)] = 2092,
  [SMALL_STATE(33)] = 2142,
  [SMALL_STATE(34)] = 2192,
  [SMALL_STATE(35)] = 2242,
  [SMALL_STATE(36)] = 2305,
  [SMALL_STATE(37)] = 2368,
  [SMALL_STATE(38)] = 2430,
  [SMALL_STATE(39)] = 2499,
  [SMALL_STATE(40)] = 2568,
  [SMALL_STATE(41)] = 2623,
  [SMALL_STATE(42)] = 2678,
  [SMALL_STATE(43)] = 2733,
  [SMALL_STATE(44)] = 2771,
  [SMALL_STATE(45)] = 2806,
  [SMALL_STATE(46)] = 2843,
  [SMALL_STATE(47)] = 2880,
  [SMALL_STATE(48)] = 2912,
  [SMALL_STATE(49)] = 2944,
  [SMALL_STATE(50)] = 2977,
  [SMALL_STATE(51)] = 3012,
  [SMALL_STATE(52)] = 3042,
  [SMALL_STATE(53)] = 3090,
  [SMALL_STATE(54)] = 3122,
  [SMALL_STATE(55)] = 3154,
  [SMALL_STATE(56)] = 3202,
  [SMALL_STATE(57)] = 3250,
  [SMALL_STATE(58)] = 3282,
  [SMALL_STATE(59)] = 3314,
  [SMALL_STATE(60)] = 3346,
  [SMALL_STATE(61)] = 3393,
  [SMALL_STATE(62)] = 3420,
  [SMALL_STATE(63)] = 3451,
  [SMALL_STATE(64)] = 3482,
  [SMALL_STATE(65)] = 3509,
  [SMALL_STATE(66)] = 3540,
  [SMALL_STATE(67)] = 3587,
  [SMALL_STATE(68)] = 3614,
  [SMALL_STATE(69)] = 3641,
  [SMALL_STATE(70)] = 3668,
  [SMALL_STATE(71)] = 3697,
  [SMALL_STATE(72)] = 3728,
  [SMALL_STATE(73)] = 3770,
  [SMALL_STATE(74)] = 3812,
  [SMALL_STATE(75)] = 3854,
  [SMALL_STATE(76)] = 3896,
  [SMALL_STATE(77)] = 3922,
  [SMALL_STATE(78)] = 3964,
  [SMALL_STATE(79)] = 4006,
  [SMALL_STATE(80)] = 4048,
  [SMALL_STATE(81)] = 4090,
  [SMALL_STATE(82)] = 4132,
  [SMALL_STATE(83)] = 4174,
  [SMALL_STATE(84)] = 4216,
  [SMALL_STATE(85)] = 4258,
  [SMALL_STATE(86)] = 4300,
  [SMALL_STATE(87)] = 4342,
  [SMALL_STATE(88)] = 4384,
  [SMALL_STATE(89)] = 4426,
  [SMALL_STATE(90)] = 4468,
  [SMALL_STATE(91)] = 4510,
  [SMALL_STATE(92)] = 4536,
  [SMALL_STATE(93)] = 4562,
  [SMALL_STATE(94)] = 4604,
  [SMALL_STATE(95)] = 4646,
  [SMALL_STATE(96)] = 4688,
  [SMALL_STATE(97)] = 4737,
  [SMALL_STATE(98)] = 4770,
  [SMALL_STATE(99)] = 4818,
  [SMALL_STATE(100)] = 4866,
  [SMALL_STATE(101)] = 4910,
  [SMALL_STATE(102)] = 4954,
  [SMALL_STATE(103)] = 4997,
  [SMALL_STATE(104)] = 5040,
  [SMALL_STATE(105)] = 5063,
  [SMALL_STATE(106)] = 5086,
  [SMALL_STATE(107)] = 5129,
  [SMALL_STATE(108)] = 5156,
  [SMALL_STATE(109)] = 5179,
  [SMALL_STATE(110)] = 5202,
  [SMALL_STATE(111)] = 5229,
  [SMALL_STATE(112)] = 5252,
  [SMALL_STATE(113)] = 5275,
  [SMALL_STATE(114)] = 5318,
  [SMALL_STATE(115)] = 5341,
  [SMALL_STATE(116)] = 5384,
  [SMALL_STATE(117)] = 5407,
  [SMALL_STATE(118)] = 5430,
  [SMALL_STATE(119)] = 5473,
  [SMALL_STATE(120)] = 5496,
  [SMALL_STATE(121)] = 5519,
  [SMALL_STATE(122)] = 5542,
  [SMALL_STATE(123)] = 5585,
  [SMALL_STATE(124)] = 5608,
  [SMALL_STATE(125)] = 5646,
  [SMALL_STATE(126)] = 5684,
  [SMALL_STATE(127)] = 5724,
  [SMALL_STATE(128)] = 5759,
  [SMALL_STATE(129)] = 5791,
  [SMALL_STATE(130)] = 5813,
  [SMALL_STATE(131)] = 5829,
  [SMALL_STATE(132)] = 5843,
  [SMALL_STATE(133)] = 5859,
  [SMALL_STATE(134)] = 5872,
  [SMALL_STATE(135)] = 5883,
  [SMALL_STATE(136)] = 5902,
  [SMALL_STATE(137)] = 5915,
  [SMALL_STATE(138)] = 5934,
  [SMALL_STATE(139)] = 5953,
  [SMALL_STATE(140)] = 5964,
  [SMALL_STATE(141)] = 5977,
  [SMALL_STATE(142)] = 5990,
  [SMALL_STATE(143)] = 6003,
  [SMALL_STATE(144)] = 6017,
  [SMALL_STATE(145)] = 6030,
  [SMALL_STATE(146)] = 6043,
  [SMALL_STATE(147)] = 6056,
  [SMALL_STATE(148)] = 6069,
  [SMALL_STATE(149)] = 6082,
  [SMALL_STATE(150)] = 6095,
  [SMALL_STATE(151)] = 6108,
  [SMALL_STATE(152)] = 6121,
  [SMALL_STATE(153)] = 6134,
  [SMALL_STATE(154)] = 6147,
  [SMALL_STATE(155)] = 6160,
  [SMALL_STATE(156)] = 6173,
  [SMALL_STATE(157)] = 6186,
  [SMALL_STATE(158)] = 6199,
  [SMALL_STATE(159)] = 6212,
  [SMALL_STATE(160)] = 6225,
  [SMALL_STATE(161)] = 6238,
  [SMALL_STATE(162)] = 6251,
  [SMALL_STATE(163)] = 6264,
  [SMALL_STATE(164)] = 6273,
  [SMALL_STATE(165)] = 6286,
  [SMALL_STATE(166)] = 6299,
  [SMALL_STATE(167)] = 6312,
  [SMALL_STATE(168)] = 6322,
  [SMALL_STATE(169)] = 6332,
  [SMALL_STATE(170)] = 6342,
  [SMALL_STATE(171)] = 6352,
  [SMALL_STATE(172)] = 6362,
  [SMALL_STATE(173)] = 6370,
  [SMALL_STATE(174)] = 6380,
  [SMALL_STATE(175)] = 6388,
  [SMALL_STATE(176)] = 6396,
  [SMALL_STATE(177)] = 6406,
  [SMALL_STATE(178)] = 6416,
  [SMALL_STATE(179)] = 6424,
  [SMALL_STATE(180)] = 6434,
  [SMALL_STATE(181)] = 6444,
  [SMALL_STATE(182)] = 6452,
  [SMALL_STATE(183)] = 6462,
  [SMALL_STATE(184)] = 6469,
  [SMALL_STATE(185)] = 6476,
  [SMALL_STATE(186)] = 6483,
  [SMALL_STATE(187)] = 6490,
  [SMALL_STATE(188)] = 6497,
  [SMALL_STATE(189)] = 6504,
  [SMALL_STATE(190)] = 6511,
  [SMALL_STATE(191)] = 6518,
  [SMALL_STATE(192)] = 6525,
  [SMALL_STATE(193)] = 6532,
  [SMALL_STATE(194)] = 6539,
  [SMALL_STATE(195)] = 6546,
  [SMALL_STATE(196)] = 6553,
  [SMALL_STATE(197)] = 6560,
  [SMALL_STATE(198)] = 6567,
  [SMALL_STATE(199)] = 6574,
  [SMALL_STATE(200)] = 6581,
  [SMALL_STATE(201)] = 6588,
  [SMALL_STATE(202)] = 6595,
  [SMALL_STATE(203)] = 6602,
  [SMALL_STATE(204)] = 6609,
  [SMALL_STATE(205)] = 6616,
  [SMALL_STATE(206)] = 6623,
  [SMALL_STATE(207)] = 6630,
  [SMALL_STATE(208)] = 6637,
  [SMALL_STATE(209)] = 6644,
  [SMALL_STATE(210)] = 6651,
  [SMALL_STATE(211)] = 6658,
  [SMALL_STATE(212)] = 6665,
  [SMALL_STATE(213)] = 6672,
  [SMALL_STATE(214)] = 6679,
  [SMALL_STATE(215)] = 6686,
  [SMALL_STATE(216)] = 6693,
  [SMALL_STATE(217)] = 6700,
  [SMALL_STATE(218)] = 6707,
  [SMALL_STATE(219)] = 6714,
  [SMALL_STATE(220)] = 6721,
  [SMALL_STATE(221)] = 6728,
  [SMALL_STATE(222)] = 6735,
  [SMALL_STATE(223)] = 6742,
  [SMALL_STATE(224)] = 6749,
  [SMALL_STATE(225)] = 6756,
  [SMALL_STATE(226)] = 6763,
  [SMALL_STATE(227)] = 6770,
  [SMALL_STATE(228)] = 6777,
  [SMALL_STATE(229)] = 6784,
  [SMALL_STATE(230)] = 6791,
  [SMALL_STATE(231)] = 6798,
  [SMALL_STATE(232)] = 6805,
  [SMALL_STATE(233)] = 6812,
  [SMALL_STATE(234)] = 6819,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varref, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varref, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 6),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varref, 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 7),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 7),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 6),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varref, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_decl, 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(229),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(234),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(228),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_expr, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_expr, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_decl_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_decl_repeat1, 2), SHIFT_REPEAT(176),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_lst, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ch_init, 8),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_lst_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_lst_repeat1, 2), SHIFT_REPEAT(128),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ch_init, 7),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsigned_decl, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_lst, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_lst, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__const_expr, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_lst_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utype, 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proctype, 10),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__const, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__const, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proctype, 8),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtype, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtype, 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_never, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mtype, 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proctype, 9),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init, 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proctype, 7),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proctype, 11),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visible, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_andor_expr, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmnt, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(11),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_lst, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mtype_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mtype_repeat1, 2), SHIFT_REPEAT(219),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typename, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_decl_lst, 2), SHIFT(128),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_decl_lst, 1), SHIFT(128),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ch_init_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ch_init_repeat1, 2), SHIFT_REPEAT(132),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__sequence, 1), SHIFT(11),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__sequence, 2), SHIFT(11),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_lst_repeat1, 2), SHIFT_REPEAT(93),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmnt, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enabler, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chanpoll, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_active, 4),
  [597] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
