/**
 * Practice 36
 *
 */
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <limits.h>

bool tmul_ok(int x, int y);

int main(void)
{
        assert(tmul_ok(1, 2));
        assert(!tmul_ok(INT_MAX, 2));

        return 0;
}

bool tmul_ok(int x, int y)
{
        int64_t p = (int64_t) x * y;
        return p == (int32_t) p;
}
