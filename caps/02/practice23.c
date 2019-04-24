/*
 * Practice 23
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

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
        unsigned a = 0x00000076;
        assert(fun1(a) == 0x00000076);
        assert(fun2(a) == 0x00000076);

        unsigned b = 0x87654321;
        assert(fun1(b) == 0x00000021);
        assert(fun2(b) == 0x00000021);

        unsigned c = 0x000000C9;
        assert(fun1(c) == 0x000000C9);
        assert(fun2(c) == 0xFFFFFFC9);

        unsigned d = 0xEDCBA987;
        assert(fun1(d) == 0x00000087);
        assert(fun2(d) == 0xFFFFFF87);

        return 0;
}
