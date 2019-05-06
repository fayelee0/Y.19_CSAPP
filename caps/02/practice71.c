/*
 * Practice 71
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

/* Declaration of data type where 4 bytes are packed into an unsigned */
typedef unsigned packed_t;

/* Extract byte from word. Return as signed integer. */
int xbyte(packed_t word, int bytenum);

int main(void)
{
        packed_t x = 0xABCD1234;

        assert(xbyte(x, 0) == (int) 0x00000034);
        assert(xbyte(x, 1) == (int) 0x00000012);
        assert(xbyte(x, 2) == (int) 0xFFFFFFCD);
        assert(xbyte(x, 3) == (int) 0xFFFFFFAB);

        return 0;
}

int xbyte(packed_t word, int bytenum)
{
        // return (word >> (bytenum << 3)) & 0xFF;
        int t = (word >> (bytenum << 3)) & 0xFF;
        int b = 0;
        (t >> 7) && (b = ~0xFF);
        return t | b;
}
