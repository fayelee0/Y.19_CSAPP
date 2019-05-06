/*
 * Practice 43
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */

#define M 31
#define N  8

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
        x -= t;          // x << 5 - x = x << (5 - 0) = 31x, M = 31
        if (y < 0) {
                y += 7;  // b = 7, 1<<3 - 1, k = 3
        }
        y >>= 3;         // y >> 3, k = 3, N = 8
        return x + y;
}
