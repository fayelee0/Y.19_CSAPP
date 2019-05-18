/*
 * Practice 63
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */

long decode2(long x, long y, long z)
{
        long t = x * (y - z);
        long w = (y >> 63) << 63;
        return w ^ t;
}
