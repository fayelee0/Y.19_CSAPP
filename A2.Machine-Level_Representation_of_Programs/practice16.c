/**
 * Practice 16
 *
 */
void cond(long a, long* p)
{
        if (p == 0) {
                goto done;
        }

        if (*p >= a) {
                goto done;
        }

        *p = a;

done:
        return;
}
