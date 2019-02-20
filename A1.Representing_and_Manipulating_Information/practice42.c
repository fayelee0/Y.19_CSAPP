/**
 * Practice 42
 *
 */
#include <stdio.h>
#include <assert.h>

int div16(int x);

int main(void)
{
        assert(div16(17) == 1);
        assert(div16(9) == 0);

        assert(div16(-12340) == -771);
        assert(div16(-17) == -1);

        return 0;
}

/**
 * how to generate bias
 *
 * if x >= 0; bias = 0  = 0x0;
 * if x <  0; bias = 15 = 0xF;
 *
 * x>>31
 * if x >= 0; then 0x00...00;
 * if x <  0; then 0xFF...FF;
 *
 * (x>>31) & 0xF;
 *
 */
int div16(int x)
{
        return (x + ((x >> 31) & 0xF)) >> 4;
}
