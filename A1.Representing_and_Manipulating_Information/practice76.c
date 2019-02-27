/**
 * Practice 76
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void* $calloc(size_t nmemb, size_t size);

int main(void)
{
        void* p = $calloc(0x1234, 1);
        assert(p != NULL);
        free(p);

        void* q = $calloc(SIZE_MAX, 2);
        assert(q == NULL);
        free(q);

        return 0;
}

void* $calloc(size_t nmemb, size_t size)
{
        if (nmemb == 0 || size == 0) {
                return NULL;
        } else {
                /*
                 * multiply not overflow (x * y = z)
                 *
                 * !x || z / x = y;
                 *
                 */
                size_t alloc_size = nmemb * size;
                if (nmemb == alloc_size / size) {
                        void* ptr = malloc(alloc_size);
                        memset(ptr, 0, alloc_size);
                        return ptr;
                } else {
                        return NULL;
                }
        }
}
