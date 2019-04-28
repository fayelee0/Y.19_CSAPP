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
        int xsrl = (unsigned) x >> k;
        return 0;
}
