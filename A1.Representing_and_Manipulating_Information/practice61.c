/**
 * Practice 61
 *
 */
#include <stdio.h>
#include <assert.h>

int main(void)
{
        int x = 0x87654321;

        /**
         * A. any bit of x equals 1
         *
         */
        assert(1 == !(x & 0));

        /**
         * B. any bit of x equal 0
         *
         */
        assert(0 == (x & 0));

        /**
         * C. any bit in the least significant byte of x equals 1
         *
         */
        assert((x | 0xFF) == 0x876543FF);

        /**
         * D. any bit in the most significant byte of x equals 0
         *
         */
        int shift = (sizeof(int) - 1) << 3;
        assert((x & ~(0xFF << shift)) == 0x654321);

        return 0;
}
