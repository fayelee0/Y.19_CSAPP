/*
 * Practice 27
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>
#include <limits.h>

/* Determine whether arguments can be added without overflow */
bool uadd_ok(unsigned x, unsigned y);

int main(void)
{
        assert((uadd_ok(0, 0)));
        assert((uadd_ok(0, UINT_MAX)));
        assert(!(uadd_ok(1, UINT_MAX)));

        return 0;
}

bool uadd_ok(unsigned x, unsigned y)
{
        unsigned s = x + y;
        return !(s < y);
}
