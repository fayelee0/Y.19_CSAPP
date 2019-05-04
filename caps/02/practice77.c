/*
 * Practice 77
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

int main(void)
{
        int x = 0x12345678;

        assert((x * 17) == ((x << 4) + x));
        assert((x * -7) == (x - (x << 3)));
        assert((x * 60) == ((x << 6) - (x << 2)));
        assert((x * -112) == ((x << 4) - (x << 7)));

        return 0;
}
