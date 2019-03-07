/**
 * Practice 14
 *
 */

typedef long data_ta;

#define TEST_A >=

int testa(data_ta a)
{
        return a TEST_A 0;
}

typedef short data_tb1;
typedef unsigned short data_tb2;

#define TEST_B ==

int testb1(data_tb1 a)
{
        return a TEST_B 0;
}

int testb2(data_tb2 a)
{
        return a TEST_B 0;
}

typedef unsigned char data_tc;

#define TEST_C >

int testc(data_tc a)
{
        return a TEST_C 0;
}

typedef int data_td1;
typedef unsigned data_td2;

#define TEST_D !=

int testd1(data_td1 a)
{
        return a TEST_D 0;
}

int testd2(data_td2 a)
{
        return a TEST_D 0;
}
