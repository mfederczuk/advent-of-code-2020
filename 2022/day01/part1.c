/*
 * Copyright (c) 2022 Michael Federczuk
 * SPDX-License-Identifier: MPL-2.0 AND Apache-2.0
 */

#include "common.h"
#include "vector_size_t.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
	if (argc < 2) {
		fprintf(stderr, "%s: missing argument: <input_file>\n", argv[0]);
		return 3;
	}

	struct vector_size_t total_elf_calories_vec;
	if (year2022_day01_init_vector_size_t_with_total_elf_calories_from_file(&total_elf_calories_vec, argv[1]) != 0) {
		perror("year2022_day01_init_vector_size_t_with_total_elf_calories_from_file");
		return EXIT_FAILURE;
	}

	size_t max_total_calories = 0;

	for (size_t i = 0; i < total_elf_calories_vec.size; ++i) {
		if (total_elf_calories_vec.data[i] > max_total_calories) {
			max_total_calories = total_elf_calories_vec.data[i];
		}
	}

	printf("%zu\n", max_total_calories);

	vector_size_t_destroy(&total_elf_calories_vec);

	return EXIT_SUCCESS;
}
