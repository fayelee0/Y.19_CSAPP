/**
 * Practice 13
 *
 */
#include <stdio.h>

int bis(int x, int m);
int bic(int x, int m);

int bool_or(int x, int y);
int bool_xor(int x, int y);

int main(void)
{
        int x = 0x87654321;
        int y = 0x12345678;

        printf("%.2x\n", bool_or(x, y));
        printf("%.2x\n", bool_xor(x, y));

        return 0;

}

int bis(int x, int m)
{
        return x | m;
}

int bic(int x, int m)
{
        return x & (~m);
}

int bool_or(int x, int y)
{
        return bis(x, y);
}

int bool_xor(int x, int y)
{
        return bis(bic(x, y), bic(y, x));
}
