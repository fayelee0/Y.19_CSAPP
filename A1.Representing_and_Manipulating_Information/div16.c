#include <stdio.h>

int div16(int x)
{
        // x >= 0, when x >> 31, result is 0x00000000
        // x <  0; when x >> 31, result is 0xFFFFFFFF
        int bias = (x >> 31) & 0xF;

        return (x + bias) >> 4;
}

int main(void)
{
        printf("%d / 16 = %d\n", 65535, div16(65535));
        printf("%d / 16 = %d\n", -65535, div16(-65535));

        return 0;
}
