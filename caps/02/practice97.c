/*
 * Practice 97
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <limits.h>

#include "float_bits.h"

/* Compute float(i) */
float_bits float_i2f(int i);

int leftmost_one_index(int i);

int main(void)
{
        assert(leftmost_one_index(0) == 0);
        assert(leftmost_one_index(1) == 0);
        assert(leftmost_one_index(0x3) == 1);
        assert(leftmost_one_index(0x5) == 2);
        assert(leftmost_one_index(0x9) == 3);
        assert(leftmost_one_index(0x1f) == 4);
        assert(leftmost_one_index(INT_MIN) == 32);

        assert(float_i2f(0) == f2u((float) 0));
        assert(float_i2f(1) == f2u((float) 1));
        assert(float_i2f(12345678) == f2u((float) 12345678));
        assert(float_i2f(0x12345678) == f2u((float) 0x12345678));

        return 0;
}

/*
 * 0
 *
 * INT_MIN -2^31
 *
 * 00..1.. {**** **** **** **** **** ***}  = 30
 *
 *         {**** **** **** **** **** ***}  = 15
 *
 *
 */
float_bits float_i2f(int i)
{
        // 1. 0
        // 2. INT_MIN
        // 3. << n
        // 4. >> n, round to even {1000} is middle
        unsigned sign = 0;
        unsigned expt = 0;
        unsigned frac = 0;

        if (i == 0) {
                sign = 0;
                expt = 0;
                frac = 0;
        } else if (i == INT_MIN) {
                sign = 1;
                expt = -31 + 127;
                frac = 0;
        } else {
                int n = leftmost_one_index(i);
                expt = 127 + n;
                sign = (i < 0) ? 1 : 0;
                if (n <= 23) {
                        frac = (i << (23 - n)) & 0x7FFFFF;
                } else {
                        int offset = n - 23;
                        frac = (i >> offset) & 0x7FFFFF;

                        unsigned mid = 1 << offset;
                        unsigned rem = i & ~(-1 << offset);

                        unsigned num = (expt << 23) | frac;
                        if (mid == rem) {
                                if (frac & 0x1) {
                                        num += 1;
                                } else {
                                        ;
                                }
                        } else if (mid > rem) {
                                num += 1;
                        } else {
                                ;
                        }

                        return (sign << 31) | num;
                }
        }

        return (sign << 31) | (expt << 23) | frac;
}

int leftmost_one_index(int i)
{
        if (i == INT_MIN) {
                return 32;
        }

        int n = 0;
        for (; (i = i >> 1); n++) {
                ;
        }
        return n;
}
