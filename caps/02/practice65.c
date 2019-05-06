/*
 * Practice 65
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>

/* Return #t when x contains an odd number of 1s; #f otherwise */
bool odd_ones(unsigned x);

int main(void)
{
        assert(!odd_ones(0xABCD));
        assert(!odd_ones(0));
        assert(!odd_ones(-1));

        assert(odd_ones(1));
        assert(odd_ones(2));

        return 0;
}

/*
 * 0xABCD
 *
 * int32: (x ^ (x >> 16)) & 0xFFFF 奇偶性不变
 *
 * 1010 1011 1100 1101 (10)    x                   ;0~16
 * 0000 0000 1010 1011         x >> 8
 * -------------------
 * 1010 1011 0110 0110 (4)     x ^ (x >> 8) = x    ;0~8
 * 0000 1010 1011 0110         x >> 4
 * -------------------
 * 1010 0001 1101 0000 (0)     x ^ (x >> 4) = x    ;0~4
 * 0010 1000 0111 0100         x >> 2
 * -------------------
 * 1000 1001 1010 0100 (0)     x ^ (x >> 2)        ;0~2
 * 0100 0100 1101 0010         x >> 1
 * -------------------
 * 1100 1101 0111 0110 (0)     x ^ (x >> 1) = x    ;0~1
 *
 * 0000 0000 0000 0000         x & 0x1
 *
 */
bool odd_ones(unsigned x)
{
        x ^= x >> 16;
        x ^= x >> 8;
        x ^= x >> 4;
        x ^= x >> 2;
        x ^= x >> 1;
        return x & 1;
}
