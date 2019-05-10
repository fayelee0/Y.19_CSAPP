/*
 * Practice 27
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
long fact_for(long n)
{
        long result = 1;
        for (long i = 2; i <= n; i++) {
                result *= i;
        }
        return result;
}

long fact_for_to_while(long n)
{
        long result = 1;
        long i = 2;
        while (i <= n) {
                result *= i;
                i++;
        }
        return result;
}

long fact_for_to_while_gd(long n) {
        long result = 1;
        long i = 2;

        if (i > n) {
                goto done;
        }

loop:
        result *= i;
        i++;
        if (i <= n) {
                goto loop;
        }

done:
        return result;
}
