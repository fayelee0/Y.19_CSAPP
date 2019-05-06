#include <stdio.h>

int main(void)
{
        int x = -1;
        unsigned u = 2147483648U;

        printf("x = %u = %d\n", x, x);
        printf("u = %u = %d\n", u, u);

        return 0;
}
