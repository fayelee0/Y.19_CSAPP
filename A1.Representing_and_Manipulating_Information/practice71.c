/**
 * Practice 71
 *
 */
#include <stdio.h>
#include <assert.h>

/*
 * Declaration of data type where 4 bytes are packed into an unsigned
 */
typedef unsigned packed_t;

/*
 * Extract byte from word. Return as signed integer
 */
int xbyte(packed_t word, int bytenum);

int main(void)
{
        unsigned w = 0x87654321U;

        assert(xbyte(w, 0) == 33); // 0x21
        assert(xbyte(w, 1) == 67);   // 0x43
        assert(xbyte(w, 2) == 101);  // 0x65
        assert(xbyte(w, 3) == -121); // 0xFFFFFF87

        return 0;
}

int xbyte(packed_t word, int bytenum)
{
        int rsv = (sizeof(int) - 1) << 3;
        int lsv = rsv - (bytenum << 3);

        return (int)(word << lsv) >> rsv;
}
