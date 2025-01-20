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

#include <iostream>
#include <vector>
using namespace std;

// the [[nodiscard]] attribute prevents clang-format (v19.1.7) from ordering the
// qualifiers 'constexpr' and 'static' properly.
[[nodiscard]] constexpr static inline int function_with_nodiscard() noexcept
{
	return 1;
}
// the attributes are ordered according to the specified order in the
// .clang-format file
static constexpr inline int function_without_nodiscard() noexcept
{
	return 1;
}

int main()
{
	static constexpr int VV = 1234;
	if (VV == 1235) {
		std::cout << "WRONG!\n";
	}

	// the [[maybe_unused]] attribute prevents clang-format (v19.1.7) from
	// ordering the qualifiers 'constexpr' and 'static' properly.
	[[maybe_unused]] constexpr static int A = 1234;
	// the attributes are ordered according to the specified order in the
	// .clang-format file
	static constexpr int B = 1234;

	std::vector<int> asdf{1, 2, 3, 4, 5, 6, 7, 8};
	for (int v : asdf) {
		std::cout
			<< "--------------------------"
			<< "This is a super long std::cout message to display values " << v
			<< '\n'
			<< "This message continues even after the first value has been "
			   "displayed: "
			<< v * v << '\n';

		std::cout
			<< "--------------------------"
			<< "This is a super long std::cout message to display values!! "
			<< v << '\n'
			<< "This message continues even after the first value has been "
			   "displayed: "
			<< v * (v + 3) << '\n';
	}

	std::cout << "Code outside a block\n";
	{
		// this is code inside a scoped-block
		int x;
		std::cin >> x;
	}

	[[maybe_unused]] const int k = (3 + 4) * (5 - 3);
	if (k + 3 == 5 and (3 * 5 * 6 == 15 || k % 2 == 0)) {
	}
}
