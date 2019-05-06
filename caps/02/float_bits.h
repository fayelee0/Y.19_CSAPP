#ifndef FLOAT_BITS_H
#define FLOAT_BITS_H

#include <stdbool.h>

typedef unsigned float_bits;

float u2f(float_bits u);

float_bits f2u(float f);

bool is_nan(float_bits f);

bool is_inf(float_bits f);

#endif
