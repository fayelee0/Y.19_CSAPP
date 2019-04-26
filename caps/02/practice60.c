/*
 * Practice 60
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

unsigned replace_byte(unsigned x, int i, unsigned char b);

int main(void)
{
        assert(replace_byte(0x12345678, 2, 0xAB) == 0x12AB5678);
        assert(replace_byte(0x12345678, 0, 0xAB) == 0x123456AB);

        return 0;
}

unsigned replace_byte(unsigned x, int i, unsigned char b)
{
        int w = i << 3;

        int tx = x & ~(0xFF << w);
        int tb = b << w;

        return tx | tb;
}
