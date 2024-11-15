; General
[
<<<<<<< HEAD
	(selectorinstr)
	(combineinstr)
] @function.call
=======
	(alphatest)
	(normal)
	(combineinstr)
	(write)
	(depthtest)
] @function
>>>>>>> 535f5ea (Initial commit)

[
	(normalselector)
	(writemask)
	(testfunc)
<<<<<<< HEAD
	(cullface)
] @enum

[
	(declaration) 
] @keyword

(section) @label
(picablock) @variable.builtin


=======
] @enum

(declaration) @keyword
>>>>>>> 535f5ea (Initial commit)
(identifier) @variable.builtin

(tevsrc) @type.builtin
(normal
	(texture) @type.builtin)

[
	(input)
	(version (int) @number)
<<<<<<< HEAD
	(hexcode)
=======
>>>>>>> 535f5ea (Initial commit)
] @constant

; Comments
[
  (line_comment)
] @comment

; Literals
(number) @number

[","] @punctuation.delimiter