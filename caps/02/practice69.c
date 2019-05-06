/*
 * Practice 69
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

/*
 * Do rotating left shift.
 *
 * n in [0, w)
 */
unsigned rotate_left(unsigned x, int n);

int main(void)
{
        assert(rotate_left(0x12345678, 4) == 0x23456781);
        assert(rotate_left(0x12345678, 20) == 0x67812345);

        return 0;
}

unsigned rotate_left(unsigned x, int n)
{
        int w = sizeof(int) << 3;
        unsigned left = x << n;
        unsigned right = (x >> 1) >> (w - n - 1);

        return left | right;
}
