#include <stdio.h>

/* WARNNING: This is buggy code */
float sum_elements(float a[], unsigned length)
{
        float result = 0;

        // length is unsigned, when length = 0? length - 1 is UMax
        for (int i = 0; i <= length - 1; i++) {
                result += a[i];
        }
        return result;
}


