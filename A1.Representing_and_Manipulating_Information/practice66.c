/**
 * Practice 66
 *
 */
#include <stdio.h>
#include <assert.h>

/*
 * Generate mask indicating leftmost 1 in x. Assume w=32.
 *
 * For example, 0xFF00 -> 0x8000, and 0x6600 -> 0x4000.
 *
 * If x = 0, then return 0.
 *
 */
int leftmost_one(unsigned x);

int main(void)
{
        assert(leftmost_one(0xFF00) == 0x8000);
        assert(leftmost_one(0x6600) == 0x4000);
        assert(leftmost_one(0) == 0);
        assert(leftmost_one(0x12345678) == 0x10000000);

        return 0;
}

/**
 *
 * 0001001000110100
 * 0000100100011010
 * ---------------- 1
 * 0001101100111110
 * 0000011011001111
 * ---------------- 2
 * 0001111111111111
 * 0000000111111111
 * ---------------- 4
 * 0001111111111111
 * 0000000011111111
 * ---------------- 8
 * 0001111111111111
 *
 *
 * 1000000000000000
 * 0100000000000000
 * 1100000000000000
 * 0011000000000000
 * 1111000000000000
 * 0000111100000000
 * 1111111100000000
 * 0000000011111111
 * 1111111111111111
 *
 * S0: x -> 000011111111111111111....
 * S1: x >> 1 + 1
 *
 */
int leftmost_one(unsigned x)
{
        x |= x >> 1;
        x |= x >> 2;
        x |= x >> 4;
        x |= x >> 8;
        x |= x >> 16;

        int m = x & 1;
        return (x >> 1) + m;
}
