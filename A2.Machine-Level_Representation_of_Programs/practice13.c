/**
 * Practice 13
 *
 */
typedef int data_ta;

#define COMP_A <

int compa(data_ta a, data_ta b)
{
        return a COMP_A b;
}


typedef short data_tb;

#define COMP_B >=

int compb(data_tb a, data_tb b)
{
        return a COMP_B b;
}


typedef unsigned char data_tc;

#define COMP_C <=

int compc(data_tc a, data_tc b)
{
        return a COMP_C b;
}


typedef long data_t1;
typedef unsigned long data_t2;
typedef int* data_t3;

#define COMP_D !=

int comp1(data_t1 a, data_t1 b)
{
        return a COMP_D b;
}

int comp2(data_t2 a, data_t2 b)
{
        return a COMP_D b;
}

int comp3(data_t3 a, data_t3 b)
{
        return a COMP_D b;
}
