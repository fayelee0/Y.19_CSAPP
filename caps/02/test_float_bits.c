#include <assert.h>

#include "float_bits.h"

int main(void)
{
        assert( is_nan(0x7F800001));
        assert(!is_nan(0x7F800000));
        assert(!is_nan(0x1));

        assert(is_inf(0x7F800000));
        assert(!is_inf(0x7F800001));
        assert(!is_inf(0x1));

        assert(u2f(f2u(3.14f)) == 3.14f);

        return 0;
}
