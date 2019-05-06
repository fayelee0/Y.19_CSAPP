#include <stdio.h>
#include "show_bytes.h"

void show_bytes(unsigned char* start, size_t len)
{
        for (size_t i = 0; i < len; i++) {
                printf("%.2x ", start[i]);
        }
        printf("\n");
}

void show_int(int x)
{
        show_bytes((unsigned char*) &x, sizeof(x));
}

void show_float(float x)
{
        show_bytes((unsigned char*) &x, sizeof(x));
}

void show_pointer(void* x)
{
        show_bytes((unsigned char*) &x, sizeof(void*));
}

