/*
 * Practice 72
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <string.h>
#include <stdio.h>

/* Copy integer into buffer if space is available */
void copy_int(int val, void* buf, int maxbytes);

int main(void)
{
        int v1 = 0x12345678;
        int v2 = 0x87654321;
        int buf[8] = {0};

        copy_int(v1, buf, 4);
        assert(*(int*) buf == v1);

        copy_int(v2, buf, 0);
        assert(*(int*) buf != v2);

        return 0;
}

void copy_int(int val, void* buf, int maxbytes)
{
        // int - unsigned = unsigned >= 0
        /*
        if (maxbytes - sizeof(val) >= 0) {
                memcpy(buf, (void*) &val, sizeof(val));
        }
        */

        if (maxbytes >= (int) sizeof(val)) {
                memcpy(buf, (void*) &val, sizeof(val));
        }
}
