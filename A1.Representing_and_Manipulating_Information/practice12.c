/**
 * Practice 12
 *
 */
#include <stdio.h>

int main(void)
{
        int x = 0x87654321;

        // A. x & 0xFF
        printf("0x%.2x\n", x & 0xFF);

        // B. x ^ (~0xFF)
        printf("0x%.2x\n", x ^ (~0xFF));

        // C. x | 0xFF
        printf("0x%.2x\n", x | 0xFF);

        return 0;
}
