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

enum empty_enum {
};

enum list_of_soft_types {
	/// Doc 1
	a,
	/// Doc 2
	b,
	/// Doc 3
	c,
	d,
	e,
	/// Doc 4
	f
};

enum asdf {
	g,
	h,
	i,
	/// Only doc
	j,
	k
};

enum class list_of_types : int {
	asdf,
	b,
	/// Only doc
	ccccccccc,
	d,
	e,
	f
};

enum class another_enum {
	asdf,
	b,
	/// Only doc
	ccccccccc,
	d,
	e,
	f
};
