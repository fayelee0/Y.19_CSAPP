/*
 * Practice 92
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <math.h>
#include <stdbool.h>

#include "float_bits.h"

/* Compute -f. If f is NaN, then return f. */
float_bits float_negate(float_bits f);

int main(void)
{
        assert(float_negate(f2u(3.14f)) == f2u(-3.14f));
        assert(float_negate(f2u(powf(2, 150))) == f2u(-powf(2, 150)));

        return 0;
}

/*
 * I think is_nan can removed. if f is nan, -f just change sign will not change value.
 *
 *
 */
float_bits float_negate(float_bits f)
{
        //if (is_nan(f)) { /* removed */
        //return f;
        //} else {
        int w = sizeof(unsigned) << 3;
        unsigned m = 1 << (w - 1);
        return f ^ m;
        //}
}

