/**
 * Practice 79
 *
 */
#include <stdio.h>
#include <limits.h>
#include <assert.h>

int mul3div4(int x);
int divide(int x, int k);

int main(void)
{
        assert(mul3div4(0) == 0 * 3 / 4);
        assert(mul3div4(INT_MAX) == INT_MAX * 3 / 4);
        assert(mul3div4(INT_MIN) == INT_MIN * 3 / 4);

        return 0;
}

int mul3div4(int x)
{
        x = (x << 1) + x;
        return divide(x, 2);
}

int divide(int x, int k)
{
        int negative = x & INT_MIN;

        negative && (x = x + (1 << k) - 1);

        return x >> k;
}
