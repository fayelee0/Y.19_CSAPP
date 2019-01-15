#include <stdio.h>
#include <string.h>

/* not use *typedef* contains pointer */
/* typedef unsigned char* byte_pointer; */

void show_bytes(unsigned char* start, size_t len)
{
        size_t i;
        for (i = 0; i < len; i++) {
                printf(" %.2x", start[i]);
        }
        printf("\n");
}

void show_int(int x)
{
        show_bytes((unsigned char*) &x, sizeof(int));
}

void show_float(float x)
{
        show_bytes((unsigned char*) &x, sizeof(float));
}

void show_pointer(void* x)
{
        show_bytes((unsigned char*) &x, sizeof(void*));
}

void test_show_bytes(int val)
{
        int ival = val;
        float fval = (float) val;
        int* pval = &ival;

        show_int(ival);
        show_float(fval);
        show_pointer(pval);
}

int main(void)
{
        int x = 12345;

        test_show_bytes(x);

        printf("\n");

        int y = 0x87654321;
        unsigned char* py = (unsigned char*) &y;
        show_bytes(py, 1);
        show_bytes(py, 2);
        show_bytes(py, 3);

        const char* s = "12345";
        show_bytes((unsigned char*) s, strlen(s));

        return 0;
}
