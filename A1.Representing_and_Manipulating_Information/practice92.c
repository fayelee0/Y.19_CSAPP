/**
 * Practice 92
 *
 */
#include <stdio.h>
#include <assert.h>

/* Access bit-level representation floating-point number */
typedef unsigned float_bits;

/* Compute -f. If f is NaN, then return f. */
float_bits float_negate(float_bits f);

float unsigned_to_float(unsigned u);
unsigned float_to_unsigned(float f);

int main(void)
{
        assert(float_negate(0x00000000U) == 0x80000000U);
        assert(float_negate(0x80000000U) == 0x00000000U);

        assert(float_negate(0x00000001U) == 0x80000001U);
        assert(float_negate(0x80000001U) == 0x00000001U);

        assert(float_negate(0x7F7FFFFFU) == 0xFF7FFFFFU);
        assert(float_negate(0xFF7FFFFFU) == 0x7F7FFFFFU);

        assert(float_negate(0x7F800000U) == 0xFF800000U);
        assert(float_negate(0xFF800000U) == 0x7F800000U);

        assert(float_negate(0x7FFFFFFFU) == 0x7FFFFFFFU);

        return 0;
}

float_bits float_negate(float_bits f)
{
        unsigned sign = f >> 31;
        unsigned exp = (f >> 23) & 0xFF;
        unsigned frac = f & 0x7FFFFF;

        if (exp == 0xFF && frac != 0) {
                return f;
        } else {
                return (~sign << 31) | (exp << 23) | frac;
        }
}

float unsigned_to_float(unsigned u)
{
        return *(float*) &u;
}

unsigned float_to_unsigned(float f)
{
        return *(unsigned*) &f;
}
