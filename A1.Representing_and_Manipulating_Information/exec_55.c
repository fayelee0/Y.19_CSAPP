#include <stdio.h>

void show_bytes(unsigned char* start, size_t len);

int main(void)
{
        int i = 0x12345678;
        printf("number 0x%.2x bytes ordering:", i);
        show_bytes((unsigned char*) &i, sizeof(i));
        return 0;
}

void show_bytes(unsigned char* start, size_t len)
{
        for (size_t i = 0; i < len; i++) {
                printf(" %.2x", start[i]);
        }
        printf("\n");
}
