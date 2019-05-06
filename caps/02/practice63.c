/*
 * Practice 63
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

unsigned srl(unsigned x, int k);
unsigned sra(int x, int k);

int main(void)
{
        assert(srl(0xFFFFFFFFU, 2) == 0x3FFFFFFFU);
        assert(srl(0x7FFFFFFFU, 2) == 0x1FFFFFFFU);

        assert(sra(0xFFFFFFFF , 2) == 0xFFFFFFFF );
        assert(sra(0x7FFFFFFF , 2) == 0x1FFFFFFF );

        return 0;
}

unsigned srl(unsigned x, int k)
{
        int w = sizeof(int) << 3;
        unsigned xsra = (int) x >> k;
        unsigned bias = ~(~0 << (w - k));
        return xsra & bias;
}

unsigned sra(int x, int k)
{
        int w = sizeof(int) << 3;
        int m = 1 << (w - 1);

        int xsrl = (unsigned) x >> k;
        int bias = 0;

        /* if (x < 0) bias = -1 << (w - k) */
        (x & m) && (bias = -1 << (w - k));

        return xsrl | bias;
}
