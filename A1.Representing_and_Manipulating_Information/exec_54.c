#include <stdio.h>
#include <limits.h>

int main(void)
{
        // A: x == (int)(double) x;
        //
        // true
        //
        // double > signed

        // B: x == (int)(float) x;
        //
        // false
        //
        // float < signed
        int xb = INT_MAX;
        printf("%d == (int)(float) %d is %d\n",
               xb, xb, xb == (int)(float) xb);

        // C: d == (double)(float) d;
        //
        // false
        //
        // float < double
        double xc = 1e40;
        printf("%g == (double)(float) %g is %d\n",
               xc, xc, xc == (double)(float) xc);

        // D: f == (float)(double) f;
        //
        // true
        //
        // double > float

        // E: f == -(-f)
        //
        // true
        //
        // just change sign value

        // F: 1.0/2 == 1/2.0
        //
        // true
        printf("1.0/2 == 1/2.0 is %d\n", 1.0/2 == 1/2.0);

        // G: d*d >= 0.0
        //
        // true

        // H: (f+d) - f == d
        float hf = 1e20;
        float hd = 1.0;
        printf("(%g+%g)-%g==%g is %d\n",
               hf, hd, hf, hd, (hf + hd) -hf == hd);

        return 0;
}
