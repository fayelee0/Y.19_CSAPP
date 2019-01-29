#include <stdio.h>

unsigned replace_type(unsigned x, int i, unsigned char b);

int main(void)
{
        unsigned x = 0x12345678;

        printf("replace_type 2 0xAB is 0x%.2X\n", replace_type(x, 2, 0xAB));
        printf("replace_type 0 0xAB is 0x%.2X\n", replace_type(x, 0, 0xAB));

        return 0;
}

unsigned replace_type(unsigned x, int i, unsigned char b)
{
        unsigned mask = 0xFF;
        unsigned regx = b;

        mask <<= i * 8;
        regx <<= i * 8;

        mask = ~mask;

        return (x & mask) | regx;
}
