/*
 * Practice 73
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <limits.h>

/* Addition that saturates to TMin or TMax */
int saturating_add(int x, int y);

int main(void)
{
        assert(saturating_add(INT_MAX, 1) == INT_MAX);
        assert(saturating_add(INT_MAX, -1) == INT_MAX - 1);

        assert(saturating_add(INT_MIN, -1) == INT_MIN);
        assert(saturating_add(INT_MIN, 1) == INT_MIN + 1);

        return 0;
}

/*
 * if   x >= 0, then (x >> 31) = 0, is #f
 * else x <  0, then (x >> 31) = 1, is #t
 *
 */
int saturating_add(int x, int y)
{
        int s = x + y;

        int w = sizeof(int) << 3;
        int sx = x >> (w - 1);
        int sy = y >> (w - 1);
        int ss = s >> (w - 1);

        // (x > 0) && (y > 0) && (s <= 0) && (s = INT_MAX);
        !sx && !sy && ss && (s = INT_MAX);

        // (x < 0) && (y < 0) && (s >= 0) && (s = INT_MIN);
        sx && sy && !ss && (s = INT_MIN);

        return s;
}
