/*
 * Practice 67
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

bool int_size_is_32();
bool int_size_is_32_16bit();

int main(void)
{
        printf("int size is 32: %d\n", int_size_is_32());
        printf("int size is 32: %d\n", int_size_is_32_16bit());

        return 0;
}

bool int_size_is_32()
{
        int set_msb = 1 << 31;
        int beyond_msb = set_msb << 1;
        return set_msb && !beyond_msb;
}

bool int_size_is_32_16bit()
{
        int smsb = 1 << 15;
        int bmsb = smsb << 15 << 1 << 1;
        return smsb && !bmsb;
}

