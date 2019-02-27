/**
 * Practice 84
 *
 */
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool float_le(float x, float y);

unsigned f2u(float f);

int main(void)
{
        assert(float_le(-0, +0));
        assert(float_le(+0, -0));
        assert(float_le(0, 3));
        assert(float_le(-4, -0));
        assert(float_le(-4, 4));

        return 0;
}

bool float_le(float x, float y)
{
        unsigned ux = f2u(x);
        unsigned uy = f2u(y);

        unsigned sx = ux >> 31;
        unsigned sy = uy >> 31;

        bool case1 = !(ux << 1) && !(uy << 1); // x = y = 0
        bool case2 = sx && !sy;                // x < 0; y > 0
        bool case3 = sx && sy && (ux >= uy);
        bool case4 = !sx && !sy && (ux <= uy);

        return case1 || case2 || case3 || case4;
}

unsigned f2u(float f)
{
        return *(unsigned*) &f;
}
