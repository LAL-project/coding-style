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

#include <iostream>

template <typename t1>
class templated_class_1 {
public:

protected:

	template <typename T>
	void do_something([[maybe_unused]] const T& t) noexcept
	{ }

private:
};

template <typename t1, class t2>
class templated_class_2 {
public:

	int m_i, m_j;

	templated_class_2(
		int param1,
		int param2,
		[[maybe_unused]] int param3,
		[[maybe_unused]] int param4
	) noexcept
		: m_j(param1),
		  m_i(param2)
	{
		std::cout << m_i << '\n';
	}

	void do_something(
		int param1,
		int param2,
		[[maybe_unused]] int param3,
		[[maybe_unused]] int param4
	) const noexcept
	{
		std::cout << param1 + param2 * m_i << '\n';
	}

protected:

private:
};

template <typename t1, class t2, typename t3>
class templated_class_3 {
public:

protected:

private:
};

class A {
public:
};

class B : public A {
public:
};
