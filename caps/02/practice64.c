/*
 * Practice 64
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <stdbool.h>
#include <assert.h>

/* Return #t when any odd bit of x equals 1; #f otherwise */
bool any_odd_one(unsigned x);

int main(void)
{
        assert(!any_odd_one(0));
        assert(!any_odd_one(1));
        assert(!any_odd_one(0xAAAAA));
        assert(!any_odd_one(0xAAAAAA));
        assert(!any_odd_one(0xAAAAAAA));

        assert(any_odd_one(0xAAAAAAAA));

        return 0;
}

/*
 * 1010 1010      x
 * 0101 0100      x << 1
 * ---------
 * 1111 1110      x | (x << 1)
 *         1
 * ---------
 * 1111 1111      x | (x << 1) | 1
 *
 * 0000 0000      ~(x | (x << 1) | 1)
 *
 * 0000 0001      !~(x | (x << 1) | 1)
 *
 */
bool any_odd_one(unsigned x)
{
        return !~(x | (x << 1) | 1);
}
