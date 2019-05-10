long fact_for(long n)
{
        long result = 1;
        for (long i = 1; i <= n; i++) {
                result *= i;
        }
        return result;
}

long fact_for_while(long n)
{
        long i = 2;
        long result = 1;
        while (i <= n) {
                result *= i;
                i++;
        }
        return result;
}

long fact_for_jm_goto(long n)
{
        long i = 2;
        long result = 1;
        goto test;

loop:
        result *= i;
        i++;

test:
        if (i <= n) {
                goto loop;
        }
        return result;
}

long fact_for_gd(long n)
{
        long i = 2;
        long result = 1;
        long t = i <= n;
        if (!t) {
                goto done;
        }

loop:
        result *= i;
        i++;
        t = i <= n;
        if (t) {
                goto loop;
        }

done:
        return result;
}
