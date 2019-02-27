/**
 * Practice 94
 *
 */
#include <stdio.h>
#include <assert.h>

typedef unsigned float_bits;

/* Compute 2*f. If f is NaN, then return f. */
float_bits float_twice(float_bits f);

float_bits f2u(float f);

int main(void)
{
        assert(float_twice(f2u(0.5)) == f2u(1));

        return 0;
}

float_bits float_twice(float_bits f)
{
        unsigned sign = f >> 31;
        unsigned exp = f >> 23 & 0xFF;
        unsigned frac = f & 0x7FFFFF;

        if (exp == 0xFF && frac != 0) {
                return f;
        } else {
                if (exp == 0) {
                        frac = frac << 1;
                } else if (exp == 0xFF - 1) {
                        exp = 0xFF;
                        frac = 0;
                } else {
                        exp += 1;
                }

                return (sign << 31) | (exp << 23) | frac;
        }
}

float_bits f2u(float f)
{
        return *(unsigned*) &f;
}
