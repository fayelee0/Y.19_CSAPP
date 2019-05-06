/*
 * Practice 81
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

#include <stdio.h>

unsigned cna(int k);
unsigned cnb(int j, int k);

int main(void)
{
        assert(cna(2) == 0xFFFFFFFC);
        assert(cna(4) == 0xFFFFFFF0);
        assert(cna(8) == 0xFFFFFF00);

        assert(cnb(2, 2) == 0x0000000C);
        assert(cnb(4, 4) == 0x000000F0);
        assert(cnb(8, 8) == 0x0000FF00);

        return 0;
}

unsigned cna(int k)
{
        unsigned c = ~0;
        return c << k;
}

unsigned cnb(int j, int k)
{
        unsigned c = ~0;
        unsigned x = ~(c << (j + k));
        return (x >> j) << j;
}

