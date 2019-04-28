/*
 * Practice 68
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

/* Mask with least signficant n bits set to 1 */
int lower_one_mask(int n);

int main(void)
{
        assert(lower_one_mask(1) == 0x1);
        assert(lower_one_mask(6) == 0x3F);
        assert(lower_one_mask(17) == 0x1FFFF);
        assert(lower_one_mask(32) == -1);

        return 0;
}

int lower_one_mask(int n)
{
        return ~((unsigned) ~0 << 1 << (n - 1));
}
