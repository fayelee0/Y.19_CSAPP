/*
 * Practice 75
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdint.h>

unsigned unsigned_high_prod(unsigned x, unsigned y);
int signed_high_prod_direct(int x, int y);
unsigned unsigned_high_prod_direct(unsigned x, unsigned y);

int main(void)
{
        unsigned x = 12345678U;
        assert(unsigned_high_prod(x, x) == unsigned_high_prod_direct(x, x));

        return 0;
}

unsigned unsigned_high_prod(unsigned x, unsigned y)
{
        int w = sizeof(unsigned) << 3;
        int sx = x >> (w - 1);
        int sy = y >> (w - 1);
        int sp = signed_high_prod_direct(x, y);

        return sp + x * sy + y * sx;
}

int signed_high_prod_direct(int x, int y)
{
        int64_t m = (int64_t) x * y;
        return m >> 32;
}

unsigned unsigned_high_prod_direct(unsigned x, unsigned y)
{
        uint64_t m = (uint64_t) x * y;
        return m >> 32;
}
