/**
 * Practice 81
 *
 */
#include <stdio.h>
#include <assert.h>

int formA(int k);
int formB(int k, int j);

int main(void)
{
        assert(formA(0) == 0xFFFFFFFF);
        assert(formA(1) == 0xFFFFFFFE);
        assert(formA(2) == 0xFFFFFFFC);
        assert(formA(4) == 0xFFFFFFF0);
        assert(formA(8) == 0xFFFFFF00);
        assert(formA(16) == 0xFFFF0000);
        assert(formA(32) == 0x00000000);

        assert(formB(0, 0) == 0x00000000);
        assert(formB(1, 1) == 0x00000002);
        assert(formB(2, 2) == 0x0000000C);
        assert(formB(4, 4) == 0x000000F0);
        assert(formB(8, 8) == 0x0000FF00);
        assert(formB(16, 16) == 0xFFFF0000);
        assert(formB(0, 32) == 0x00000000);
        assert(formB(32, 0) == 0xFFFFFFFF);

        return 0;
}

int formA(int k)
{
        int w = sizeof(int) << 3;
        int m = 0;

        !(k ^ w) && (m = 1);

        return ~0 << (k - m) << m;
}

int formB(int k, int j)
{
        int w = sizeof(int) << 3;
        int m = 0;
        int n = 0;

        !(k ^ 0) && (m = 1);
        !(j ^ w) && (n = 1);

        int x = ((unsigned) ~0) >> m >> (w - k - m);
        return x << n << (j - n);
}
