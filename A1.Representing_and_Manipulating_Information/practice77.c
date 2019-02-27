/**
 * Practice 77
 *
 */
#include <stdio.h>
#include <assert.h>

int main(void)
{
        int x = 0x1234;

        /**
         * A. K = 17
         *
         */
        int a = (x << 4) + x;
        assert(a == x * 17);

        /**
         * B. K = -7
         *
         */
        int b = x - (x << 3);
        assert(b == x * -7);

        /**
         * K = 60
         *
         */
        int c = (x << 6) - (x << 2);
        assert(c == x * 60);

        /**
         * K = -112
         *
         */
        int d = (x << 4) - (x << 7);
        assert(d == x * -112);

        return 0;
}
