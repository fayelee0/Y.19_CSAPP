#include <stdio.h>
#include <stdint.h>

void inplace_swap(int32_t *x, int32_t *y)
{
        *y = *x ^ *y;
        *x = *x ^ *y;
        *y = *x ^ *y;
}

void reverse_array(int32_t a[], int cnt)
{
        for (int first = 0, last = cnt - 1; first < last; first++, last--) {
                inplace_swap(&a[first], &a[last]);
        }
}

void print_array(char* name, int32_t a[], int cnt)
{
        printf("%s: ", name);
        for (int i = 0; i < cnt; i++) {
                printf("%d ", a[i]);
        }
        printf("\n");
}

int main(void)
{
        int32_t x = 10;
        int32_t y = 20;

        printf("before (x, y) = (%d, %d)\n", x, y);
        inplace_swap(&x, &y);
        printf("after  (x, y) = (%d, %d)\n", x, y);

        int32_t arr_even[] = {1, 2, 3, 4};
        print_array("before", arr_even, 4);
        reverse_array(arr_even, 4);
        print_array("after ", arr_even, 4);
        printf("\n");

        int32_t arr_odd[] = {1, 2, 3, 4, 5};
        print_array("before", arr_odd, 5);
        reverse_array(arr_odd, 5);
        print_array("after ", arr_odd, 5);

        return 0;
}
