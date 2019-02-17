#include <stdio.h>
#include <stdint.h>

int main(void)
{
        uint32_t x = 0x87654321;

        uint32_t y = x & 0xFF;
        printf("x&0xFF = 0x%.2x\n", y);

        uint32_t z = x ^ (~0xFF);
        printf("x^~0xFF = 0x%.2x\n", z);

        uint32_t w = x | 0xFF;
        printf("x|0xFF = 0x%.2x\n", w);

        return 0;
}
