/*
 * Practice 89
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <limits.h>

void case_d();

int main(void)
{
        case_d();

        return 0;
}

void case_d()
{
        int x = 0x8FFFF789;
        int y = 0x8FFFF123;
        int z = 0x8FFFF456;

        double dx = (double) x;
        double dy = (double) y;
        double dz = (double) z;

        assert((dx * dy) * dz != dx * (dy * dz)); 
}
