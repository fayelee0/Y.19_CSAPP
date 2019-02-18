/**
 * Practice 25
 *
 */
#include <stdio.h>

float sum_elements(float a[], unsigned length);

int main(void)
{
        float a[] = {1.0, 2.0, 3.0};

        printf("sum: %.2f\n", sum_elements(a, 0));
        printf("sum: %.2f\n", sum_elements(a, 3));

        return 0;
}

/* WARNING: this is byggy code */
/*
float sum_elements(float a[], unsigned length)
{
        float result = 0;

        // when length = 0
        // 0U - 1 = UMax
        for (int i = 0; i <= length - 1; i++) {
                result += a[i];
        }
        return result;
}
*/

/*
float sum_elements(float a[], unsigned length)
{
        float result = 0;

        if (length > 0) {
                for (int i = 0; i <= length - 1; i++) {
                        result += a[i];
                }
        }

        return result;
}
*/

float sum_elements(float a[], unsigned length)
{
        float result = 0;

        if (length > 0U) {
                for (unsigned i = 0; i < length; i++) {
                        result += a[i];
                }
        }

        return result;
}
