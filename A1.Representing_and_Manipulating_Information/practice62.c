/**
 * Practice 62
 *
 */
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool int_shift_are_arithmetic();

int main(void)
{
        assert(int_shift_are_arithmetic());

        return 0;
}

bool int_shift_are_arithmetic()
{
        int i = ~0;
        unsigned s = sizeof(int) << 3;
        return i >> s;
}
