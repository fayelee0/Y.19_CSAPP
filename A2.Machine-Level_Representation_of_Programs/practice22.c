/**
 * Practice 22
 *
 */
#include <stdio.h>
#include <limits.h>
#include <assert.h>

int max_fact_n(long m);

int main(void)
{
        assert(max_fact_n(INT_MAX) == 12);
        assert(max_fact_n(LONG_MAX) == 20);

        return 0;
}

int max_fact_n(long m)
{
        long n = 1;
        long v = 1;

        while (v <= m && v > 0) {
                n++;
                v *= n;
        }

        return n - 1;
}

