#include "show_bytes.h"

int main(void)
{
        short x = 12345;
        short mx = -x;

        show_bytes((unsigned char*) &x, sizeof(x));
        show_bytes((unsigned char*) &mx, sizeof(mx));

        return 0;
}
