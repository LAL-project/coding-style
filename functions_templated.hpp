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
#include <limits>
#include <type_traits>

template <typename t1>
t1 templated_function_1() noexcept
{
	return std::numeric_limits<t1>::max();
}

template <typename t1, typename t2>
using res = std::conditional_t<std::is_integral_v<t1>, t2, t1>;

template <typename t1, typename t2>
res<t1, t2> templated_function_2() noexcept
{
	return std::numeric_limits<t1>::max();
}

template <typename t1, typename t2>
std::conditional_t<std::is_integral_v<t1>, t2, t1>
templated_function_3() noexcept
{
	return std::numeric_limits<t1>::max();
}
