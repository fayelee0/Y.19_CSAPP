/**
 * Practice 43
 *
 */
#include <stdio.h>
#include <assert.h>

#define M 31
#define N 8

int arith(int x, int y);

int arith(int x, int y)
{
        int result = 0;
        result = x * M + y / N;
        return result;
}

/* Translation of assembly code for arith */
int optarith(int x, int y)
{
        int t = x;
        x <<= 5;
        x -= t;

        if (y < 0) {
                y += 7;
        }

        y >>= 3;  /* Arithmetic shift */
        return x + y;
}
