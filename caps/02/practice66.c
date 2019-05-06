/*
 * Practice 66
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

/*
 * Generate mask indicating leftmost 1 in x.
 *
 * if x = 0, then return 0.
 */
int leftmost_one(unsigned x);

int  main(void)
{
        assert(leftmost_one(0xFF00) == 0x8000);
        assert(leftmost_one(0x6600) == 0x4000);

        return 0;
}

/*
 * x | (x >>  1)     最左侧 1 和后面的  1 位都被设置为 1，变成 11
 * x | (x >>  2)     最左侧 1 和后面的  3 位都被设置为 1，变成 F
 * x | (x >>  4)     最左侧 1 和后面的  7 位都被设置为 1，变成 FF
 * x | (x >>  8)     最左侧 1 和后面的 15 位都被设置为 1，变成 FFFF
 * x | (x >> 16)     最左侧 1 和后面的 31 位都被设置为 1，变成 FFFF FFFF
 *
 * (x >> 1) + 1
 *
 * if x == 0, then x && 1 == 0, else 1
 *
 */
int leftmost_one(unsigned x)
{
        x |= x >> 1;
        x |= x >> 2;
        x |= x >> 4;
        x |= x >> 8;
        x |= x >> 16;

        return (x >> 1) + (x && 1);
}
