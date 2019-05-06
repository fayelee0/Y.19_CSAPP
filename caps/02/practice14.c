/*
 * Practice 14
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

int main(void)
{
        unsigned x = 0x66;
        unsigned y = 0x39;

        assert((x & y) == 0x20);
        assert((x | y) == 0x7F);
        assert((~x | ~y) == 0xFFFFFFDF);
        assert((x & !y) == 0);

        assert((x && y) == 1);
        assert((x || y) == 1);
        assert((!x || !y) == 0);
        assert((x && ~y) == 1);

        return 0;
}
