// Copyright Louis Duller
// Created 12 May 2021
// Parallel logic packages.

#include "hw_gatepackages.h"
#include "../gate/hw_gateprimatives.h"

bit16 bit16_and(bit16_matrix4 input_matrix)
{
	bit16 result = 0x0;

	result = bit1_and(input_matrix, 0x0);
	result += bit1_and(input_matrix, 0x1) << 0x1;
	result += bit1_and(input_matrix, 0x2) << 0x2;
	result += bit1_and(input_matrix, 0x3) << 0x3;
	result += bit1_and(input_matrix, 0x4) << 0x4;
	result += bit1_and(input_matrix, 0x5) << 0x5;
	result += bit1_and(input_matrix, 0x6) << 0x6;
	result += bit1_and(input_matrix, 0x7) << 0x7;
	result += bit1_and(input_matrix, 0x8) << 0x8;
	result += bit1_and(input_matrix, 0x9) << 0x9;
	result += bit1_and(input_matrix, 0xa) << 0xa;
	result += bit1_and(input_matrix, 0xb) << 0xb;
	result += bit1_and(input_matrix, 0xc) << 0xc;
	result += bit1_and(input_matrix, 0xd) << 0xd;
	result += bit1_and(input_matrix, 0xe) << 0xe;
	result += bit1_and(input_matrix, 0xf) << 0xf;

	return result;
}