/**
 * Practice 05
 *
 */
#include <stdio.h>

void show_bytes(unsigned char* start, size_t len);

int main(void)
{
        int val = 0x87654321;
        unsigned char* valp = (unsigned char*) &val;

        show_bytes(valp, 1); // little endian: 21       ; big endian: 87
        show_bytes(valp, 2); // little endian: 21 43    ; big endian: 87 65
        show_bytes(valp, 3); // little endian: 21 43 65 ; big endian: 87 65 43

        return 0;
}

void show_bytes(unsigned char* start, size_t len)
{
        for (size_t i = 0; i < len; i++) {
                printf(" %.2x", start[i]);
        }
        printf("\n");
}
