/**
 * Practice 96
 *
 */
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <math.h>

typedef unsigned float_bits;

/*
 * Compute (int) f.
 * If conversion causes overflow or f is NaN, return 0x80000000
 *
 */
int float_f2i(float_bits f);

unsigned f2u(float f);

int main(void)
{
        assert(float_f2i(f2u(0.0)) == 0);
        assert(float_f2i(f2u(-0.0)) == 0);

        assert(float_f2i(f2u(0.1)) == 0);

        assert(float_f2i(f2u(pow(3, 10))) == 59049);
        assert(float_f2i(f2u(pow(2, 30))) == 1073741824);

        assert(float_f2i(0x7F800000U) == INT_MIN);
        assert(float_f2i(0x7F812345U) == INT_MIN);

        return 0;
}

int float_f2i(float_bits f)
{
        unsigned sign = f >> 31;
        unsigned exp = f >> 23 & 0xFF;
        unsigned frac = f & 0x7FFFFF;
        unsigned bias = 0x7F;
        unsigned w = sizeof(int) << 3;

        if (exp < bias) {
                /* exp == 0, denormalized; 0 < exp < 127, v < 1.0 */
                return 0;
        } else if (exp >= bias + w - 1) {
                /* exp == 255, INF or NAN; exp >= 127 + 31, v > 2^31 */
                return INT_MIN;
        } else {
                unsigned E = exp - bias;
                unsigned M = frac | 0x800000; // +1
                int N;

                if (E > 23) {
                        N = M << (E - 23);
                } else {
                        N = M >> (23 - E);
                }

                return sign ? -N : N;
        }
}

unsigned f2u(float f)
{
        return *(unsigned*) &f;
}
