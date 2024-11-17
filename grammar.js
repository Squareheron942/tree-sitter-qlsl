module.exports = grammar({
	name: "qlsl",
	extras: ($) => [/ |\t|\r/, $.line_comment],

	rules: {
		program: ($) => seq(
			optional($.version),
			repeat("\n"),
			sep(repeat1("\n"), $.section),
			sep(repeat1("\n"), $._item)
		),
		_item: ($) => choice($.instr, $.declaration),
		combinefunc: ($) =>
			/add|sub|modulate|replace|add_signed|interpolate|dot3_rgb|dot3_rgba|multiply_add|add_multiply/,
		tevsrc: ($) => choice($.texture, $.gpu_input),
		combineinstr: ($) =>
			seq(field("kind", $.combinefunc), sep(",", $.tevsrc)),
		identifier: ($) => /[a-zA-Z0-9_$]+/,
		input: ($) => /.in[0-9]+/,
		instr: ($) => choice($.combineinstr, $.selectorinstr),
		declaration: ($) => choice(
			seq($.texture, choice($.identifier, $.input)),
			$.constant
		),
		selectorinstr: ($) => choice(
			$.alphatest,
			$.normal,
			$.write,
			$.depthtest,
			$.cull
		),
		texture: ($) => token(prec(1, /(tex[0-3])/)),
		gpu_input: ($) =>
			/primary|fragment_primary|fragment_secondary|previous|constant|previous_buffer/,
		line_comment: ($) => /;.*/,
		float: ($) => token(prec(3, seq(optional(/-/), /[0-9]+\.[0-9]+/))),
		int: ($) => token(prec(2, seq(optional(/-/), /[0-9]+/))),
		number: ($) => choice($.float, $.int),
		alphatest: ($) => seq("alphatest", $.number),
		constant: ($) => seq("constant", $.color),
		color: ($) => choice(
			$.hexcode,
			seq("(", sep(",", $.number), ")"),
		),
		cull: ($) => seq("cull", $.cullface),
		cullface: ($) => /back|front|none/,
		hexcode: ($) => /#[0-9A-F]+/i,
		testfunc: ($) => /always|never|equal|notequal|less|lessequal|greater|greaterequal/,
		writemask: ($) => /red|green|blue|alpha|color|depth|all/,
		write: ($) => seq("write", $.writemask),
		depthtest: ($) => seq("depthtest", $.testfunc),
		normal: ($) => seq("normal", $.texture, ",", $.normalselector),
		normalselector: ($) => /bump|tangent/,
		version: ($) => seq(".version", $.int),
		picaasm: ($) => /[\x00-\x7A\x7C\x7E\x7F\s]*/,
		picablock: ($) => seq("{", $.picaasm, "}"),
		picainclude: ($) => seq(/.[vg]sh/, choice(prec(2, $.identifier), prec(1, $.picablock))),
		tcblock: ($) => /.tc/,
		section: ($) => choice($.tcblock, $.picainclude)
	},
});

function sep(separator, rule) {
	return optional(
		seq(rule, repeat(seq(separator, rule)), optional(separator)),
	);
}
