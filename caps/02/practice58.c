/*
 * Practice 58
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <stdio.h>
#include <stdbool.h>

bool is_little_endian();

int main(void)
{
        printf("is little endian: %d\n", is_little_endian());

        return 0;
}

bool is_little_endian()
{
        int i = 1;
        return (&i)[0] != 0;
}
