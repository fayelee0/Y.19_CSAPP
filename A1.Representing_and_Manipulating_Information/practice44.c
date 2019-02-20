/**
 * Practice 44
 *
 */
#include <assert.h>
#include <limits.h>

int foo();
int bar();

int main(void)
{
        int x = foo();
        int y = bar();

        unsigned ux = x;
        unsigned uy = y;


        /**
         * a. (x > 0) || (x - 1 < 0)
         *
         * #f
         *
         * INT_MIN < 0
         * INT_MIN - 1 = INT_MAX + 1 > 0
         *
         */
        int a = INT_MIN;
        assert(!((a > 0) || (a - 1 < 0)));

        /**
         * b. (x & 7) != 7 || (x << 29 < 0)
         *
         * #t
         *
         */

        /**
         * c. (x * x) >= 0
         *
         * #f
         *
         * case 4
         *
         */
        int c = 0x1FFFFFFF;
        assert(!((c * c) >= 0));

        /**
         * d. x < 0 || -x <= 0
         *
         * #t
         *
         * |INT_MIN| = |INT_MAX| + 1
         *
         */

        /**
         * e. x > 0 || -x >= 0
         *
         * #f
         *
         * |INT_MIN| = |INT_MAX| + 1
         *
         */
        int e = INT_MIN;
        assert(!(e > 0 || -e >= 0));

        /**
         * f. x + y == uy + ux
         *
         * #t
         *
         * signed and unsigned compute first upper to unsigned
         * have the same binary representation
         *
         */

        /**
         * x * ~y + uy * ux == -x
         *
         * #t
         *
         * ~y + uy = 0xFF...FF = -1
         *
         * ~y = -y + 1
         *
         */

        return 0;
}

int foo() {
        return 0;
}

int bar() {
        return 0;
}
