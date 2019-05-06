/*
 * Practice 15
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>

bool equal(int x, int y);

int main(void)
{
        assert(equal(0, 0));
        assert(!equal(0, 1));

        assert(equal(21, 21));
        assert(!equal(21, 31));

        return 0;
}

bool equal(int x, int y)
{
        return !(x ^ y);
}

