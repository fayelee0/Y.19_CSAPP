/**
 * Practice 72
 *
 */
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

/*
 * Copy integer into buffer if space is avaliable
 *
 */
void copy_int(int val, void* buf, int max_bytes);

int main(void)
{
        int max_bytes = sizeof(int) * 10;
        void* buf = malloc(max_bytes);

        int x = 0x12345678;
        copy_int(x, buf, max_bytes);
        assert(*(int*)buf == x);

        int y = 0x87654321;
        copy_int(y, buf, 0);
        assert(*(int*)buf != y);

        free(buf);

        return 0;
}

void copy_int(int val, void* buf, int max_bytes)
{
        // sizeof(val) is size_t is uint
        // int - uint = uint >= 0
        /*
        if (max_bytes - sizeof(val) >= 0) {
                memcpy(buf, (void*) &val, sizeof(val));
        }
        */

        if (max_bytes >= (int) sizeof(val)) {
                memcpy(buf, (void*) &val, sizeof(val));
        }
}
