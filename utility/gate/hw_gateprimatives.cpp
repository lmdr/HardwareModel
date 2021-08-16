// Copyright Louis Duller
// Created 12 May 2021
// 2 input logic gate primatives.

#include "hw_gateprimatives.h"

bit16 bit1_not(bit16_matrix4 input_matrix, bit16 position_mask)
{
	// NOT A -> Filter bit position -> Apply mask
	return ~input_matrix[0] >> position_mask & 0x1;
}

bit16 bit1_and(bit16_matrix4 input_matrix, bit16 position_mask)
{
	return (input_matrix[0] & input_matrix[1]) >> position_mask & 0x1;
}

bit16 bit1_or(bit16_matrix4 input_matrix, bit16 position_mask)
{
	return (input_matrix[0] | input_matrix[1]) >> position_mask & 0x1;
}

bit16 bit1_xor(bit16_matrix4 input_matrix, bit16 position_mask)
{
	return (input_matrix[0] ^ input_matrix[1]) >> position_mask & 0x1;
}