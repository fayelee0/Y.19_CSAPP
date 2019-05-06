/*
 * Practice 96
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <limits.h>

#include "float_bits.h"

/* Compute int(f)
 * If conversion causes overflow or f is NaN, return 0x80000000.
 */
int float_f2i(float_bits f);

int main(void)
{
        assert(float_f2i(f2u(3.14f)) == (int) 3.14f);
        assert(float_f2i(f2u(1 << 30)) == 1 << 30);
        assert(float_f2i(f2u(1e20f)) == INT_MIN);
        assert(float_f2i(f2u(0.0f)) == 0);
        assert(float_f2i(f2u(-0.0f)) == 0);

        return 0;
}

/*
 * {x} {0000 0000} {xxxx xxxx xxxx xxxx xxxx xxx} <1.0
 *
 * {x} {0111 1111} {0000 0000 0000 0000 0000 000} =1.0
 *
 * {x} {1000 1110} {0000 0000 0000 0000 0000 000} =2^31
 *
 */
int float_f2i(float_bits f)
{
        unsigned sign = f >> 31;
        unsigned expt = (f >> 23) & 0xFF;
        unsigned frac = f & 0x7FFFFF;

        int ret = 0;
        if (expt < 0 + 127) { /* < 1.0 */
                ret = 0;
        } else if (expt < 31 + 127) { /* < 2^31 */
                ret = frac | 0x800000;
                if (expt > 23 + 127) {
                        ret <<= (expt - 127 - 23);
                } else {
                        ret >>= (23 + 127 - expt);
                }

        } else {
                ret = INT_MIN;
        }

        return sign ? -ret : ret;
}
