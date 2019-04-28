/*
 * Practice 62
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

bool int_shifts_are_arithmetic();

int main(void)
{
        printf("int shifts are arithmetic: %d\n", int_shifts_are_arithmetic());

        return 0;
}

/*
 * if arithmetic shift, -1 >> 1 == -1
 */
bool int_shifts_are_arithmetic()
{
        return !((-1 >> 1) ^ -1);
}
