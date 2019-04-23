/*
 * Practice 13
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

/* Declarations of functions implementing operations bis and bic */
int bis(int x, int m); /* bis(x, m) = x | m  */
int bic(int x, int m); /* bic(x, m) = x & ~m */

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y)
{
        return bis(x, y);
}

/* Compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y)
{
        /* x^y = (x & ~y) | (~x & y) */
        return bis(bic(x, y), bic(y, x));
}

int main(void)
{
        assert(bis(0, 0) == 0);
        assert(bis(0, 1) == 1);
        assert(bis(1, 0) == 1);
        assert(bis(1, 1) == 1);

        assert(bic(0, 0) == 0);
        assert(bic(0, 1) == 0);
        assert(bic(1, 0) == 1);
        assert(bic(1, 1) == 0);

        assert(bool_or(0, 0) == 0);
        assert(bool_or(0, 1) == 1);
        assert(bool_or(1, 0) == 1);
        assert(bool_or(1, 1) == 1);

        assert(bool_xor(0, 0) == 0);
        assert(bool_xor(0, 1) == 1);
        assert(bool_xor(1, 0) == 1);
        assert(bool_xor(1, 1) == 0);

        return 0;
}

int bis(int x, int m)
{
        return x | m;
}

int bic(int x, int m)
{
        return x & ~m;
}

