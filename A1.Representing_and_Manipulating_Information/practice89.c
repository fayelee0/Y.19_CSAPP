/**
 * Practice 89
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
        int z = random();

        double dx = (double) x;
        double dy = (double) y;
        double dz = (double) z;
        */

        /**
         * A. (float) x == (float) dx
         *
         * #t
         *
         */

        /**
         * B. dx - dy == (double) (x - y)
         *
         * #f
         *
         */
        int bx = INT_MIN;
        int by = 1;
        double bdx = (double) bx;
        double bdy = (double) by;

        assert(bdx - bdy != (double) (bx - by));

        /**
         * C. (dx + dy) + dz == dx + (dy + dz)
         *
         * #t
         *
         */

        /**
         * D. (dx * dy) * dz == dx * (dy * dz)
         *
         * #f
         *
         */
        double ddx = (double)(int) INT_MAX / 3;
        double ddy = (double)(int) INT_MIN / 3;
        double ddz = (double)(int) INT_MIN / 3;

        assert((ddx * ddy) * ddz != ddx * (ddy * ddz));

        /**
         * E. dx / dx == dz / dz
         *
         * #f
         *
         */
        double edx = 1;
        double edz = 0;

        assert(edx / edx != edz / edz);


        return 0;
}

