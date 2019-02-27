/**
 * Practice 90
 *
 */
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <float.h>

float fpwr2(int x);
float u2f(unsigned x);

int main(void)
{
        assert(fpwr2(-150) == 0);
        assert(fpwr2(-149) == pow(2, -149));
        assert(fpwr2(-126) == pow(2, -126));
        assert(fpwr2(127) == pow(2, 127));
        assert(fpwr2(128) == FLT_MAX+1);

        return 0;
}

float fpwr2(int x)
{
        unsigned exp;
        unsigned frac;
        unsigned u;

        int bias = pow(2, 8 - 1) - 1; // 127
        int frac_len = 23;
        int lo_normal = 0;
        int hi_normal = pow(2, 8); // 256

        if (x < 1 - bias - frac_len) { // -149
                exp = 0;
                frac = 0;
        } else if (x < lo_normal - bias) { // -126
                exp = 0;
                frac = 1 << ((x - (1 - bias)) - 23);
        } else if (x < hi_normal - bias) { // 128
                exp = bias + x;
                frac = 0;
        } else {
                exp = 0xFF;
                frac = 0;
        }

        /* Pack exp and frac into 32 bits */
        u = (exp << 23) | frac;

        return u2f(u);
}

float u2f(unsigned x)
{
        return *(float*) &x;
}
