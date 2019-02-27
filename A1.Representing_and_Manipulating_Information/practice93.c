/**
 * Practice 93
 *
 */
#include <stdio.h>
#include <assert.h>

typedef unsigned float_bits;

/* Compute |f|. If f is NaN, then return f. */
float_bits float_absval(float_bits f);

int main(void)
{
        assert(float_absval(0x7F7FFFFFU) == 0x7F7FFFFFU);
        assert(float_absval(0xFF7FFFFFU) == 0x7F7FFFFFU);

        assert(float_absval(0x7FFFFFFFU) == 0x7FFFFFFFU);


        return 0;
}

float_bits float_absval(float_bits f)
{
        unsigned exp = f >> 23 & 0xFF;
        unsigned frac = f & 0x7FFFFF;

        if (exp == 0xFF && frac != 0) {
                return f;
        } else {
                return (exp << 23) | frac;
        }
}
