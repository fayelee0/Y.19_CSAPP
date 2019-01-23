#include <stdio.h>
#include <stdint.h>

int main(void)
{
        uint8_t x = 0x63;
        int8_t y = 0xE3;

        uint8_t x1 = x << 4, x2 = x >> 4;
        int8_t y1 = y << 4, y2 = y >> 4;

        printf("%.2x <<4 = %.2x >>4 = %.2x\n", x, x1, x2);
        printf("%.2x <<4 = %.2x >>4 = %.2x\n", y, y1, y2);

        return 0;
}
