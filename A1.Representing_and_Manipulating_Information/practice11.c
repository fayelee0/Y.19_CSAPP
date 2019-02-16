/**
 * Practice 11
 *
 */
#include <stdio.h>

void inplace_swap(int* x, int* y);
void reverse_array(int a[], int cnt);
void print_array(int a[], int cnt);

int main(void)
{
        int a[] = {1, 2, 3, 4};

        print_array(a, 4);
        reverse_array(a, 4);
        print_array(a, 4);

        int b[] = {1, 2, 3, 4, 5};

        print_array(b, 5);
        reverse_array(b, 5);
        print_array(b, 5);

        return 0;
}

void inplace_swap(int* x, int* y)
{
        *x = *x ^ *y;
        *y = *x ^ *y;
        *x = *x ^ *y;
}

void reverse_array(int a[], int cnt)
{
        /*
        for (int first = 0, last = cnt - 1; first < last; first++, last--) {
                inplace_swap(&a[first], &a[last]);
        }
        */

        for (int i = 0; i < cnt / 2; i++) {
                inplace_swap(&a[i], &a[cnt - 1 - i]);
        }
}

void print_array(int a[], int cnt) {
        for (int i = 0; i < cnt; i++) {
                printf("%d ", a[i]);
        }
        printf("\n");
}
