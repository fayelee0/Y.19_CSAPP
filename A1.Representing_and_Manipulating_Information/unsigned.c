#include <stdio.h>
#include <limits.h>

int main(void)
{
        int x = -1;
        unsigned u = 2147483648;

        printf("x = %u = %d\n", x, x);
        printf("u = %u = %d\n", u, u);

        printf("0 == 0U is %d\n", 0 == 0U);
        printf("-1 < 0 is %d\n", -1 < 0);
        printf("-1 < 0U is %d\n", -1 < 0U);
        printf("2147483647 > -2147483647-1 is %d\n", 2147483647 > -2147483647-1);
        printf("2147483647U > -2147483647-1 is %d\n", 2147483647U > -2147483647-1);
        printf("2147483647 > (int) 2147483648U is %d\n", 2147483647 > (int) 2147483648U);
        printf("-1 > -2 is %d\n", -1 > -2);
        printf("(unsigned) -1 > -2 is %d\n", (unsigned) -1 > -2);

        // when unsigned and signed operator, use unsigned compute then convert to unsigned compare
        printf("-2147483647-1 == 2147483648U is %d\n", -2147483647-1 == 2147483648U);
        printf("-2147483647-1 < 2147483647 is %d\n", -2147483647-1 < 2147483647);
        printf("-2147483647-1U < 2147483647 is %d\n", -2147483647-1U < 2147483647);
        printf("-2147483647-1 < -2147483647 is %d\n", -2147483647-1 < -2147483647);
        printf("-2147483647-1U < -2147483647 is %d\n", -2147483647-1U < -2147483647);

        printf("%d\n", 0x80000000 == INT_MIN);

        return 0;
}
