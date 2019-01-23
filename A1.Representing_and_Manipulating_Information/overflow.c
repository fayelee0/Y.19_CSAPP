#include <stdio.h>

int main(void)
{
        int x0 = 200 * 300 * 400 * 500;
        int x1 = (500 * 400) * (300 * 200);
        int x2 = ((500 * 400) * 300) * 200;
        int x3 = 400 * (200 * (300 * 500));
        printf("x0 = %d, x1 = %d, x2 = %d, x3 = %d\n", x0, x1, x2, x3);

        double f1 = (3.14 + 1e20) - 1e20;
        double f2 = 3.14 + (1e20 - 1e20);
        printf("f1 = %g, f2 = %g\n", f1, f2);

        return 0;
}
