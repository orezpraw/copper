/* testexamples.c Test examples for Copper.
 * This file is a part of the Copper framework.
 * Copyright 2006-2008 Joshua Charles Campbell.

 * The Copper framework is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "copper.h"

static int mao(int a) {
	return a + 2;
}

/* Note the double parens! */
TEST((1));
TEST((1 && 1));
TEST((1 || 0));

TEST({
  A((mao(0) == 2));
});

TEST((mao(2) == 3));
