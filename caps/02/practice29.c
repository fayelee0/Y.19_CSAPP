/*
 * Practice 29
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/* Determine whether arguments can be added without overflow */
bool tadd_ok(int x, int y);

int main(void)
{
        assert(tadd_ok(0, 0));
        assert(!tadd_ok(INT_MIN, -1));
        assert(!tadd_ok(INT_MAX, 1));

        return 0;
}

bool tadd_ok(int x, int y)
{
        int s = x + y;
        bool o = (x > 0 && y > 0 && s <= 0) || (x < 0 && y < 0 && s >= 0);
        return !o;
}
