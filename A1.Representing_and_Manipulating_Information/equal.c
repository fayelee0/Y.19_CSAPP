#include <stdio.h>
#include <stdbool.h>

bool equal(int x, int y)
{
        return !(x^y);
}

int main(void)
{
        int x = 1;
        int y = 2;
        int z = 2;

        printf("%d == %d is %d, %d == %d is %d\n",
               x, y, equal(x, y), y, z, equal(y, z));

        return 0;
}
