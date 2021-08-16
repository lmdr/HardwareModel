// Copyright Louis Duller
// Created 12 May 2021
// Defines types in library.

#ifndef HW_TYPES
#define HW_TYPES

#include <cstdint>
// TYPE-ALIAS: bit1
// DESC: 1-bit binary int
using bit1 = int8_t;
// TYPE-ALIAS: bit16
// DESC: 16-bit binary int
using bit16 = int16_t;
// TYPE-ALIAS: bit16_matrix4
// DESC: array of 4 16-bit ints
using bit16_matrix4 = bit16[4];

#endif // !HW_TYPES