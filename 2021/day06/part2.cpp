/*
 * Copyright (c) 2021 Michael Federczuk
 *
 * SPDX-License-Identifier: MPL-2.0 AND Apache-2.0
 */

#include "../aoc2021.hpp"
#include "day06_utils.hpp"
#include <istream>

aoc2021::ANSWER aoc2021::solution(std::istream& input) {
	return calculate_lantern_fish_population(input, 256);
}
