/*
 * Practice 37
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <stdlib.h>
#include <string.h>

void* copy_elements(void* ele_src[], int ele_cnt, size_t ele_size)
{
        uint64_t asize = ele_cnt * (uint64_t) ele_size;
        // uint64_t -> uint32_t
        // overflow
        // void* result = malloc(asize);

        size_t csize = (size_t) asize;
        if (csize != asize) {
                return NULL;
        }
        void* result = malloc(csize);

        // void* result = malloc(ele_cnt * ele_size);
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
