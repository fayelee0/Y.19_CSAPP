/**
 * Practice 30
 *
 */
#include <stdio.h>
#include <assert.h>
#include <limits.h>

int tadd_ok(int x, int y);

int main(void)
{
        assert(tadd_ok(1, 2));

        assert(!tadd_ok(INT_MAX, 1));
        assert(!tadd_ok(INT_MIN, -1));

        return 0;
}

int tadd_ok(int x, int y)
{
        int s = x + y;

        int positiveOverflow = x > 0 && y > 0 && s <= 0;
        int negativeOverflow = x < 0 && y < 0 && s >= 0;

        return !(positiveOverflow || negativeOverflow);
}
