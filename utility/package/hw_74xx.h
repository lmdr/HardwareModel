// Copyright Louis Duller
// Created 5 June 2021
// Common real life logic packages in the 7400 series.

#ifndef HW_74XX
#define HW_74XX

#include "../hw_types.h"

// FUNCTION: hw7400
// DESC: quad 2 input NAND
// PARAM: pinout = NAND 1 input A, input B, output, NAND 2 input A, input B, output, unused (ground),
//		NAND 3 input A, input B, output, NAND 4 input A, input B, output, unused (vcc)
void hw7400(bit1 pinout[14]);

#endif // !HW_74XX