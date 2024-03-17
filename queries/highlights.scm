; based on helix scopes: https://docs.helix-editor.com/themes.html#scopes

((typename) @type.builtin)
"unsigned" @type.builtin

(mtype (name) @type.enum.variant)

[
 "true"
 "false"
 "skip"
] @constant.builtin

((number) @constant.numeric)

(macro . (name) @constant)

((string) @string)

((comment) @comment)

[
 "timeout"
 "np_"
] @variable.builtin

params: (decl_lst 
 (one_decl 
  (ivar
   (name) @variable.parameter)))

label: (name) @label

[
  ";"
  "->"
  ":"
  ","
] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

[
 "if"
 "fi"
 "else"
] @keyword.control.conditional

[
 "do"
 "od"
 "break"
] @keyword.control.repeat

[
 "always"
 "eventually"
 "negation"
 "until"
 "implies"
 "equivalent"
 "of"
] @keyword.operator

[
 "#define" 
 "#include"
]
@keyword.directive.define

[
 "ltl"
 "proctype"
 "inline"
 "init"
 "never"
 "trace"
 "typedef"
 "mtype"
 "xr"
 "xs"
 "atomic"
 "d_step"
 "goto"
 "run"
] @keyword

[
 "active"
 "priority"
 "provided"
 "hidden"
 "show"
] @keyword.storage.modifier

[
 "[]"
 "<>"
 "!"
 "U"
 "W"
 "V"
 "&&"
 "||"
 "/\\"
 "\\/"
 "->"
 "<->"
 "|"
 "="
 "^"
 "&"
 "=="
 "!="
 ">"
 ">="
 "<"
 "<<"
 ">>"
 "+"
 "-"
 "*"
 "/"
 "%"
 "~"
 "-"
 "!"
 "?"
 "++"
 "--"
 "@"
] @operator

[
 "eval"
 "printf"
 "printm"
 "assert"
 "len"
 "enabled"
 "pc_value"
 "full"
 "empty"
 "nfull"
 "nempty"
] @function.builtin

function: (name) @function.method

(inline_ltl . (name) @function.special)

((name) @constant
  (#match? @constant "^[A-Z][A-Z0-9_]*$"))

((name) @variable)

