/**
 * Practice 95
 *
 */
#include <stdio.h>
#include <assert.h>

typedef unsigned float_bits;

/* Compute 0.5 * f. If f is NaN, then return f */
float_bits float_half(float_bits f);

float_bits f2u(float f);

int main(void)
{
        assert(float_half(f2u(0.5)) == f2u(0.25));
        assert(float_half(f2u(5)) == f2u(2.5));

        return 0;
}

float_bits float_half(float_bits f)
{
        unsigned sign = f >> 31;
        unsigned exp = f >> 23 & 0xFF;
        unsigned frac = f & 0x7FFFFF;

        if (exp == 0xFF) {
                return f;
        }

        unsigned m = ((frac & 0x3) == 0x3);
        if (exp == 0) {
                frac >>= 1;
                frac += m;
        } else if (exp == 1) {
                exp = 0;
                frac = ((f >> 1) + m) & 0x7FFFFF;
        } else {
                exp -= 1;
        }

        return (sign << 31) | (exp << 23) | frac;
}

float_bits f2u(float f)
{
        return *(unsigned*) &f;
}
