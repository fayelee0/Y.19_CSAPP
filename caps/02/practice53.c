/*
 * Practice 53
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <math.h>
#include <assert.h>

#define POS_INFINITY    1e400
#define NEG_INFINITY    (-POS_INFINITY)
#define NEG_ZERO        (-1.0 / POS_INFINITY)

int main(void)
{
        assert(NEG_ZERO == -0.0);
        assert(isinf(POS_INFINITY));
        assert(isinf(NEG_INFINITY));

        return 0;
}
