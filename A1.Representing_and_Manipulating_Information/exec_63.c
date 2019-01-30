#include <stdio.h>
#include <assert.h>

// Function srl performs a logical right shift using an arithmetic right shift
// followed by other operations not including right shifts or division
unsigned srl(unsigned x, int k);

// Function sra performs an arithmetic right shift using a logical right shift
// followed by other operations not including right shifts or division
int sra(int x, int k);

// 0x87654321
// 0x00876543 (l) (0x87654321 >> 8) & 0x00FFFFFF
// 0xFF876543 (a) (0x87654321 >> 8) | 0xFF000000
int main(void)
{
        int x = 0x87654321;
        int y = 0x12345678;

        assert(srl((unsigned) x, 8) == 0x00876543);
        assert(srl((unsigned) y, 8) == 0x00123456);

        assert(sra(x, 8) == 0xFF876543);
        assert(sra(y, 8) == 0x00123456);

        return 0;
}

// 0x87654321 >> 8 -> 0xFF876543 & 0x00FFFFFF -> 0x00876543
// 0x12345678 >> 8 -> 0x00123456 & 0x00FFFFFF -> 0x00123456
unsigned srl(unsigned x, int k)
{

        unsigned xsra = (int) x >> k;

        int w = sizeof(int) << 3;
        int mask = ~(-1 << (w - k));

        return xsra & mask;
}

int sra(int x, int k)
{
        int xsrl = (unsigned) x >> k;

        int w = sizeof(int) << 3;
        int mask = -1 << (w - k);

        int m = 1 << (w - 1);

        mask &= !(x & m) - 1;

        return xsrl | mask;
}
