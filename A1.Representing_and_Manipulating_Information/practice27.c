/**
 * Practice 27
 *
 */
#include <stdio.h>
#include <assert.h>
#include <limits.h>

int uadd_ok(unsigned x, unsigned y);

int main(void)
{
        assert(uadd_ok(2, 1));
        assert(uadd_ok(UINT_MAX, 0));
        assert(!uadd_ok(UINT_MAX, 1));

        return 0;
}

int uadd_ok(unsigned x, unsigned y)
{
        unsigned s = x + y;
        return s >= x;
}
