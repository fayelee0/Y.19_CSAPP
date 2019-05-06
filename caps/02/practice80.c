/*
 * Practice 80
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <limits.h>

int threefourths(int x);

int main(void)
{
        assert(threefourths(INT_MAX) ==  1610612735);
        assert(threefourths(INT_MIN) == -1610612736);

        return 0;
}

/**
 * head = (x & ~0x03)
 * tail = (x &  0x03)
 *
 * x / 4 * 3 = (head + tail) / 4 * 3
 *           = (head / 4 * 3) + (tail * 3 / 4)
 *           = (head >> 2) * 3 + (((tail << 1) + tail) >> 2)
 *
 *
 */
int threefourths(int x)
{
        int head = x & ~0x03;
        int tail = x &  0x03;

        int hdiv4 = (head >> 2);
        int hmul3 = (hdiv4 << 1) + hdiv4;

        int tmul3 = (tail << 1) + tail;
        int bias = (1 << 2) - 1;
        (tmul3 & INT_MIN) && (tmul3 = tmul3 + bias);
        int tdiv4 = tmul3 >> 2;

        return hmul3 + tdiv4;
}
