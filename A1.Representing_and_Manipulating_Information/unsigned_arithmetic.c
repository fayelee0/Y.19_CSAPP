#include <stdio.h>
#include <limits.h>

int main(void)
{
        // UINT_MAX + 1 = 0
        printf("%u + %u = %u\n", UINT_MAX, 1, UINT_MAX + 1);

        // UINT_MAX + UINT_MAX = UINT_MAX
        printf("%u + %u = %u\n", UINT_MAX, UINT_MAX, UINT_MAX);

        return 0;
}
