/*
 * Practice 35
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */

long rf(unsigned long x)
{
        if (x == 0) {
                return 0;
        }

        unsigned long nx = x >> 2;
        long rv = rf(nx);
        return x + rv;
}

/*
long call_rf()
{
        return rf(10);
}
*/
