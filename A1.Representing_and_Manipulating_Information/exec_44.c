#include <stdio.h>
#include <limits.h>

int main(void)
{
        // A: (x > 0) || (x-1 < 0);  false
        // when x is INT_MIN x-1 is Umax
        printf("(%.2x > 0) || (%.2x-1 < 0) is %d\n",
               INT_MIN, INT_MIN, (INT_MIN > 0) || (INT_MIN-1 < 0));

        // B: (x & 7) != 7 || (x<<29 < 0);  true
        // if x&7 != 7 is flase, 30,31,32 bit is 1
        // when x<<29, the 1st bit is 1, less than 0
        // ==> (x<<29 < 0) is true

        // C: (x * x) >= 0;  false
        printf("(%.2x * %.2x) >= 0 is %d\n",
               1431655764, 1431655764, (1431655764 * 1431655764) >= 0);

        // D: x < 0 || -x <= 0;  true
        // if x < 0 is false, then x >= 0
        //
        // when x >= 0; x range is [0, Tmax]
        // then -x range is [-Tmax, 0]
        // -x <= 0
        //

        // E: x > 0 || -x >= 0;  false
        printf("0x%.2x > 0 || -0x%.2x >= 0 is %d\n",
               INT_MIN, INT_MIN, INT_MIN > 0 || -INT_MIN >= 0);

        // F: x + y == uy + ux;  true
        //
        // x + y = ux + x(w-1)*2^w + uy + y(w-1)*2^w
        // x + y = ux + uy

        // G: x*~y + uy*ux == -x;  true
        //
        // ~y == -y-1
        // x*~y + uy*ux = x*(-y-1) * x*y = -x

        return 0;
}
