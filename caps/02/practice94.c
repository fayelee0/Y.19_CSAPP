/*
 * Practice 94
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <math.h>

#include "float_bits.h"

/* Compute 2*f. If f is NaN, then return f. */
float_bits float_twice(float_bits f);

int main(void)
{
        assert(float_twice(f2u(3.14f)) == f2u(3.14f * 2));
        assert(float_twice(f2u(powf(2, 10))) == f2u(powf(2, 11)));

        return 0;
}

/*
 * 0 xxxxxxxx -----------------------
 *
 * 0 00000000 11111111111111111111111
 * 0 00000001 11111111111111111111110
 *
 * 0 11111110 11111111111111111111111
 * 0 11111111 00000000000000000000000
 *
 * 0 11111100 11111111111111111111111
 * 0 11111101 11111111111111111111111
 *
 */
float_bits float_twice(float_bits f)
{
        if (is_nan(f) || is_inf(f)) {
                return f;
        } else {
                unsigned sign = f >> 31;
                unsigned expt = (f >> 23) & 0xFF;
                unsigned frac = f & 0x7FFFFF;

                if (expt == 0) {                      /* Denormalized */
                        frac <<= 1;
                } else if (expt == 0xFFU - 1) {        /* Overflow */
                        expt = 0xFF;
                        frac = 0;
                } else {                              /* Normalized */
                        expt += 1;
                }

                return (sign << 31) | (expt << 23) | frac;
        }
}
