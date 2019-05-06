/*
 * Practice 59
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

int main(void)
{
        int x = 0x89ABCDEF;
        int y = 0x76543210;
        int r = 0x765432EF;

        int e = (x & 0xFF) | (y & ~0xFF);

        assert(e == r);

        return 0;
}
