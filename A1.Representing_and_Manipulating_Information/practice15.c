/**
 * Practice 15
 *
 */
#include <stdio.h>
#include <stdbool.h>

bool equal(int x, int y);

int main(void)
{
        int x = 10;
        int y = 20;
        int z = 20;

        printf("%d == %d is %d\n", x, y, equal(x, y));
        printf("%d == %d is %d\n", y, z, equal(y, z));

        return 0;
}

bool equal(int x, int y)
{
        return !(x ^ y);
}
