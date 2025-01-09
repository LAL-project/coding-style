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
#include <iostream>
#include <string_view>

#include "enums.hpp"

[[nodiscard]] static inline constexpr std::string_view
type_to_string(const list_of_types& t) noexcept
{
	switch (t) {
	case list_of_types::asdf:	   return "asdf";
	case list_of_types::b:		   return "b";
	case list_of_types::ccccccccc: return "ccccccccc";
	case list_of_types::d:		   return "d";
	case list_of_types::e:
		std::cout << "We are supposed to do something important here\n";
		return "e";
	case list_of_types::f: return "f";
	}
	return "?";
}

[[nodiscard]] static inline constexpr std::string_view
type_to_string2(const list_of_types& t) noexcept
{
	switch (t) {
	case list_of_types::asdf:	   return "asdf";
	case list_of_types::b:		   return "b";
	case list_of_types::ccccccccc: return "ccccccccc";
	case list_of_types::d:		   return "d";
	case list_of_types::f:		   return "f";
	case list_of_types::e:
		std::cout << "We are supposed to do something important here\n";
		return "e";
	}
	return "?";
}

[[nodiscard]] static inline constexpr int longet_switch_cases(int r) noexcept
{
	int i = r * r + 5;
	switch (r) {
	case 1: {
		i += 3;
		break;
	}
	case 2: {
		i += 4;
		break;
	}
	default: i += 19;
	}
	return i;
}
