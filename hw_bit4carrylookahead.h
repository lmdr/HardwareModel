// Copyright Louis Duller
// Created 12 May 2021
// 4 bit carry lookahead adder. Utilizes propagate and generate signals from full adders.

#ifndef HW_BIT4CARRYLOOKAHEAD
#define HW_BIT4CARRYLOOKAHEAD

#include "utility/hw_types.h"

// FUNCTION: bit4_carrylookahead
// DESC: 4-bit carry lookahead adder
// PARAM: input_matrix = P, G, C0, unused
// PARAM: signal_matrix = PG, GG, C, position mask
void bit4_carrylookahead(bit16_matrix4 input_matrix, bit16_matrix4 signal_matrix);

#endif // !HW_CARRYLOOKAHEAD