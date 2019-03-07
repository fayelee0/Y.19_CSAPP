long lt_cnt = 0;
long ge_cnt = 0;

long abs_diff_se_case1(long x, long y)
{
        long result;
        if (x >= y) {
                goto x_ge_y;
        }

        lt_cnt++;
        result = y - x;
        return result;

x_ge_y:
        ge_cnt++;
        result = x - y;
        return result;
}

long abs_diff_se_case2(long x, long y)
{
        long result;
        if (x < y) {
                goto x_lt_y;
        }

        ge_cnt++;
        result = x - y;
        return result;

x_lt_y:
        lt_cnt++;
        result = y - x;
        return result;
}
