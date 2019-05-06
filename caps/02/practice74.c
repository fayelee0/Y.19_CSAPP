/*
 * Practice 74
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>
#include <limits.h>

/* Determine whether arguments can be substracted without overflow */
bool tsub_ok(int x, int y);
bool tadd_ok(int x, int y);

int main(void)
{
        assert(!tsub_ok(INT_MAX, INT_MIN));
        assert(!tsub_ok(1, INT_MIN));
        assert(!tsub_ok(0, INT_MIN));

        assert(tsub_ok(-1, INT_MIN));
        assert(tsub_ok(INT_MIN, INT_MIN));

        return 0;
}

bool tadd_ok(int x, int y)
{
        int s = x + y;

        bool tx = x & INT_MIN;
        bool ty = y & INT_MIN;
        bool ts = s & INT_MIN;

        bool lo = !tx && !ty && ts;
        bool ro = tx && ty && !ts;

        return lo && ro;
}

bool tsub_ok(int x, int y)
{
        bool ret = false;
        bool max = !(y ^ INT_MIN); // is INT_MIN
        int w = sizeof(int) << 3;

        (max) && (ret = (x >> (w - 1))); // x < 0 is #t
        (max) || (ret = tadd_ok(x, -y));
        return ret;
}
