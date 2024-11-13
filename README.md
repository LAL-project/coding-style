# Specification of the style to be followed in LAL

This repository is used to define the coding style of the [Linear Arrangement Library](https://github.com/LAL-project/linear-arrangement-library). This is defined via the well-known [clang-format](https://releases.llvm.org/18.1.0/tools/clang/docs/ClangFormatStyleOptions.html) styling tool, whose exact options and their values can be found in the [.clang-format](https://github.com/LAL-project/coding-style/blob/main/.clang-format) file. We use the options up to version `18.1`.

Other specifications not present in that file are listed below. In what follows, consider 'class' and 'struct' to be synonyms.

## Names of functions, classes and variables

To write the names of all functions (whether free functions or member functions), classes (whether nested inside another class or not), and variables (whether they are local or global),

- Use `snake_case`.
- Use names as self-contained as possible.

## Classes

- Access modifiers should be written in this order: `public`, `protected`, and `private`.
- Within each modifier, write first all the definitions of types, enums and nested classes. Then, write the function declaration (or, if the function is inlined, its definition), and lastly, write the member variables, if any.
- All member variables of a class have to be prefixed with `m_` for member.

## Template functions and classes

- The names of all type parameters should be suffixed with `_t`.

## Functions

- All functions should have the `noexcept` qualifier, except when otherwise required.
- All non-void returning functions must be preceded by
	- [[nodiscard]]

## Documentation

- We use doxygen to document classes and functions
- When referencing classes, free functions or global variables, include all the namespaces, including the `lal` namespace.
- When referencing a member function of a class:
	- From within the class: there is no need to include the namespaces and the name of the class.
	- From outside the class: always include all the namespaces and the name of the class.
- Do not forget to:
	- Document the type parameters of templates with `@tparam`.
	- Document the precondition of each function.
	- Document the postcondition of all functions that have side effects.
