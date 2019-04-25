/*
 * Practice 42
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

int div16(int x);

int main(void)
{
        assert(div16(1) == 0);
        assert(div16(16) == 1);
        assert(div16(17) == 1);
        assert(div16(32) == 2);

        assert(div16(-1) == 0);
        assert(div16(-16) == -1);
        assert(div16(-17) == -1);
        assert(div16(-32) == -2);

        return 0;
}

/*
 * (x < 0) ? ((x + (1 << k) - 1) >> k) : (x >> k)
 *
 * x / 16
 * (x < 0) ? ((x + 15) >> 4) : (x >> 4)
 *
 * if x >= 0, x >> 31 ==>  0 (0x00000000) & 0xF = 0x0
 * if x <  0, x >> 31 ==> -1 (0xFFFFFFFF) & 0xF = 0xF
 *
 */
int div16(int x)
{
        int b = (x >> 31) & 0xF;
        return (x + b) >> 4;
}
