/*
 * Practice 78
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <limits.h>

/* Divide by power of 2. */
int divide_power2(int x, int k);

int main(void)
{
        assert(divide_power2(0, 1) == 0 / 2);
        assert(divide_power2(11, 1) == 11 / 2);
        assert(divide_power2(-11, 1) == -11 / 2);

        return 0;
}

int divide_power2(int x, int k)
{
        // int w = sizeof(int) << 3;
        int b = 0;
        // (x >> (w - 1)) && (b = (1 << k) - 1); // if (x < 0) x = x + b;
        (x & INT_MIN) && (b = (1 << k) - 1);
        return (x + b) >> k;
}
