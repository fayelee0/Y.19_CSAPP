/*
 * Practice 22
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <stdio.h>

int fact_xbit_with_limit(int w, long* n);

int main(void)
{
        long x32 = 0;
        int  n32 = fact_xbit_with_limit(32, &x32);
        printf("32 bit fact: %d %ld\n", n32, x32);

        long x64 = 0;
        int  n64 = fact_xbit_with_limit(64, &x64);
        printf("64 bit fact: %d %ld\n", n64, x64);

        return 0;
}

int fact_xbit_with_limit(int w, long* n)
{
        long x = 1;
        long p = 1;
        int  c = 2;
        long m = ~((unsigned long) -1 << (w - 1));
        while (1) {
                p = x;
                x *= c;
                if ((x > m) || (x / c != p)) {
                        *n = p;
                        return c - 1;
                }
                c++;
        }
        return 0;
}
