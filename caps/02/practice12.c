/*
 * Practice 12
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <stdio.h>

int main(void)
{
        int x = 0x87654321;

        printf("A %.2x\n", x & 0xFF);
        printf("B %.2x\n", x ^ (~0xFF));
        printf("C %.2x\n", x | (0xFF));

        return 0;
}
