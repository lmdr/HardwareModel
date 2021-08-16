// Copyright Louis Duller
// Created 12 May 2021
// 1 bit full adder.

#include "hw_bit1adder.h"
#include "hw_logicgates.h"

bit16 bit1_adder(bit16_matrix4 input_matrix, bit16_matrix4 signal_matrix)
{
	// STAGE 1 - P and G Signals
	signal_matrix[0] = bit1_xor(input_matrix, signal_matrix[3]); // PROPAGATE
	signal_matrix[1] = bit1_and(input_matrix, signal_matrix[3]); // GENERATE
	
	// STAGE 2 - Summation Result
	bit16_matrix4 stage_matrix{ signal_matrix[0], input_matrix[2] >> signal_matrix[3], 0x0, 0x0 };
	bit16 result = bit1_xor(stage_matrix, 0x0);

	// STAGE 3 - Carry-out Signal
	stage_matrix[1] = bit1_and(stage_matrix, 0x0);
	stage_matrix[0] = signal_matrix[1];
	signal_matrix[2] = bit1_or(stage_matrix, 0x0);

	return result;
}