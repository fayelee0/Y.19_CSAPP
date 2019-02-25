/**
 * Practice 70
 *
 */
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
 * Return 1 when x can be represented as an n-bit, 2's-complement number; 0 otherwise.
 * Assume 1 <= n <= w
 *
 */
bool fits_bits(int x, int n);

int main(void)
{
        assert(!fits_bits(UCHAR_MAX, 8));
        assert(!fits_bits(USHRT_MAX, 16));

        assert(fits_bits(CHAR_MAX, 8));
        assert(fits_bits(SHRT_MAX, 16));

        assert(!fits_bits(0xFF, 8));
        assert(!fits_bits(~0xFF, 8));

        assert(fits_bits(0b0010, 3));
        assert(!fits_bits(0b1010, 3));
        assert(!fits_bits(0b0110, 3));

        assert(fits_bits(~0b11, 3));
        assert(!fits_bits(~0b01000011, 3));
        assert(!fits_bits(~0b111, 3));

        return 0;
}

/*
 * n = 3
 *
 * 100 ~ 011 [-4, 3]
 *
 * FFFFFFFC
 * <<29
 * 80000000
 * >>29
 * FFFFFFFC
 *
 * 00000003
 * <<29
 * 60000000
 * >>29
 * 00000003
 *
 */
bool fits_bits(int x, int n)
{
        int w = sizeof(int) << 3;
        int offset = w - n;
        int y = x << offset >> offset;
        return !(y ^ x);
}
