/**
 * Practice 54
 *
 * int x
 * float f
 * double d
 *
 * notice: neither f nor d equals +INF, -INF, or NAN
 *
 */
#include <stdio.h>
#include <assert.h>

int main(void)
{
        /**
         * A. x == (int)(double) x
         *
         * #t
         *
         * int is 32bit
         * double frac is 52bit
         *
         */

        /**
         * B. x == (int)(float) x
         *
         * #f
         *
         * int is 32bit
         * float frac is 23bit
         *
         */
        int b = 0x87654321;
        assert(!(b == (int)(float) b));

        /**
         * C. d == (double)(float) d
         *
         * #f
         *
         * double frac is 52bit
         * float frac is 23bit
         *
         */
        double c = 1e300;
        assert(!(c == (double)(float) c));

        /**
         * D. f == (float)(double) f
         *
         * #t
         *
         * double frac is 52bit
         * float frac is 23bit
         *
         */

        /**
         * E. f == -(-f)
         *
         * #t
         *
         * floating-point is symmetic
         *
         */

        /**
         * F. 1.0 / 2 == 1 / 2.0
         *
         * #t
         *
         */

        /**
         * G. d*d >= 0.0
         *
         * #t
         *
         */

        /**
         * H. (f + d) - f == d
         *
         * #f
         *
         */
        double hf = 1e20;
        double hd = 1;
        assert(!((hf + hd) - hf == hd));

        return 0;
}
