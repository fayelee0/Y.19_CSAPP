/*
 * Practice 25
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */

/*
float sum_elements(float a[], unsigned length)
{
        float result = 0;
        for (int i = 0; i <= length - 1; i++) {
                result += a[i];
        }
        return result;
}
*/

/* if length == 0, length - 1 = -1 = Umax */
/* then segment fault */

float sum_elements(float a[], unsigned length)
{
        float result = 0;
        for (unsigned i = 0; i < length; i++) {
                result += a[i];
        }
        return result;
}

