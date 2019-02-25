/**
 * Practice 67
 *
 */
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool int_size_is_32_32bit();
bool int_size_is_32_16bit();

int main(void)
{
        assert(int_size_is_32_32bit());
        assert(int_size_is_32_16bit());

        return 0;
}

/**
 * A: 1 << 32 is undefined
 *
 * B: 1 << 31 then << 1
 */
bool int_size_is_32_32bit()
{
        int set_msb = 1 << 31;
        // int beyond_msb = 1 << 32;
        int beyond_msb = set_msb << 1;

        return set_msb && !beyond_msb;
}

bool int_size_is_32_16bit()
{
        int set_msb = 1 << 15 << 15 << 1;
        int beyond_msb = set_msb << 1;

        return set_msb && !beyond_msb;
}
