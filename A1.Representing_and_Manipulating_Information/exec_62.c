#include <stdio.h>
#include <assert.h>

int int_shifts_are_arithmetic();

int main(void)
{
        // 0xFFFFFFFF
        //
        // 0xFFFFFFFF >> 1
        //
        // l: 0x7FFFFFFF
        // a: 0xFFFFFFFF
        //
        // v ^ (v >> 1)
        // l: 0x80000000
        // a: 0

        assert(int_shifts_are_arithmetic());

        return 0;
}

int int_shifts_are_arithmetic()
{
        int x = -1;
        return !(x ^ (x >> 1));
}
