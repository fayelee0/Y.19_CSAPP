/*
 * Practice 57
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include "show_bytes.h"

void show_short(short s);
void show_long(long n);
void show_double(double d);

int main(void)
{
        short s = 1;
        long n = 1;
        double d = 1.0;

        show_short(s);
        show_long(n);
        show_double(d);

        return 0;
}

void show_short(short s)
{
        show_bytes((unsigned char*) &s, sizeof(short));
}

void show_long(long n)
{
        show_bytes((unsigned char*) &n, sizeof(long));
}

void show_double(double d)
{
        show_bytes((unsigned char*) &d, sizeof(double));
}
