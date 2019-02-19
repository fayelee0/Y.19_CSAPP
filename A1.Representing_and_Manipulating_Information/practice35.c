/**
 * Practice 35
 *
 */
#include <stdio.h>
#include <assert.h>

int tmul_ok(int x, int y);

int main(void)
{
        
}

int tmul_ok(int x, int y)
{
        int p = x * y;

        return !x || p / x == y;
}
