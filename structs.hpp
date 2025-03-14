/**
 * clang-style definition for LAL
 * Copyright (C) 2024 - 2025  Lluís Alemany Puig
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 * 
 * Contact:
 *
 *     Lluís Alemany Puig (lluis.alemany.puig@upc.edu)
 *         LQMC (Quantitative, Mathematical, and Computational Linguisitcs)
 *         CQL (Complexity and Quantitative Linguistics Lab)
 *         Jordi Girona St 1-3, Campus Nord UPC, 08034 Barcelona.   CATALONIA, SPAIN
 *         Webpage: https://cqllab.upc.edu/people/lalemany/
 */

#pragma once

// C++ includes
#include <string>

struct empty_struct { };

struct foo {
public:

	foo() noexcept
		: m_j(0),
		  m_i(9)
	{ }

	foo(const foo& f) noexcept = default;
	foo(foo&& f) noexcept = default;

	foo& operator= (const foo& f) noexcept = default;
	foo& operator= (foo&& f) noexcept = delete;

	~foo() noexcept = default;

	struct nested_struct_2 {
	public:

	protected:

	private:
	};

protected:

	template <typename T>
	void do_something([[maybe_unused]] const T& t) noexcept
	{ }

	/// Documentation of member @e m_j
	int m_j;
	/* comment */

	struct nested_struct_1 {
	public:

	protected:

	private:
	};

private:

	/// Documentation of member @e m_i
	int m_i;

	struct nested_struct_3 {
	public:

	protected:

	private:
	};

	[[nodiscard]] inline static constexpr int
	function_with_a_long_name() noexcept
	{
		return 1;
	}
};

struct foo_2 {
public:

	foo_2(
		int param1,
		int param2,
		[[maybe_unused]] int param3,
		[[maybe_unused]] int param4
	) noexcept
		: m_j(param1),
		  m_i(param2)
	{ }

	struct nested_struct_2 {
	public:

	protected:

	private:
	};

protected:

	/// Documentation of member @e m_j
	int m_j;
	/* comment */

	struct nested_struct_1 {
	public:

	protected:

	private:
	};

private:

	/// Documentation of member @e m_i
	int m_i;

	struct nested_struct_3 {
	public:

	protected:

	private:
	};
};

struct S1 {
	int a;
	float b;
	std::string s;
};

S1 return_struct_1() noexcept
{
	return S1{.a = 2, .b = 4.0, .s = "asdf"};
}

struct S2 {
	int aaaaaaaaaaaaaaaaaaaaaa;
	float bbbbbbbbbbbbbbbbbbbbbbbb;
	std::string ssssssssssssssssssssss;

	S2& something() noexcept
	{
		return *this;
	}
};

S2 return_struct_2() noexcept
{
	return S2{
		.aaaaaaaaaaaaaaaaaaaaaa = 2,
		.bbbbbbbbbbbbbbbbbbbbbbbb = 4.0,
		.ssssssssssssssssssssss = "asdf"
	};
}

void do_something() noexcept
{
	S2 s1;
	s1.something().something().something().something();
	s1.something().something().something().something().something();
	s1.something().something().something().something().something().something();
	s1.something()
		.something()
		.something()
		.something()
		.something()
		.something()
		.something();

	auto s2 = return_struct_2();
	s2.something().something().something().something();
	s2.something().something().something().something().something();
	s2.something().something().something().something().something().something();
	s2.something()
		.something()
		.something()
		.something()
		.something()
		.something()
		.something();
}
