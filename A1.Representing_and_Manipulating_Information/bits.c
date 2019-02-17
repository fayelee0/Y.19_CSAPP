#include <stdio.h>

/* Declarations of functions implementing operations bits and bic */
int bis(int x, int m);
int bic(int x, int m);

int bis(int x, int m)
{
        return x | m;
}

int bic(int x, int m)
{
        return x & (~m);
}

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y)
{
        // bis
        int result = bis(x, y);
        return result;
}

/* Compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y)
{
        int result = bis(bic(x, y), bic(y, x));
        return result;
}

int main(void)
{
        int x = 0x3456;
        int y = 0x1265;

        printf("bool_or(%.2x, %.2x) = %.2x\n", x, y, bool_or(x, y));
        printf("bool_xor(%.2x, %.2x) = %.2x\n", x, y, bool_xor(x, y));

        return 0;
}
