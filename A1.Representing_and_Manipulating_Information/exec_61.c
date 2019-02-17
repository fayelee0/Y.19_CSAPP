#include <stdio.h>
#include <assert.h>

// any bit of x equals 1 return #t else #f
int A(int x);

// any bit of x equals 0 return #t else #f
int B(int x);

// any bit in the least significant byte of x equals 1 return #t else #f
int C(int x);

// any bit in the most significant byte of x equals 0 return #t else #f
int D(int x);

int main(void)
{
        int x = 0;
        assert(!A(x));
        assert(B(x));
        assert(!C(x));
        assert(D(x));

        int y = ~0;
        assert(A(y));
        assert(!B(y));
        assert(C(y));
        assert(!D(y));

        int u = 0x654321;
        assert(!A(u));
        assert(!B(u));
        assert(!C(u));
        assert(D(u));

        int v = 0x12345678;
        assert(!A(v));
        assert(!B(v));
        assert(!C(v));
        assert(!D(v));

        int w = 0x876543FF;
        assert(!A(w));
        assert(!B(w));
        assert(C(w));
        assert(!D(w));

        return 0;
}

int A(int x)
{
        return !~x;
}

int B(int x)
{
        return !x;
}

int C(int x)
{
        return A(x | ~0xFF);
}

int D(int x)
{
        return !(x >> ((sizeof(int) -1) << 3));
}
