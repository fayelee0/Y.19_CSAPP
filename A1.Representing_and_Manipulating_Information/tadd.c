#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int tadd_ok(int x, int y)
{
        int s = x + y;

        bool lt = x > 0 && y > 0 && s < 0;
        bool lg = x < 0 && y < 0 && s > 0;

        return !(lt || lg);
}

/* WARNNING: this code is buggy */
int tadd_ok_bug(int x, int y)
{
        int s = x + y;
        return (s - x == y) && (s - y == x);
}

int tsub_ok(int x, int y)
{
        return tadd_ok(x, -y);
}

/* TODO: 2.30 ~ 2.32 */
int main(void)
{
        int x = INT_MIN;
        int y = INT_MAX;

        printf("%.2x-1 check %d\n", x, tadd_ok(x, -1));
        printf("%.2x+1 check %d\n", x, tadd_ok(x, 1));

        printf("bug: %.2x-1 check %d\n", x, tadd_ok_bug(x, -1));
        printf("bug: %.2x+1 check %d\n", x, tadd_ok_bug(x, 1));

        printf("%.2x+1 check %d\n", y, tadd_ok(y, 1));
        printf("%.2x-1 check %d\n", y, tadd_ok(y, -1));

        printf("bug: %.2x+1 check %d\n", y, tadd_ok(y, 1));
        printf("bug: %.2x-1 check %d\n", y, tadd_ok(y, -1));

        int u = INT_MIN;
        int w = 1;
        int s = u + w;
        printf("u = %.2x w = %.2x s = %.2x\n", u, w, s);
        printf("s - u = %.2x\n", s - u);
        printf("s - w = %.2x\n", s - w);

        return 0;
}
