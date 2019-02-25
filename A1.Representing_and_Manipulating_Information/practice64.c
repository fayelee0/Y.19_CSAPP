/**
 * Practice 64
 *
 */
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

/**
 * return 1 when any odd bit of x equals 1; 0 otherwise.
 * assume w=32
 *
 */
bool any_odd_one(unsigned x);

int main(void)
{
        unsigned x = 0;
        unsigned y = 1;
        unsigned z = 0x55555555;
        unsigned w = 0xFFFFFFFF;

        assert(!any_odd_one(x));
        assert(!any_odd_one(y));
        assert(any_odd_one(z));
        assert(!any_odd_one(w));

        return 0;
}

bool any_odd_one(unsigned x)
{
        return !(x ^ 0x55555555);
}
