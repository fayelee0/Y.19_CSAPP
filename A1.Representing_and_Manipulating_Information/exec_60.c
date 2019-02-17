#include <stdio.h>
#include <assert.h>

unsigned replace_type(unsigned x, int i, unsigned char b);

int main(void)
{
        unsigned x = 0x12345678;

        assert(replace_type(x, 2, 0xAB) == 0x12AB5678);
        assert(replace_type(x, 0, 0xAB) == 0x123456AB);

        return 0;
}

unsigned replace_type(unsigned x, int i, unsigned char b)
{
        unsigned mask = 0xFF;
        unsigned regx = b;

        mask <<= (i << 3);
        regx <<= (i << 3);

        mask = ~mask;

        return (x & mask) | regx;
}
