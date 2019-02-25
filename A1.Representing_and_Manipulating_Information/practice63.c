/**
 * Practice 63
 *
 */
#include <stdio.h>
#include <assert.h>

unsigned srl(unsigned x, int k);
unsigned sra(int x, int k);

int main(void)
{
        int x = 0x12345678;
        assert(srl((unsigned) x, 8) == 0x123456);

        int y = 0x87654321;
        assert(sra(y, 8) == 0xFF876543);

        return 0;
}

unsigned srl(unsigned x, int k)
{
        /* perform shift arithmetically */
        unsigned xsra = (int) x >> k;
        unsigned w = sizeof(int) << 3;
        unsigned mask = ~(~0 << (w - k));

        return xsra & mask;
}

unsigned sra(int x, int k)
{
        /* perform shift logically */
        int xsrl = (unsigned) x >> k;
        unsigned w = sizeof(int) << 3;
        int mask = (!((1 << (w - 1)) & x) - 1) << (w - k);

        return xsrl | mask;
}

