/*
 * Practice 55
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include "show_bytes.h"

int main(void)
{
        double d = 0.1;

        show_bytes((unsigned char*) &d, sizeof(double));

        return 0;
}
