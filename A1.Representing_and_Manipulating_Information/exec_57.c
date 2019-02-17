#include <stdio.h>

void show_bytes(unsigned char* start, size_t len);
void show_short(short n);
void show_long(long n);
void show_double(double n);

int main(void)
{
        short s = 12345;
        long l = 12345L;
        double d = 12345.0;

        show_short(s);
        show_long(l);
        show_double(d);

        return 0;
}

void show_bytes(unsigned char* start, size_t len)
{
        for (size_t i = 0; i < len; i++) {
                printf(" %.2x", start[i]);
        }
        printf("\n");
}

void show_short(short n)
{
        show_bytes((unsigned char*) &n, sizeof(short));
}

void show_long(long n)
{
        show_bytes((unsigned char*) &n, sizeof(long));
}

void show_double(double n)
{
        show_bytes((unsigned char*) &n, sizeof(double));
}
