/**
 * Practice 75
 *
 */
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <limits.h>

unsigned unsigned_high_prod(unsigned x, unsigned y);
unsigned unsigned_high_prod$(unsigned x, unsigned y);

int signed_high_prod(int x, int y);

int main(void)
{
        assert(unsigned_high_prod$(1U, 2U) ==
               unsigned_high_prod(1U, 2U));

        assert(unsigned_high_prod$(UINT_MAX, UINT_MAX) ==
               unsigned_high_prod(UINT_MAX, UINT_MAX));

        return 0;
}

int signed_high_prod(int x, int y)
{
        int w = sizeof(int) << 3;
        int64_t m = (int64_t) x * y;
        return m >> w;
}

unsigned unsigned_high_prod(unsigned x, unsigned y)
{
        size_t w = sizeof(unsigned) << 3;
        int xs = x >> (w - 1);
        int ys = y >> (w - 1);
        return signed_high_prod(x, y) + xs * y + ys * x;
}

unsigned unsigned_high_prod$(unsigned x, unsigned y)
{
        size_t w = sizeof(unsigned) << 3;
        uint64_t m = (uint64_t) x * y;
        return m >> w;
}
