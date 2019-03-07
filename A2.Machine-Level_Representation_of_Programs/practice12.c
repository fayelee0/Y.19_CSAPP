void uremdiv(unsigned long x, unsigned long y, unsigned long *gp, unsigned long *rp)
{
        unsigned long q = x / y;
        unsigned long r = x % y;
        *gp = q;
        *rp = r;
}
