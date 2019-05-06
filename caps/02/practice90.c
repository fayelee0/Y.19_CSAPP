/*
 * Practice 90
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <math.h>

float fpwr2(int x);
float u2f(unsigned u);

int main(void)
{
        assert(fpwr2(-150) == 0.0);
        assert(fpwr2(-130) == powf(2, -130));
        assert(fpwr2(-100) == powf(2, -100));
        assert(fpwr2( 100) == powf(2,  100));

        assert(isinf(fpwr2(130)));

        return 0;
}

/*
 * float32 {0} {8} {23}
 *
 * bias = 2^7 - 1 = 127
 * E = e - bias = [1, 255] - 127 = [-126, 127]
 *
 * 1. [0, 2^-126 * (1.0 - 2^-23))         ; min = 2^-23 * 2^-126 = 2^-149
 * 2. [2^-126, 2^127 * (2.0 - 2^-13))
 *
 */
float fpwr2(int x)
{
        /* Result exponent and fraction */
        unsigned expt = 0;
        unsigned frac = 0;

        if (x < -149) {
                /* Too small, Return 0.0 */
                expt = 0;
                frac = 0;
        } else if (x < -126) {
                /* Denormalized result */
                expt = 0;
                frac = 1 << (x + 149);
        } else if (x < 128) {
                /* Normalized result */
                expt = x + 127;
                frac = 0;
        } else {
                /* Too big, return +∞ */
                expt = 0xFF;
                frac = 0;
        }

        /* Pack exp and frac into 32 bits */
        unsigned u = (expt << 23) | frac;
        return u2f(u);
}

float u2f(unsigned u)
{
        return *(float*) &u;
}

