long abs_diff(long x, long y)
{
        long result;
        if (x < y) {
                result = y - x;
        } else {
                result = x - y;
        }
        return result;
}
