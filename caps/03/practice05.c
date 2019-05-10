/*
 * Practice 05
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
void decode1(long* xp, long* yp, long* zp)
{
        long x = *xp;
        long y = *yp;
        long z = *zp;

        *xp = z;
        *yp = x;
        *zp = y;
}
