/**
 * Practice 59
 *
 */
#include <stdio.h>
#include <assert.h>

int main(void)
{
        int x = 0x89ABCDEF;
        int y = 0x76543210;

        int z = (x & 0xFF) | (y & ~0xFF);

        assert(z == 0x765432EF);

        return 0;
}
