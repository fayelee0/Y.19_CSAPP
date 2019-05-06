/*
 * Practice 36
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <limits.h>

bool tmult_ok(int x, int y);

int main(void)
{
        assert(!tmult_ok(INT_MAX, 2));
        assert(!tmult_ok(INT_MIN, 2));

        return 0;
}

bool tmult_ok(int x, int y)
{
        int64_t r = (int64_t) x * y;
        return r == (int) r;
}
