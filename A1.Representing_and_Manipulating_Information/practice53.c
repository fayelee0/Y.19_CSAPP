/**
 * Practice 53
 *
 */
#include <stdio.h>
#include <assert.h>

#define POS_INFINITY 1e400
#define NEG_INFINITY (-POS_INFINITY)
#define NEG_ZERO (-1.0/POS_INFINITY)

int main(void)
{
        printf("%g %g %g\n", POS_INFINITY, NEG_INFINITY, NEG_ZERO);

        return 0;
}
