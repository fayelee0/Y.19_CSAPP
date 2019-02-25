/**
 * Practice 65
 *
 */
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <limits.h>

/**
 * return 1 when x contains an odd number is 1s; 0 otherwise.
 * assume w=32
 *
 */
bool odd_ones(unsigned x);

int main(void)
{
        assert(!odd_ones(UINT_MAX));
        assert(!odd_ones(5));
        assert(!odd_ones(129));
        assert(!odd_ones(0));

        assert(odd_ones(4));
        assert(odd_ones(128));

        return 0;
}

/**
 * 0 0  ^0
 * 0 1  ^1
 * 1 0  ^1
 * 1 1  ^0
 *
 * 00 00 ^00 ^0
 * 00 01 ^01 ^1
 * 00 10 ^10 ^1
 * 00 11 ^11 ^0
 * 01 00 ^01 ^1
 * 01 01 ^00 ^0
 * 01 10 ^11 ^0
 * 01 11 ^10 ^1
 * 10 00 ^10 ^1
 * 10 01 ^11 ^0
 * 10 10 ^00 ^0
 * 10 11 ^01 ^1
 * 11 00 ^11 ^0
 * 11 01 ^10 ^1
 * 11 10 ^01 ^1
 * 11 11 ^00 ^0
 *
 *
 * after XOR odd-even not change
 *
 * if x1 and y1 are same, result [-2 or -0]
 * if x1 and y1 are not same, result not change
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
