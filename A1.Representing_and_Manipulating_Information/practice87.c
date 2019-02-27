/**
 * Practice 87
 *
 * k = 5
 * n = 10
 *
 * bias = 2^(k-1) - 1 = 2^4 - 1 = 15
 *
 * Integer 2 representation is 0x4000
 *
 * | Description                         | Hex  | M         | E   | V           | D        |
 * |---------------------------------------------------------------------------------------|
 * | -0                                  | 8000 | 0         | -14 | -0          | -0.0     |
 * | Smallest value > 2                  | 0401 | 1025/1024 | 1   | 1025/512    | 2.001953 |
 * | 512                                 | 6000 | 1         | 9   | 512         | 512.0    |
 * | Largest denormalized                | 03FF | 1023/1024 | -14 | 1023/(2^24) | 0.000061 |
 * | -Infinity                           | FC00 | -         | -   | -INF        | -INF     |
 * | Number with hex representation 3BB0 | 3BB0 | 123/64    | -1  | 123/128     | 0.960938 |
 *
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
        printf("%f\n", 1025.0 / 512);
        printf("%f\n", 1023.0 / pow(2, 24));
        printf("%f\n", 123.0 / 128);

        return 0;
}
