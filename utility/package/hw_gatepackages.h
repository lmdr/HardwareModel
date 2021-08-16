// Copyright Louis Duller
// Created 12 May 2021
// Parallel logic packages.

#ifndef HW_GATEPACKAGES
#define HW_GATEPACKAGES

#include "../hw_types.h"

// FUNCTION: bit16_and
// DESC: 16 1-bit AND gate package
// PARAM: input_matrix = input A, input B, unused, unused
// RETURN: A AND B for each bit
bit16 bit16_and(bit16_matrix4 input_matrix);

#endif // !HW_GATEPACKAGES