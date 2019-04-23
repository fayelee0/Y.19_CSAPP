/*
 * Practice 07
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <string.h>
#include "show_bytes.h"

int main(void)
{
        /* 61 62 63 64 65 66 */
        const char* s = "abcdef";
        show_bytes((unsigned char*) s, strlen(s));

        return 0;
}
