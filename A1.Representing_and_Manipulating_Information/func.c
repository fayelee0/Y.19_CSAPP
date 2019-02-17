#include <stdio.h>

void show_bytes(unsigned char* start, size_t len)
{
        for (size_t i = 0; i < len; i++) {
                printf(" %.2x", start[i]);
        }
        printf("\n");
}

int fun1(unsigned word)
{
        return (int) ((word << 24) >> 24);
}

int fun2(unsigned word)
{
        return ((int) word << 24) >> 24;
}

int main(void)
{
        unsigned w0 = 0x00000076;
        int w01 = fun1(w0);  // 0x00000076
        int w02 = fun2(w0);  // 0x00000076
        show_bytes((unsigned char*) &w01, sizeof(w01));
        show_bytes((unsigned char*) &w02, sizeof(w02));

        unsigned w1 = 0x87654321;
        int w11 = fun1(w1);  // 0x00000021
        int w12 = fun2(w1);  // 0x00000021
        show_bytes((unsigned char*) &w11, sizeof(w11));
        show_bytes((unsigned char*) &w12, sizeof(w12));

        unsigned w2 = 0x000000C9;
        int w21 = fun1(w2);  // 0x000000C9
        int w22 = fun2(w2);  // 0xFFFFFFC9
        show_bytes((unsigned char*) &w21, sizeof(w21));
        show_bytes((unsigned char*) &w22, sizeof(w22));

        unsigned w3 = 0xEDCBA987;
        int w31 = fun1(w3);  // 0x00000087
        int w32 = fun2(w3);  // 0xFFFFFF87
        show_bytes((unsigned char*) &w31, sizeof(w31));
        show_bytes((unsigned char*) &w32, sizeof(w32));

        return 0;
}
