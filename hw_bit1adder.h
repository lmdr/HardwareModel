// Copyright Louis Duller
// Created 12 May 2021
// 1 bit full adder.

#ifndef HW_BIT1ADDER
#define HW_BIT1ADDER

#include "utility/hw_types.h"

// FUNCTION: bit1_adder
// DESC: 1-bit full adder
// PARAM: input_matrix = input A, input B, carry-in, unused
// PARAM: signal_matrix = propagate, generate, carry-out, position mask
// RETURN: A + B at position mask
bit16 bit1_adder(bit16_matrix4 input_matrix, bit16_matrix4 signal_matrix);

#endif // !HW_BIT1ADDER