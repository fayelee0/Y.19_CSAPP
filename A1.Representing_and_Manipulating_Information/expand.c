#include <stdio.h>

void show_bytes(unsigned char* start, size_t len)
{
        for (size_t i = 0; i < len; i++) {
                printf(" %.2x", start[i]);
        }
        printf("\n");
}

int main(void)
{
        short sx = -12345;
        unsigned short usx = sx;
        int x = sx;
        unsigned ux = usx;

        printf("sx = %d:\t", sx);
        show_bytes((unsigned char*) &x, sizeof(short));

        printf("usx = %u:\t", usx);
        show_bytes((unsigned char*) &usx, sizeof(unsigned short));

        printf("x = %d:\t", x);
        show_bytes((unsigned char*) &x, sizeof(int));

        printf("ux = %d:\t", ux);
        show_bytes((unsigned char*) &ux, sizeof(unsigned));

        return 0;
}
