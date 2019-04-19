/**
 * Practice 33
 *
 */
#include <stdio.h>

size_t procprob(int a, short b, long* u, char* v)
{
        *u += a;
        *v += b;
        return sizeof(a) + sizeof(b);
}


size_t procprob2(int b, short a, long* v, char* u)
{
        *u += a;
        *v += b;
        return sizeof(a) + sizeof(b);
}
