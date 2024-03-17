# Tree sitter promela

Promela grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Helix installation

Add promela in `languages.toml`

```toml
[[language]]
name = "promela"
scope = "source.pml"
file-types = ["pml"]
comment-token = "//"
roots = []
indent = { tab-width = 2, unit = "  " }

[[grammar]]
name = "promela"
source = { git = "https://github.com/riwanou/tree-sitter-promela", rev = "048ed7e7b17cf7a78543abd4c90a7892491656d1" }
```

Fetch and build the grammar

```sh
hx -g fetch
hx -g build
```

Copy the highlight query from the repository in `runtime/queries/promela`

```sh
# from .config/helix or you custom helix config directory
mkdir -p runtime/queries/promela 
cp runtime/grammars/sources/promela/queries/highlights.scm runtime/queries/promela
```

## References

- [Promela Grammar](https://spinroot.com/spin/Man/grammar.html#varref)
- [Language Reference](https://spinroot.com/spin/Man/promela.html)
- [Concise Promela Reference by Rob Gerth](https://spinroot.com/spin/Man/Quick.html)
- [Spin website](https://spinroot.com/spin/whatispin.html)

