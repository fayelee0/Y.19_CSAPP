long fact_do_goto(long n)
{
        long result = 1;
LOOP:
        result *= n;
        n--;
        if (n > 1) {
                goto LOOP;
        }
        return result;
}
