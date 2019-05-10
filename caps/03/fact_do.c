long fact_do(long n)
{
        long result = 1;
        do {
                result *= n;
                n--;
        } while (n > 1);
        return result;
}

long fact_do_goto(long n)
{
        long result = 1;

loop:
        result *= n;
        n--;
        if (n > 1) {
                goto loop;
        }
        return result;
}

