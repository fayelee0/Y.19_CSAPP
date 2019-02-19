/**
 * Practice 37
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void* copy_elements(void* ele_src[], int ele_cnt, size_t ele_size)
{
        uint64_t asize = ele_cnt * (uint64_t) ele_size;
        size_t size = (size_t) asize;
        if (asize != size) {
                return NULL; // overflow
        }

        void* result = malloc(size);
        if (result == NULL) {
                return NULL;
        }

        void* next = result;
        for (int i = 0; i < ele_cnt; i++) {
                memcpy(next, ele_src[i], ele_size);
                next += ele_size;
        }

        return result;
}
