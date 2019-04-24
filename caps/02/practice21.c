/*
 * Practice 21
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <assert.h>

int main(void)
{
        assert(  -2147483647-1  == 2147483648U );
        assert(  -2147483647-1  <  2147483647  );
        assert(!(-2147483647-1U <  2147483647) );
        assert(  -2147483647-1  < -2147483647  );
        assert(  -2147483647-1U < -2147483647  );

        return 0;
}

