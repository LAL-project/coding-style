# Specification of the style to be followed in LAL

This repository is used to define the coding style of the [Linear Arrangement Library](https://github.com/LAL-project/linear-arrangement-library). This is defined via the well-known [clang-format](https://releases.llvm.org/18.1.0/tools/clang/docs/ClangFormatStyleOptions.html) styling tool, whose exact options and their values can be found in the [.clang-format](https://github.com/LAL-project/coding-style/blob/main/.clang-format) file.

Other specifications not present in that file are listed below. In what follows, consider 'class' and 'struct' to be synonyms.

## Names of functions, classes and variables

- Use `snake_case`.
- Use self-contained names.

## Classes

- Access modifiers should be written in this order: `public`, `protected`, and `private`.
- Within each modifier, write first all the definitions of types, enums and nested classes.
- All member variables of a class have to be prefixed with `m_` for member.

## Template functions and classes

- All names of type parameters should be suffixed with `_t`.

## Functions

- All functions should have the `noexcept` qualifier, except when otherwise required.
- All non-void returning functions must be preceded by
	- [[nodiscard]]
