/*
 * Practice 76
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdlib.h>
#include <string.h>

void* calloc(size_t memb, size_t size);

int main(void)
{
        void* p1 = calloc(1234, 1);
        assert(p1 != NULL);
        free(p1);

        void* p2 = calloc(SIZE_MAX, 2);
        assert(p2 == NULL);

        return 0;
}

void* calloc(size_t memb, size_t size)
{
        if (memb == 0 || size == 0) {
                return NULL;
        }

        size_t n = memb * size;
        if (size == n / memb) {
                void* p = malloc(n);
                if (p == NULL) {
                        return NULL;
                } else {
                        memset(p, 0, n);
                        return p;
                }
        }

        return NULL;
}

