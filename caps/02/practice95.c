/*
 * Practice 95
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

#include "float_bits.h"

/* Compute 0.5 * f. If f is NaN, then return f. */
float_bits float_half(float_bits f);

int main(void)
{
        assert(float_half(f2u(3.14f)) == f2u(3.14f / 2));

        return 0;
}

/*
 * {00} >> 1
 * {01} >> 1
 * {10} >> 1
 * {11} >> 1 + 1
 *
 * 0 0000 0001 1111 1111 1111 1111 1111 111
 * 0 0000 0000 
 *
 */
float_bits float_half(float_bits f)
{
        if (is_nan(f) || is_nan(f)) {
                return f;
        } else {
                unsigned sign = f >> 31;
                unsigned expt = (f >> 23) & 0xFF;
                unsigned frac = f & 0x7FFFFF;

                unsigned mask = (frac & 0x3) == 0x3;

                if (expt == 0) {
                        frac = (frac >> 1) + mask;
                } else if (expt == 1) {
                        unsigned temp = f & 0xFFFFFF;
                        temp = (temp >> 1) + mask;
                        expt = (temp >> 23) & 0xFF;
                        frac = temp & 0x7FFFFF;
                } else {
                        expt -= 1;
                }

                return (sign << 31) | (expt << 23) | frac;
        }
}
