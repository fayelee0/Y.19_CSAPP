#include <stdio.h>

/* WARNNING: this is buggy code */
float sum_elements(float a[], unsigned length)
{
        float result = 0;

        // when length is 0, 0U-1 == 0U+Umax
        for (int i = 0; i <= length - 1; i++) {
                result += a[i];
        }

        return result;
}

int main(void)
{
        float a[] = {1.0, 2.0, 3.0, 4.0, 5.0};
        printf("sum is %g\n", sum_elements(a, 0));

        return 0;
}
