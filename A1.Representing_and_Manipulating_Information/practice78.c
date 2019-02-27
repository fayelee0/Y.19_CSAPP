/**
 * Practice 78
 *
 */
#include <stdio.h>
#include <assert.h>
#include <limits.h>

/* Devide by power of 2. Assume 0 <= k < w-1 */
int divide_power2(int x, int k);

int main(void)
{
        int x = 12340;
        assert(divide_power2(x, 0) == 12340);
        assert(divide_power2(x, 1) == 6170);
        assert(divide_power2(x, 4) == 771);
        assert(divide_power2(x, 8) == 48);

        int y = -12340;
        assert(divide_power2(y, 0) == -12340);
        assert(divide_power2(y, 1) == -6170);
        assert(divide_power2(y, 4) == -771);
        assert(divide_power2(y, 8) == -48);

        return 0;
}

int divide_power2(int x, int k)
{
        /*
        int w = sizeof(int) << 3;
        int m = (1<<k) - 1;
        int s = (x >> (w - 1)) & 1;

        return (x + m&s) >> k;
        */

        int negative = x & INT_MIN;

        negative && (x = x + (1 << k) - 1);

        return x >> k;
}
