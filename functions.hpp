/**
 * clang-style definition for LAL
 * Copyright (C) 2024  Lluís Alemany Puig
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
#include <limits>
#include <string>
#include <type_traits>

// asdf
#include <sstream>
#include <vector>

/**
 * @brief function_with_a_long_name
 * @return
 */
[[nodiscard]] static inline constexpr int function_with_a_long_name() noexcept
{
	return 1;
}

/**
 * @brief function_with_a_long_name
 * @return
 */
[[nodiscard]] static inline constexpr int function_with_a_super_long_name() noexcept
{
	return 1;
}

/**
 * @brief function_with_a_long_name
 * @return
 */
[[nodiscard]] static inline constexpr int
function_short_name(int a, int b, int c, int d) noexcept
{
	return a + b + c + d;
}

/**
 * @brief function_with_a_super_long_name
 * @return
 */
[[nodiscard]] float function_with_a_super_long_name_and_lots_of_params(
	[[maybe_unused]] int a,
	[[maybe_unused]] int b,
	[[maybe_unused]] int c,
	[[maybe_unused]] int d) noexcept;

/**
 * @brief function_with_a_super_long_name
 * @return
 */
[[nodiscard]] float function_with_a_super_long_name_and_lots_of_params_aaaaaaaa(
	[[maybe_unused]] int a,
	[[maybe_unused]] int b,
	[[maybe_unused]] int c,
	[[maybe_unused]] int d) noexcept;

/**
 * @brief function_with_a_super_long_name
 * @return
 */
[[nodiscard]] float function_with_a_super_long_name_and_lots_of_params_aaaaaaaab(
	[[maybe_unused]] int a,
	[[maybe_unused]] int b,
	[[maybe_unused]] int c,
	[[maybe_unused]] int d) noexcept;

[[nodiscard]] float
function_with_an_ever_longer_name_that_does_not_fit_in_s_single_column_of_80_characters(
	[[maybe_unused]] int a,
	[[maybe_unused]] int b,
	[[maybe_unused]] int c,
	[[maybe_unused]] int d) noexcept;

std::string function_with_const(const std::string s) noexcept;
void function_with_const_ampersand(const std::string& s) noexcept;
void function_with_const_pointer_const(const float * const f) noexcept;
void function_with_pointer_const([[maybe_unused]] float * const f) noexcept
{
	const int a = 1;
	const int b = 2;
	const int c = 3;
	const int d = 4;
	[[maybe_unused]] const int res1 = function_short_name(a, b, c, d);
}

void function_with_pointer([[maybe_unused]] float *f) noexcept
{
	const int a = 1;
	const int b = 2;
	const int c = 3;
	const int d = 4;
	[[maybe_unused]] const int res1 =
		function_with_a_super_long_name_and_lots_of_params_aaaaaaaab(a, b, c, d);

	const int aaaaaaaaaaaaaaaaa = 1;
	const int bbbbbbbbbbbbbbbbb = 2;
	const int ccccccccccccccccc = 3;
	const int ddddddddddddddddd = 4;
	[[maybe_unused]] const int res2 =
		function_with_a_super_long_name_and_lots_of_params_aaaaaaaab(
			aaaaaaaaaaaaaaaaa,
			bbbbbbbbbbbbbbbbb,
			ccccccccccccccccc,
			ddddddddddddddddd);

	const int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa = 1;
	const int bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb = 1;
	const int ccccccccccccccccccccccccccccccccccccccccccccccccc = 1;
	const int ddddddddddddddddddddddddddddddddddddddddddddddddd = 1;
	[[maybe_unused]] const int res3 =
		function_with_a_super_long_name_and_lots_of_params_aaaaaaaab(
			aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa,
			bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb,
			ccccccccccccccccccccccccccccccccccccccccccccccccc,
			ddddddddddddddddddddddddddddddddddddddddddddddddd);
}

template <typename t1> t1 templated_function_1() noexcept
{
	return std::numeric_limits<t1>::max();
}

template <typename t1, typename t2>
using res = std::conditional_t<std::is_integral_v<t1>, t2, t1>;

template <typename t1, typename t2> res<t1, t2> templated_function_2() noexcept
{
	return std::numeric_limits<t1>::max();
}

template <typename t1, typename t2>
std::conditional_t<std::is_integral_v<t1>, t2, t1> templated_function_3() noexcept
{
	return std::numeric_limits<t1>::max();
}
