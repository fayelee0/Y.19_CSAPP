/*
 * Practice 61
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>

bool expr1(int x);
bool expr2(int x);
bool expr3(int x);
bool expr4(int x);

int main(void)
{
        assert(expr1(-1));
        assert(!expr1(0));
        assert(!expr1(1));

        assert(expr2(0));
        assert(!expr2(1));
        assert(!expr2(-1));

        assert(expr3(255));
        assert(!expr3(15));
        assert(!expr3(0));

        assert(expr4(1));
        assert(!expr4(-1));

        return 0;
}

bool expr1(int x)
{
        return !~x;
}

bool expr2(int x)
{
        return !x;
}

bool expr3(int x)
{
        return !((x & 0xFF) ^ 0xFF);
}

bool expr4(int x)
{
        return !(x >> 24);
}
