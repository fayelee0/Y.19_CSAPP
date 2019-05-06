/*
 * Practice 55
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include "show_bytes.h"

int main(void)
{
        int x = 1;

        show_bytes((unsigned char*) &x, sizeof(int));

        return 0;
}
