long fact_for_jm_goto(long n)
{
        long i = 2;
        long result = 1;
        goto test;
loop:
        result *= n;
        i++;
test:
        if (i <= n) {
                goto loop;
        }
        return result;
}
