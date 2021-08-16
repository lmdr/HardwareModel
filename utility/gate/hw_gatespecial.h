// Copyright Louis Duller
// Created 12 May 2021
// 3+ input logic gate primatives.

#ifndef HW_GATESPECIAL
#define HW_GATESPECIAL

#include "../hw_types.h"

// FUNCTION: bit1_and3
// DESC: 1-bit AND logic gate
// PARAM: input_matrix = input A, input B, input C, unused
// PARAM: position_mask = bit mask to perform operation
// RETURN: A AND B AND C at position mask
bit16 bit1_and3(bit16_matrix4 input_matrix, bit16 position_mask);

// FUNCTION: bit1_and4
// DESC: 1-bit AND logic gate
// PARAM: input_matrix = input A, input B, input C, input D
// PARAM: position_mask = bit mask to perform operation
// RETURN: A AND B AND C AND D at position mask
bit16 bit1_and4(bit16_matrix4 input_matrix, bit16 position_mask);

// FUNCTION: bit1_or3
// DESC: 1-bit OR logic gate
// PARAM: input_matrix = input A, input B, input C, unused
// PARAM: position_mask = bit mask to perform operation
// RETURN: A OR B OR C at position mask
bit16 bit1_or3(bit16_matrix4 input_matrix, bit16 position_mask);

// FUNCTION: bit1_or4
// DESC: 1-bit OR logic gate
// PARAM: input_matrix = input A, input B, input C, input D
// PARAM: position_mask = bit mask to perform operation
// RETURN: A OR B OR C OR D at position mask
bit16 bit1_or4(bit16_matrix4 input_matrix, bit16 position_mask);

#endif // !HW_GATESPECIAL