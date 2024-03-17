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
source = { git = "https://github.com/riwanou/tree-sitter-promela", rev = "69985863d3a1c11d970d9a3185202d0bf3b8d843" }
```

Fetch and build the grammar

```sh
hx -g fetch
hx -g build
```

Copy the highlight and indent queries from the repository in `runtime/queries/promela`

```sh
# from .config/helix or you custom helix config directory
mkdir -p ~/.config/helix/runtime/queries/promela 
cp ~/.config/helix/runtime/grammars/sources/promela/queries/* ~/.config/helix/runtime/queries/promela
```

## References

- [Promela Grammar](https://spinroot.com/spin/Man/grammar.html#varref)
- [Language Reference](https://spinroot.com/spin/Man/promela.html)
- [Concise Promela Reference by Rob Gerth](https://spinroot.com/spin/Man/Quick.html)
- [Spin website](https://spinroot.com/spin/whatispin.html)

