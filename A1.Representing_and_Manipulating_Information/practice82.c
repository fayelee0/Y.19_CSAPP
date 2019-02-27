/**
 * Practice 82
 *
 */
#include <stdio.h>
#include <assert.h>
#include <limits.h>

int main(void)
{
        /*
        int x = random();
        int y = random();

        unsigned ux = (unsigned) x;
        unsigned uy = (unsigned) y;
        */

        /**
         * A. (x < y) == (-x > -y)
         *
         * #f
         *
         * x = INT_MIN
         *
         */
        int ax = INT_MIN;
        int ay = 1;
        assert(!((ax < ay) == (-ax > -ay)));

        /**
         * B. ((x + y) << 4) + y - x == 17 * y + 15 * x
         *
         * #t
         *
         * ((x + y) << 4) + y - x
         * x << 4 + y << 4 + y - x
         * 15 * x + 17 * y
         *
         */

        /**
         * C. ~x + ~y + 1 == ~(x + y)
         *
         * #t
         *
         * ~x + ~y + 1
         * -x - 1 + (-y - 1) + 1
         * -x - y - 1
         * -(x + y) - 1
         * ~(x + y)
         *
         */

        /**
         * D. (ux - uy) == -(unsigned)(y - x)
         *
         * #t
         *
         * bit level not change
         *
         */

        /**
         * E. ((x >> 2) << 2) <= x
         *
         * #t
         *
         * right shift 2 then right shift 2
         * the result 2 least significant will be 00
         *
         * so result <= x
         *
         */

        return 0;
}
