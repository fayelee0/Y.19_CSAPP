/*
 * Practice 32
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>
#include <limits.h>

bool tadd_ok(int x, int y);
bool tsub_ok(int x, int y);

int main(void)
{
        assert(!tsub_ok(0, INT_MIN));
        assert(!tsub_ok(1, INT_MIN));

        assert(tsub_ok(-1, INT_MIN));
        assert(tsub_ok(INT_MIN, INT_MIN));

        return 0;
}

bool tadd_ok(int x, int y)
{
        int  s = x + y;
        bool o = (x > 0 && y > 0 && s <= 0) || (x < 0 && y < 0 && s >= 0);
        return !o;
}

/*
 * if y == INT_MIN, -y = INT_MAX + 1, then y overflow 
 *
 */
bool tsub_ok(int x, int y)
{
        if (y == INT_MIN) {
                return (x <= -1);
        } else {
                return tadd_ok(x, -y);
        }
}

