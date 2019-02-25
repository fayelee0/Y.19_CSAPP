/**
 * Practice 69
 *
 */
#include <stdio.h>
#include <assert.h>

/*
 * Do rotating left shift. Assume 0 <= n <= w.
 *
 * Examples when x = 0x12345678 and w = 32:
 *
 *   n=4 -> 0x23456781; n=20 -> 0x67812345
 *
 */
unsigned rotate_left(unsigned x, int n);

int main(void)
{
        assert(rotate_left(0x12345678U, 0) == 0x12345678U);
        assert(rotate_left(0x12345678U, 4) == 0x23456781U);
        assert(rotate_left(0x12345678U, 20) == 0x67812345U);
        assert(rotate_left(0x12345678U, 32) == 0x12345678U);

        return 0;
}

unsigned rotate_left(unsigned x, int n)
{
        int w = sizeof(int) << 3;

        return (x << n) | (x >> (w - n - !n) >> (1 - !!n));
}
