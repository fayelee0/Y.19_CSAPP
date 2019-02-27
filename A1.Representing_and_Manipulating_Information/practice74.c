/**
 * Practice 74
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>

/* Determine whether arguments can be subtracted without overflow */
bool tsub_ok(int x, int y);

int main(void)
{
        assert(!tsub_ok(0, INT_MIN));
        assert(tsub_ok(0, INT_MIN + 1));

        assert(tsub_ok(0, INT_MAX));
        assert(tsub_ok(-1, INT_MAX));
        assert(!tsub_ok(-2, INT_MAX));

        return 0;
}

bool tsub_ok(int x, int y)
{
        int ret = 1;
        (y == INT_MIN) && (ret = 0);

        int s = x - y;
        int positive_overflow = x < 0 && y > 0 && s >= 0;
        int negative_overflow = x > 0 && y < 0 && s <= 0;

        return ret && (!positive_overflow && !negative_overflow);
}
