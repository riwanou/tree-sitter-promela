/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "promela",

  conflicts: ($) => [[$.decl_lst]],

  rules: {
    source_file: ($) => repeat1($._module),

    _module: ($) =>
      choice(
        $.proctype,
        $.init,
        $.never,
        $.trace,
        $.utype,
        $.mtype,
        $.decl_lst,
      ),

    proctype: ($) => "bloup",

    init: ($) => seq("init", "{", $._sequence, "}"),

    never: ($) => seq("never", "{", $._sequence, "}"),

    trace: ($) => seq("trace", "{", $._sequence, "}"),

    utype: ($) => seq("typedef", $.name, "{", $.decl_lst, "}"),

    mtype: ($) =>
      seq("mtype", optional("="), "{", $.name, repeat(seq(",", $.name)), "}"),

    decl_lst: ($) => seq($.one_decl, repeat(seq(";", $.one_decl))),

    one_decl: ($) =>
      choice(
        seq(optional($.visible), $.typename, $.ivar, repeat(seq(",", $.ivar))),
        seq(optional($.visible), $.unsigned_decl),
      ),

    unsigned_decl: ($) =>
      seq("unsigned", $.name, ":", $.const, optional(seq("=", $._any_expr))),

    typename: ($) =>
      choice("bit", "bool", "byte", "short", "int", "mtype", "chan"),

    active: ($) => seq("active", optional(seq("[", $.const, "]"))),

    priority: ($) => seq("priority", $.const),

    enabler: ($) => seq("provided", "(", $._expr, ")"),

    visible: ($) => choice("hidden", "show"),

    _sequence: ($) => seq($._step, repeat(seq(";", $._step))),

    _step: ($) => choice($._stmnt, $.decl_lst),

    ivar: ($) =>
      seq(
        $.name,
        optional(seq("[", $.const, "]")),
        optional(choice(seq("=", $._any_expr), seq("=", $.ch_init))),
      ),

    ch_init: ($) =>
      seq(
        "[",
        $.const,
        "]",
        "of",
        "{",
        seq($.typename, repeat(seq(",", $.typename))),
        "}",
      ),

    varref: ($) =>
      seq(
        $.name,
        optional(seq("[", $._any_expr, "]")),
        optional(seq(".", $.varref)),
      ),

    assign: ($) => choice(
      seq($.varref, "=", $._any_expr),
      seq($.varref, "++"),
      seq($.varref, "--"),
    ),

    _stmnt: ($) => choice(
      seq("atomic", "{", $._sequence, "}"),
      $.assign,
    ),

    _any_expr: ($) =>
      choice(
        seq("(", $._any_expr, ")"),
        $.binary_expr,
        $.unary_expr,
        seq("(", $._any_expr, "->", $._any_expr, ":", $._any_expr, ")"),
        $.const,
        "timeout",
        "np_",
        seq("enabled", "(", $._any_expr, ")"),
        seq("pc_value", "(", $._any_expr, ")"),
      ),

    _expr: ($) =>
      choice(
        $._any_expr,
        seq("(", $._any_expr, ")"),
        $.andor_expr,
        seq($.chanpoll, "(", $.varref, ")"),
      ),

    chanpoll: ($) => choice("full", "empty", "nfull", "nempty"),

    andor_expr: ($) =>
      choice(
        prec.left(1, seq($._expr, "||", $._expr)),
        prec.left(2, seq($._expr, "&&", $._expr)),
      ),

    binary_expr: ($) => {
      const table = [
        ["|", 3],
        ["^", 4],
        ["&", 5],
        ["==", 6],
        ["!=", 6],
        [">", 7],
        [">=", 7],
        ["<=", 7],
        ["<", 7],
        ["<<", 8],
        [">>", 8],
        ["+", 9],
        ["-", 9],
        ["*", 10],
        ["/", 10],
        ["%", 10],
      ];

      return choice(
        ...table.map(([operator, precedence]) => {
          return prec.left(
            precedence,
            seq(
              field("left", $._any_expr),
              // @ts-ignore
              field("operator", operator),
              field("right", $._any_expr),
            ),
          );
        }),
      );
    },

    unary_expr: ($) => prec.left(11, seq(choice("~", "-", "!"), $._any_expr)),

    const: ($) => choice("true", "false", "skip", $.number),

    string: ($) => /\"\w*\"/,

    name: ($) => /[a-zA-Z_][a-zA-Z_\d]*/,

    number: ($) => /\d+/,
  },
});
