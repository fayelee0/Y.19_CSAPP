#include <stdio.h>
#include <limits.h>

int uadd_ok(unsigned x, unsigned y)
{
        return x + y > x ? 1 : 0;
}

int main(void)
{
        unsigned u0 = UINT_MAX;
        unsigned u1 = UINT_MAX -1U;

        printf("u0+1 overflow %d\n", uadd_ok(u0, 1U));
        printf("u1+1 overflow %d\n", uadd_ok(u1, 1U));

        return 0;
}
