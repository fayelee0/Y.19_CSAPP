/**
 * Practice 32
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>

bool tsub_ok(int x, int y);
bool tadd_ok(int x, int y);

int main(void)
{
        assert(tsub_ok(1, -1));
        assert(!tsub_ok(INT_MIN, 1));
        assert(!tsub_ok(1, INT_MIN)); // 1 - INT_MIN = 1 + INT_MAX + 1

        return 0;
}

/*
 * if y = INT_MIN; -y = INT_MAX + 1; overflow
 */
bool tsub_ok(int x, int y)
{
        bool ret;
        if (y == INT_MIN) {
                if (x > 0) {
                        ret = false;
                } else {
                        ret = true;
                }
        } else {
                ret = tadd_ok(x, -y);
        }
        return ret;
}

bool tadd_ok(int x, int y)
{
        int s = x + y;

        bool positiveOverflow = x > 0 && y > 0 && s <= 0;
        bool negativeOverflow = x < 0 && y < 0 && s >= 0;

        return !(positiveOverflow || negativeOverflow);
}
