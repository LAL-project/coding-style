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

void do_something(int i) noexcept
{
	[[maybe_unused]] const auto l0 = [](int p1, int p2) -> int
	{
		return p1 + p2;
	};

	const auto l1 = [](int p1, int p2) -> int
	{
		return p1 + p2;
	};
	std::cout << l1(1, 1) << '\n';

	[[maybe_unused]] const auto l2 = [&](int p1, int p2) -> int
	{
		while (p1 < p2) {
			p1 += i;
			p2 += 4;
		}
		return p1 + p1;
	};

	[[maybe_unused]] const auto l3 = [&](int p1, int p2) -> int
	{
		do {
			p1 += i;
			p2 += 4;
		}
		while (p1 < p2);

		return p1 + p1;
	}(3, 100);

	[[maybe_unused]] const auto l44444444444444444444444444444444444444444444 =
		l2(3, 100);

	[[maybe_unused]] const auto
		l4444444444444444444444444444444444444444444455555555555 = l2(3, 100);
}
