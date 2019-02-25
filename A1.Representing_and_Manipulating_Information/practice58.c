/**
 * Practice 58
 *
 */
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool is_little_endian();

int main(void)
{
        assert(is_little_endian());

        return 0;
}

bool is_little_endian()
{
        int x = 1;
        return (&x)[0] == 1;
}
