#include <stdio.h>

int is_little_endian();

int main(void)
{
        int ret = is_little_endian();
        if (ret) {
                printf("little endian machine\n");
        } else {
                printf("big endian machine\n");
        }

        return 0;
}

int is_little_endian()
{
        int i = 1;

        return (&i)[0] & 0xF;
}
