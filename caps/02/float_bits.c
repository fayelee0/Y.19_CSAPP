#include "float_bits.h"

float u2f(float_bits u)
{
        return *(float*) &u;
}

float_bits f2u(float f)
{
        return *(float_bits*) &f;
}

bool is_nan(float_bits v)
{
        unsigned e = (v >> 23) & 0xFF;
        unsigned f = v         & 0x7FFFF;
        return !(e ^ 0xFF) && f;
}

bool is_inf(float_bits v)
{
        unsigned e = (v >> 23) & 0xFF;
        unsigned f = v         & 0x7FFFF;
        return !(e ^ 0xFF) && !f;
}
