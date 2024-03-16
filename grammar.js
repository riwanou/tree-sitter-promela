/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
	name: "promela",

	extras: $ => [/\s|\\\r?\n/, $.comment],

	conflicts: $ => [
		[$.decl_lst],
		[$._sequence],
		[$.varref, $._any_expr],
		[$.macros, $._any_expr],
		[$.varref, $._stmnt],
	],

	rules: {
		source_file: $ => repeat1($._module),

		_module: $ =>
			choice(
				$.macros,
				$.inline_ltl,
				$.proctype,
				$.inline,
				$.init,
				$.never,
				$.trace,
				$.utype,
				$.mtype,
				$.decl_lst,
			),

		macros: $ =>
			choice(
				seq("#define", $.name, optional("("), $._const_expr, optional(")")),
				seq("#include", $.string),
			),

		inline_ltl: $ => seq("ltl", $.name, "{", $._ltl, "}"),

		_ltl: $ =>
			choice($.opd_ltl, seq("(", $._ltl, ")"), $.unary_ltl, $.binary_ltl),

		opd_ltl: $ => prec(1, choice($._const_expr, "true", "false")),

		unary_ltl: $ => prec.left(4, seq(choice("[]", "<>", "!"), $._ltl)),

		binary_ltl: $ => {
			const table = [
				["U", 1],
				["W", 1],
				["V", 1],
				["&&", 2],
				["||", 2],
				["/\\", 2],
				["\\/", 2],
				["->", 3],
				["<->", 3],
			];

			return choice(
				...table.map(([operator, precedence]) => {
					return prec.left(
						precedence,
						seq(
							field("left", $._ltl),
							// @ts-ignore
							field("operator", operator),
							field("right", $._ltl),
						),
					);
				}),
			);
		},

		proctype: $ =>
			seq(
				optional($.active),
				"proctype",
				$.name,
				"(",
				optional($.decl_lst),
				")",
				optional($.priority),
				optional($.enabler),
				"{",
				$._sequence,
				"}",
			),

		inline: $ =>
			seq(
				"inline",
				$.name,
				"(",
				optional($.decl_lst),
				")",
				"{",
				$._sequence,
				"}",
			),

		init: $ => seq("init", "{", $._sequence, optional($._sep), "}"),

		never: $ => seq("never", "{", $._sequence, "}"),

		trace: $ => seq("trace", "{", $._sequence, "}"),

		utype: $ => seq("typedef", $.name, "{", $.decl_lst, "}"),

		mtype: $ =>
			seq(
				"mtype",
				optional("="),
				"{",
				$.name,
				repeat(seq(",", $.name)),
				"}",
				optional($._sep),
			),

		decl_lst: $ =>
			seq($.one_decl, repeat(seq($._sep, $.one_decl)), optional($._sep)),

		one_decl: $ =>
			choice(
				seq(optional($.visible), $.typename, $.ivar, repeat(seq(",", $.ivar))),
				seq(optional($.visible), $.unsigned_decl),
			),

		unsigned_decl: $ =>
			seq("unsigned", $.name, ":", $._const, optional(seq("=", $._any_expr))),

		typename: _$ =>
			choice("bit", "bool", "byte", "short", "int", "mtype", "chan"),

		active: $ => seq("active", optional(seq("[", $._const, "]"))),

		priority: $ => seq("priority", $._const),

		enabler: $ => seq("provided", "(", $._expr, ")"),

		visible: _$ => choice("hidden", "show"),

		_sequence: $ => seq($._step, repeat(seq($._sep, $._step))),

		_step: $ =>
			choice(
				$._stmnt,
				$.decl_lst,
				field("xr", seq("xr", $.varref, repeat(seq(",", $.varref)))),
				seq("xs", $.varref, repeat(seq(",", $.varref))),
			),

		ivar: $ =>
			seq(
				$.name,
				optional(seq("[", $._const_expr, "]")),
				optional(choice(seq("=", $._any_expr), seq("=", $.ch_init))),
			),

		ch_init: $ =>
			seq(
				"[",
				$._const_expr,
				"]",
				"of",
				"{",
				seq($.typename, repeat(seq(",", $.typename))),
				"}",
			),

		varref: $ =>
			seq(
				$.name,
				optional(seq("[", $._any_expr, "]")),
				optional(seq(".", $.varref)),
			),

		send: $ =>
			choice(
				seq($.varref, "!", $.send_args),
				seq($.varref, "!", "!", $.send_args),
			),

		receive: $ =>
			choice(
				seq($.varref, "?", $.recv_args),
				seq($.varref, "?", "?", $.recv_args),
				seq($.varref, "?", "<", $.recv_args, ">"),
				seq($.varref, "?", "?", "<", $.recv_args, ">"),
			),

		send_args: $ => choice($.arg_lst, seq($._any_expr, "(", $.arg_lst, ")")),

		arg_lst: $ => seq($._any_expr, repeat(seq(",", $._any_expr))),

		recv_args: $ =>
			choice(
				seq($.recv_arg, repeat(seq(",", $.recv_arg))),
				seq($.recv_arg, "(", $.recv_arg, ")"),
			),

		recv_arg: $ =>
			choice(
				$.varref,
				seq("eval", "(", $.varref, ")"),
				seq(optional("-"), $._const),
			),

		assign: $ =>
			choice(
				seq($.varref, "=", $._any_expr),
				seq($.varref, "++"),
				seq($.varref, "--"),
			),

		_stmnt: $ =>
			choice(
				seq("if", $.options, "fi"),
				seq("do", $.options, "od"),
				seq("atomic", "{", $._sequence, "}"),
				$.send,
				$.receive,
				$.assign,
				field(
					"printf",
					seq("printf", "(", $.string, optional(seq(",", $.arg_lst)), ")"),
				),
				field("printm", seq("printm", "(", $.name, ")")),
				field("assert", seq("assert", $._expr)),
				$._expr,
				"break",
				field("label", seq($.name, ":", $._stmnt)),
			),

		_any_expr: $ =>
			choice(
				seq("(", $._any_expr, ")"),
				$._const_expr,
				seq("(", $._any_expr, "->", $._any_expr, ":", $._any_expr, ")"),
				seq("len", "(", $.varref, ")"),
				"timeout",
				"np_",
				seq("enabled", "(", $._any_expr, ")"),
				seq("pc_value", "(", $._any_expr, ")"),
				seq($.name, "[", $._any_expr, "]", "@", $.name),
				field(
					"run",
					seq(
						"run",
						$.name,
						"(",
						optional($.arg_lst),
						")",
						optional($.priority),
					),
				),
				field(
					"expansion",
					seq($.name, "(", optional($.arg_lst), ")", optional($.priority)),
				),
			),

		_const_expr: $ => choice($.binary_expr, $.unary_expr, $.varref, $._const),

		_expr: $ =>
			prec(
				1,
				choice(
					$._any_expr,
					seq("(", $._any_expr, ")"),
					$.andor_expr,
					seq($.chanpoll, "(", $.varref, ")"),
				),
			),

		chanpoll: _$ => choice("full", "empty", "nfull", "nempty"),

		options: $ => repeat1(seq(":", ":", $._sequence)),

		andor_expr: $ =>
			choice(
				prec.left(1, seq($._expr, "||", $._expr)),
				prec.left(2, seq($._expr, "&&", $._expr)),
			),

		binary_expr: $ => {
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

		unary_expr: $ => prec.left(11, seq(choice("~", "-", "!"), $._any_expr)),

		_const: $ => choice("true", "false", "skip", $.number),

		string: _ => seq('"', /(?:[^"\\]|\\.)*/, '"'),

		name: _ => /[a-zA-Z_][a-zA-Z_\d]*/,

		number: _ => /\d+/,

		_sep: _ => choice(";", "->"),

		comment: _ =>
			token(
				choice(
					seq("//", /(\\+(.|\r?\n)|[^\\\n])*/),
					seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
				),
			),
	},
});
