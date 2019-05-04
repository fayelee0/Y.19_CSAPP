/*
 * Practice 79
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <limits.h>

int mul3div4(int x);
int divide_power2(int x, int k);

int main(void)
{
        assert(mul3div4(15) == 15 * 3 / 4);
        assert(mul3div4(1 << 20) == (1 << 20) * 3 / 4);

        assert(mul3div4(INT_MIN) == INT_MIN * 3 / 4);
        assert(mul3div4(-(1 << 20)) == -(1 << 20) * 3 / 4);

        return 0;
}

int mul3div4(int x)
{
        int mul3 = (x << 1) + x;
        return divide_power2(mul3, 2);
}

int divide_power2(int x, int k)
{
        /* if (x < 0) x = x + bias */
        int bias = (1 << k) - 1;
        (x & INT_MIN) && (x = x + bias);
        return x >> k;
}
