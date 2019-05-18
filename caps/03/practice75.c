/*
 * Practice 75
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <complex.h>

double c_image(double complex x)
{
        return cimag(x);
}

double c_real(double complex x)
{
        return creal(x);
}

double complex c_sub(double complex x, double complex y)
{
        return x - y;
}
