// Copyright Louis Duller
// Created 12 May 2021
// 2 input logic gate primatives.

#ifndef HW_GATEPRIMATIVES
#define HW_GATEPRIMATIVES

#include "../hw_types.h"

// FUNCTION: bit1_not
// DESC: 1-bit NOT logic gate
// PARAM: input_matrix = input A, unused, unused, unused
// PARAM: position_mask = selects bit to perform operation
// RETURN: negation of A at position mask
bit16 bit1_not(bit16_matrix4 input_matrix, bit16 position_mask);

// FUNCTION: bit1_and
// DESC: 1-bit AND logic gate
// PARAM: input_matrix = input A, input B, unused, unused
// PARAM: position_mask = bit mask to perform operation
// RETURN: A AND B at position mask
bit16 bit1_and(bit16_matrix4 input_matrix, bit16 position_mask);

// FUNCTION: bit1_or
// DESC: 1-bit OR logic gate
// PARAM: input_matrix = input A, input B, unused, unused
// PARAM: position_mask = bit mask to perform operation
// RETURN: A OR B at position mask
bit16 bit1_or(bit16_matrix4 input_matrix, bit16 position_mask);

// FUNCTION: bit1_xor
// DESC: 1-bit XOR logic gate
// PARAM: input_matrix = input A, input B, unused, unused
// PARAM: position_mask = bit mask to perform operation
// RETURN: A XOR B at position mask
bit16 bit1_xor(bit16_matrix4 input_matrix, bit16 position_mask);

#endif // !HW_GATEPRIMATIVES