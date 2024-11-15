; General
[
	(selectorinstr)
	(combineinstr)
] @function.call

[
	(normalselector)
	(writemask)
	(testfunc)
	(cullface)
] @enum

[
	(declaration) 
] @keyword

(section) @label
(picablock) @variable.builtin


(identifier) @variable.builtin

(tevsrc) @type.builtin
(normal
	(texture) @type.builtin)

[
	(input)
	(version (int) @number)
	(hexcode)
] @constant

; Comments
[
  (line_comment)
] @comment

; Literals
(number) @number

[","] @punctuation.delimiter