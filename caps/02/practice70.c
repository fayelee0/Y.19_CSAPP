/*
 * Practice 70
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>
#include <limits.h>

#include <stdio.h>

/* Return #t when can be represented as an n-bit, 2's-complement number; #f otherwise */
bool fits_bits(int x, int n);

int main(void)
{
        assert(!fits_bits(SHRT_MAX + 1, 16));
        assert( fits_bits(SHRT_MAX    , 16));

        return 0;
}

/**
 * w = 8, n = 3
 *
 * 00000 111 ~ 11111 111 *
 * ...
 * 00000 100 ~ 11111 100 *
 * 00000 011 ~ 00000 011 -   |
 * ...                       |
 * 00000 000 ~ 00000 000 -   |
 *
 * 11111 111 ~ 11111 111 -   |
 * ...                       |
 * 11111 100 ~ 11111 100 -   |
 * 11111 011 ~ 00000 011 *
 * ...
 * 11111 000 ~ 00000 000 *
 *
 */
bool fits_bits(int x, int n)
{
        int w = sizeof(int) << 3;
        int o = w - n;
        int y = (x << o) >> o;

        return !(y ^ x);
}
