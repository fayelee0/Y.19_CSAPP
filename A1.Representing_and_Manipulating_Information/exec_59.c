#include <stdio.h>
#include <assert.h>

int main(void)
{
        int x = 0x89ABCDEF;
        int y = 0x76543210;

        int val = (x & 0xFF) | (y & ~0xFF);
        assert(val == 0x765432EF);

        return 0;
}
