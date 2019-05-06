#include <stdio.h>
#include "show_bytes.h"

int main(void)
{
        short sx = -12345;
        unsigned short usx = sx;
        int x = sx;
        unsigned ux = usx;

        printf("sx = %d:\t", sx);
        show_bytes((unsigned char*) &sx, sizeof(short));

        printf("usx = %u:\t", usx);
        show_bytes((unsigned char*) &usx, sizeof(unsigned short));

        printf("x = %d:\t", x);
        show_bytes((unsigned char*) &x, sizeof(int));

        printf("ux = %u:\t", ux);
        show_bytes((unsigned char*) &ux, sizeof(unsigned));

        return 0;
}
