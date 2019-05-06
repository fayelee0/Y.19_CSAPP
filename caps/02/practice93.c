/*
 * Practice 93
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#include "float_bits.h"

/* Compute |f|. If f is NaN, then return f. */
float_bits float_absval(float_bits f);

int main(void)
{
        assert(float_absval(f2u(-3.14f)) == f2u(3.14f));

        return 0;
}

float_bits float_absval(float_bits f)
{
        // if (is_nan(f)) {
        // return f;
        //} else {
        unsigned m = INT_MAX; /* 0x7FFFFFFF */
        return f & m;
        // }
}
