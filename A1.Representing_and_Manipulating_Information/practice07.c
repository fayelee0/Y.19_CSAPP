/**
 * Practice 07
 *
 */
#include <stdio.h>
#include <string.h>

void show_bytes(unsigned char* start, size_t len);

int main(void)
{
        const char* s = "abcdef";
        show_bytes((unsigned char*) s, strlen(s));

        return 0;
}

void show_bytes(unsigned char* start, size_t len)
{
        for (size_t i = 0; i < len; i++) {
                printf(" %.2x", start[i]);
        }
        printf("\n");
}
