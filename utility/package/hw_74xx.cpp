// Copyright Louis Duller
// Created 5 June 2021
// Common real life logic packages in the 7400 series.

#include "hw_74xx.h"

void hw7400(bit1 pinout[14])
{
	pinout[2] = ~(pinout[0] & pinout[1]);
	pinout[5] = ~(pinout[3] & pinout[4]);
	pinout[9] = ~(pinout[7] & pinout[8]);
	pinout[12] = ~(pinout[10] & pinout[11]);
}