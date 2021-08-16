// Copyright Louis Duller
// Created 12 May 2021
// 4 bit carry lookahead adder. Utilizes propagate and generate signals from full adders.

#include "hw_bit4carrylookahead.h"
#include "hw_logicgates.h"

void bit4_carrylookahead(bit16_matrix4 input_matrix, bit16_matrix4 signal_matrix)
{
	bit16_matrix4 propagate_matrix{
		input_matrix[0] >> signal_matrix[3],
		input_matrix[0] >> (0x1 + signal_matrix[3]),
		input_matrix[0] >> (0x2 + signal_matrix[3]),
		input_matrix[0] >> (0x3 + signal_matrix[3])
	};
	bit16_matrix4 generate_matrix{
		input_matrix[1] >> signal_matrix[3],
		input_matrix[1] >> (0x1 + signal_matrix[3]),
		input_matrix[1] >> (0x2 + signal_matrix[3]),
		input_matrix[1] >> (0x3 + signal_matrix[3])
	};

	// C0, P0
	bit16_matrix4 stage_matrix{ input_matrix[2], input_matrix[0], 0x0, 0x0 };
	
	// C1
	bit1_and(stage_matrix, 0x0); // C0 AND P0

	// C2


	// C3


	// C4


	// PG


	// GG

}