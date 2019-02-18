/**
 * Practice 23
 *
 * | w          | f1(w)      | f2(w)      |
 * |--------------------------------------|
 * | 0x00000076 | 0x00000076 | 0x00000076 |
 * | 0x87654321 | 0x00000021 | 0x00000021 |
 * | 0x000000C9 | 0x000000C9 | 0xFFFFFFC9 |
 * | 0xEDCBA987 | 0x00000087 | 0xFFFFFF87 |
 *
 */
#include <stdio.h>

int f1(unsigned word);
int f2(unsigned word);

int main(void)
{
        int w0 = 0x00000076;
        printf("%.2x:\t", w0);
        printf("f1 = %.2x, f2 = %.2x\n", f1(w0), f2(w0));

        int w1 = 0x87654321;
        printf("%.2x: ", w1);
        printf("f1 = %.2x, f2 = %.2x\n", f1(w1), f2(w1));

        int w2 = 0x000000C9;
        printf("%.2x: ", w2);
        printf("f1 = %.2x, f2 = %.2x\n", f1(w2), f2(w2));

        int w3 = 0xEDCBA987;
        printf("%.2x: ", w3);
        printf("f1 = %.2x, f2 = %.2x\n", f1(w3), f2(w3));

        return 0;
}

int f1(unsigned word)
{
        return (int) ((word << 24) >> 24);
}

int f2(unsigned word)
{
        return ((int) word << 24) >> 24;
}
