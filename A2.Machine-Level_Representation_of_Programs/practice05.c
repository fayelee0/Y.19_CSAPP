void decode1(long* x, long* y, long* z)
{
        long xv = *x;
        long yv = *y;
        long zv = *z;

        *y = xv;
        *z = yv;
        *x = zv;
}
