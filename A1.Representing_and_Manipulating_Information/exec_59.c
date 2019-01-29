#include <stdio.h>

int main(void)
{
        int x = 0x89ABCDEF;
        int y = 0x76543210;

        int val = (x & 0xFF) | (y & ~0xFF);
        printf("val is 0x%.2X\n", val);

        return 0;
}
