module.exports = grammar({
	name: "combiner",
	extras: ($) => [/ |\t|\r/, $.line_comment],

	rules: {
<<<<<<< HEAD
		program: ($) => seq(
			optional($.version),
			repeat("\n"),
			sep(repeat1("\n"), $.section),
			sep(repeat1("\n"), $._item)
		),
		_item: ($) => choice($.instr, $.declaration),
=======
		program: ($) => sep(repeat1("\n"), $._item),
		_item: ($) => choice($.instr, $.declaration, $.version),
>>>>>>> 535f5ea (Initial commit)
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
<<<<<<< HEAD
			$.depthtest,
			$.cull
=======
			$.depthtest
>>>>>>> 535f5ea (Initial commit)
		),
		texture: ($) => token(prec(1, /(tex[0-3])/)),
		gpu_input: ($) =>
			/primary|fragment_primary|fragment_secondary|previous|constant|previous_buffer/,
		line_comment: ($) => /;.*/,
		float: ($) => token(prec(3, seq(optional(/-/), /[0-9]+\.[0-9]+/))),
		int: ($) => token(prec(2, seq(optional(/-/), /[0-9]+/))),
		number: ($) => choice($.float, $.int),
<<<<<<< HEAD
		alphatest: ($) => seq("alphatest", $.number),
		constant: ($) => seq("constant", $.color),
		color: ($) => choice(
			$.hexcode,
			seq("(", sep(",", $.number), ")"),
		),
		cull: ($) => seq("cull", $.cullface),
		cullface: ($) => /back|front|none/,
		hexcode: ($) => /#[0-9A-F]+/i,
=======
		alphatest: ($) => seq("alpha", $.number),
		constant: ($) => seq("constant", $.color),
		color: ($) => choice(
			/#[0-9A-G]+/,
			seq("(", sep(",", $.number), ")"),
		),
>>>>>>> 535f5ea (Initial commit)
		testfunc: ($) => /always|never|equal|notequal|less|lessequal|greater|greaterequal/,
		writemask: ($) => /red|green|blue|alpha|color|depth|all/,
		write: ($) => seq("write", $.writemask),
		depthtest: ($) => seq("depthtest", $.testfunc),
		normal: ($) => seq("normal", $.texture, ",", $.normalselector),
		normalselector: ($) => /bump|tangent/,
		version: ($) => seq(".version", $.int),
<<<<<<< HEAD
		picaasm: ($) => /[\x00-\x7A\x7C\x7E\x7F\s]*/,
		picablock: ($) => seq("{", $.picaasm, "}"),
		picainclude: ($) => seq(/.[vg]sh/, choice(prec(2, $.identifier), prec(1, $.picablock))),
		tcblock: ($) => /.tc/,
		section: ($) => choice($.tcblock, $.picainclude)
=======
>>>>>>> 535f5ea (Initial commit)
	},
});

function sep(separator, rule) {
	return optional(
		seq(rule, repeat(seq(separator, rule)), optional(separator)),
	);
}
