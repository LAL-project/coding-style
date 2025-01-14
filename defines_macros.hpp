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

// Some of these macros were copied from:
// https://github.com/LAL-project/linear-arrangement-library/blob/master/lal/detail/io/check_correctness.hpp

#define file_does_not_exist(F) "Error: Treebank '" + F + "' does not exist."

#define file_could_not_be_opened(F)                                            \
	"Error: Treebank '" + F + "' could not be opened."

#define invalid_integer(i, chunk)                                              \
	"Error: Value at position '" + std::to_string(i) + "' (value: '" + chunk + \
		"') is not a valid non-negative integer number."

#define head_out_of_bounds(i)                                                  \
	"Error: Head index at position '" + std::to_string(i) +                    \
		"' (value: " + std::to_string(hv[i]) + ") is out of bounds."

#define wrong_num_roots(r)                                                     \
	"Error: Wrong number of roots: " + std::to_string(n_roots) + "."

#define wrong_num_edges(n, m)                                                  \
	"Error: Wrong number of edges. Number of vertices is '" +                  \
		std::to_string(n) + "'. Number of edges is '" + std::to_string(m) +    \
		"'; " + "should be '" + std::to_string(n - 1) + "'."

#define graph_has_cycles_msg                                                   \
	"Error: The graph described is not a tree, i.e., it has cycles."

#define isolated_vertex(u)                                                     \
	"Error: Vertex '" + std::to_string(u) + "' is isolated."

#define self_loop(pos)                                                         \
	"Error: found a self-loop at position '" + std::to_string(pos) + "'."

#define A                                                                      \
	int aaaa;                                                                  \
	int b;                                                                     \
	int dddddddddd;

#define iterate(Ni, Nj, JOB)                                                   \
	{                                                                          \
		std::size_t __i = 0;                                                   \
		std::size_t __j = 0;                                                   \
		while (__i < Ni.size() and __j < Nj.size()) {                          \
			const auto __Ni_i = Ni[__i];                                       \
			const auto __Nj_j = Nj[__j];                                       \
			if (__Ni_i == __Nj_j) {                                            \
				JOB;                                                           \
				++__i;                                                         \
				++__j;                                                         \
			}                                                                  \
			else {                                                             \
				__i += (__Ni_i < __Nj_j);                                      \
				__j += (__Ni_i > __Nj_j);                                      \
			}                                                                  \
		}                                                                      \
	}
