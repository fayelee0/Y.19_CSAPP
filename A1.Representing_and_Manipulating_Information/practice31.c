/**
 * Practice 31
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

/**
 * x + y = [-2^w, -2^(w-1)) = x + y + 2^w
 *       = [-2^(w-1), 0)    = x + y
 *       = [0, 2^(w-1))     = x + y
 *       = [2^(w-1), 2^w)   = x + y - 2^w
 */
int tadd_ok(int x, int y)
{
        int sum = x + y;
        return (sum - x == y) && (sum - y == x);
}
