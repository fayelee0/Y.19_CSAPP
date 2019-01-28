#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y);

/* Determine whether arguments can be added without overflow */
/* WARNNING: this code is buggy */
int tadd_bug_ok(int x, int y);

/* Determine whether arguments can be substracted without overflow */
int tsub_ok(int x, int y);

int main(void)
{
        // stage 0
        int x0 = -1431655765;
        int y0 = -1431655765;
        printf("%d + %d ok? %d\n", x0, y0, tadd_ok(x0, y0));
        printf("%d + %d ok? %d\n", x0, y0, tadd_bug_ok(x0, y0));

        // stage 1
        int x1 = -1431655765;
        int y1 = 10000203;
        printf("%d + %d ok? %d\n", x1, y1, tadd_ok(x1, y1));
        printf("%d + %d ok? %d\n", x1, y1, tadd_bug_ok(x1, y1));

        // stage 2
        int x2 = 1431655765;
        int y2 = -10000203;
        printf("%d + %d ok? %d\n", x2, y2, tadd_ok(x2, y2));
        printf("%d + %d ok? %d\n", x2, y2, tadd_bug_ok(x2, y2));

        // stage 3
        int x3 = 1431655765;
        int y3 = 1431655765;

        printf("%d + %d ok? %d\n", x3, y3, tadd_ok(x3, y3));
        printf("%d + %d ok? %d\n", x3, y3, tadd_bug_ok(x3, y3));

        printf("%d + %d ok? %d\n", -123, INT_MIN, tsub_ok(-123, INT_MIN));
        printf("%d + %d ok? %d\n", 123, INT_MIN, tsub_ok(123, INT_MIN));

        return 0;
}

int tadd_ok(int x, int y)
{
        int s = x + y;
        int overflow = (x < 0 && y < 0 && s >= 0) ||
                (x > 0 && y > 0 && s <= 0);

        return !overflow;
}

// such as x + y = s < -2^w
//
// s = x + y = x + y + 2^w
// s - x = y + 2^w == y
// s - y = x + 2^w == y
int tadd_bug_ok(int x, int y)
{
        int s = x + y;
        return (s - x == y) && (s - y == x);
}

// if y == Tmin; -y == Tmax + 1; x - y not overflow
// but int not contains Tmax + 1 value
int tsub_ok(int x, int y)
{
        if (y == INT_MIN) {
                return (x > 0) ? 0 : 1;
        }

        return tadd_ok(x, -y);
}
