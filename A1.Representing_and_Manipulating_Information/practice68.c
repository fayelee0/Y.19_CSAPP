/**
 * Practice 68
 *
 */
#include <stdio.h>
#include <assert.h>

/*
 * Mask with least significant n bits set to 1
 *
 * Examples: n = 6 --> 0x3F; n = 17 --> 0x1FFFF
 *
 * Assume 1 <= n <= w
 *
 */
int lower_one_mask(int n);

int main(void)
{
        assert(lower_one_mask(6) == 0x3F);
        assert(lower_one_mask(17) == 0x1FFFF);
        assert(lower_one_mask(32) == -1);

        return 0;
}

int lower_one_mask(int n)
{
        return ~(~0 << (n - 1) << 1);

        // int w = sizeof(int) << 3;
        // return ((unsigned) -1) >> (w - n);
}
