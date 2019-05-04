/*
 * Practice 84
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>

int float_le(float x, float y);
unsigned f2u(float x);

int main(void)
{
        assert( float_le( 3.14,  3.15));
        assert(!float_le( 3.14, -3.15));
        assert( float_le(-3.14,  3.15));
        assert(!float_le(-3.14, -3.15));

        return 0;
}

int float_le(float x, float y)
{
        unsigned ux = f2u(x);
        unsigned uy = f2u(y);

        /* Get the sign bits */
        unsigned sx = ux >> 31;
        unsigned sy = uy >> 31;

        bool r1 = (ux << 1) == 0 && (uy << 1) == 0; // x = y = 0.0
        bool r2 = sx && !sy;                        // x < 0 and y > 0
        bool r3 = sx && sy && (ux >= uy);           // x < 0 and y < 0 and (ux >= uy)
        bool r4 = !sx && !sy && (ux <= uy);         // x > 0 and y > 0 and (ux <= uy)

        /* Given an expression using only ux, uy, sx, and sy */
        return r1 || r2 || r3 || r4;
}

unsigned f2u(float x)
{
        return *(unsigned *) &x;
}
