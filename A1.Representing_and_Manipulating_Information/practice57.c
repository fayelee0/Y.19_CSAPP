/**
 * Practice 57
 *
 */
#include <stdio.h>

void show_bytes(unsigned char* start, size_t len);

void show_short(short x);
void show_int(int x);
void show_long(long x);
void show_float(float x);
void show_double(double x);

int main(void)
{
        short s = -12345;
        int i = s;
        long l = s;
        float f = s;
        double d = s;

        show_short(s);
        show_int(i);
        show_long(l);
        show_float(f);
        show_double(d);

        return 0;
}

void show_bytes(unsigned char* start, size_t len)
{
        for (size_t i = 0; i < len; i++) {
                printf("%.2x ", start[i]);
        }
        printf("\n");
}

void show_short(short x)
{
        show_bytes((unsigned char*) &x, sizeof(short));
}

void show_int(int x)
{
        show_bytes((unsigned char*) &x, sizeof(int));
}

void show_long(long x)
{
        show_bytes((unsigned char*) &x, sizeof(long));
}

void show_float(float x)
{
        show_bytes((unsigned char*) &x, sizeof(float));
}

void show_double(double x)
{
        show_bytes((unsigned char*) &x, sizeof(double));
}
