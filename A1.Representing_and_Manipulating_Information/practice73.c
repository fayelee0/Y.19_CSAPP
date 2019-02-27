/**
 * Practice 73
 *
 */
#include <stdio.h>
#include <assert.h>
#include <limits.h>

/* Addition that saturating to TMin or TMax */
int saturating_add(int x, int y);

int main(void)
{
        assert(saturating_add(INT_MAX, 1) == INT_MAX);
        assert(saturating_add(INT_MIN, -1) == INT_MIN);

        return 0;
}

int saturating_add(int x, int y)
{
        /*
        int s = x + y;
        int w = sizeof(int) << 3;
        int xs = x >> (w - 1);
        int ys = y >> (w - 1);
        int ss = s >> (w - 1);

        // (x > 0) && (y > 0) && (s < 0) && (s = INT_MAX)
        (!xs) && (!ys) && (ss) && (s = INT_MAX);


        // (x < 0) && (y < 0) && (s >= 0) && (s = INT_MIN)
        (xs) && (ys) && (!ss) && (s = INT_MIN);

        return s;
        */

        int s = x + y;
        int m = INT_MIN;

        /*
         * x&m is true when x most significant is 1, then x < 0
         *
         * (x > 0) && (y > 0) && (s < 0) && (s = INT_MAX)
         * (x < 0) && (y < 0) && (s >= 0) && (s = INT_MIN)
         *
         */
        !(x&m) && !(y&m) && (s&m) && (s = INT_MAX);
        (x&m) && (y&m) && !(s&m) && (s = INT_MIN);

        return s;
}
