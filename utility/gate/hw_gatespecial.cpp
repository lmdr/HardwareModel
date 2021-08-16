// Copyright Louis Duller
// Created 12 May 2021
// 3+ input logic gate primatives.

#include "hw_gatespecial.h"

bit16 bit1_and3(bit16_matrix4 input_matrix, bit16 position_mask)
{
	return (input_matrix[0] & input_matrix[1] & input_matrix[2]) >> position_mask & 0x1;
}

bit16 bit1_and4(bit16_matrix4 input_matrix, bit16 position_mask)
{
	return (input_matrix[0] & input_matrix[1] & input_matrix[2] & input_matrix[3]) >> position_mask & 0x1;
}

bit16 bit1_or3(bit16_matrix4 input_matrix, bit16 position_mask)
{
	return (input_matrix[0] | input_matrix[1] | input_matrix[2]) >> position_mask & 0x1;
}

bit16 bit1_or4(bit16_matrix4 input_matrix, bit16 position_mask)
{
	return (input_matrix[0] | input_matrix[1] | input_matrix[2] | input_matrix[3]) >> position_mask & 0x1;
}