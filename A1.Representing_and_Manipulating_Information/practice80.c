/**
 * Practice 80
 *
 */
#include <stdio.h>
#include <assert.h>
#include <limits.h>

int threefourths(int x);
int divide(int x, int k);

int main(void)
{
        assert(threefourths(INT_MIN) == (int64_t) INT_MIN * 3 / 4);
        assert(threefourths(INT_MAX) == (int64_t) INT_MAX * 3 / 4);

        assert(threefourths(8) == 6);
        assert(threefourths(9) == 6);
        assert(threefourths(10) == 7);
        assert(threefourths(11) == 8);
        assert(threefourths(12) == 9);
        assert(threefourths(123456789) == 92592591);

        assert(threefourths(-8) == -6);
        assert(threefourths(-9) == -6);
        assert(threefourths(-10) == -7);
        assert(threefourths(-11) == -8);
        assert(threefourths(-12) == -9);

        return 0;
}

int threefourths(int x)
{
        int ng = x & INT_MIN;

        int hi = x & ~0x3;
        int lo = x & 0x3;

        int m = 0;
        int k = 2;

        hi = hi >> k; // hi / 4
        hi = (hi << 1) + hi; // hi * 3

        ng && (m = (1 << k) - 1);
        lo = (lo << 1) + lo; // lo * 3
        lo = (lo + m) >> k; // lo / 4

        return hi + lo;
}

int divide(int x, int k)
{
        int negative = x & INT_MIN;

        negative && (x = x + (1 << k) - 1);

        return x >> k;
}
