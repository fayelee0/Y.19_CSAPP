/**
 * Practice 10
 *
 */
#include <stdio.h>

void inplace_swap(int* x, int* y);

int main(void)
{
        int x = 10;
        int y = 20;

        printf("before: x = %d, y = %d\n", x, y);
        inplace_swap(&x, &y);
        printf("after : x = %d, y = %d\n", x, y);

        return 0;
}

void inplace_swap(int* x, int* y)
{
        *x = *x ^ *y;
        *y = *x ^ *y; // *y = *x * *y = *x ^ *y ^ *y = *x
        *x = *x ^ *y; // *x = *x * *y = *x ^ *y ^ *x = *y
}
