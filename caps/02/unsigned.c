#include <assert.h>

int main(void)
{
        assert((0 == 0)); // #t
        assert((-1 < 0)); // #t
        assert(!(-1 < 0U)); // #f
        assert((2147483647 > -2147483647-1)); // #t
        assert(!(2147483647U > -2147483647-1)); // #f
        assert((2147483647 > (int) 2147483648U)); // #t
        assert((-1 > -2)); // #t
        assert(((unsigned) -1 > -2)); // #t

        return 0;
}
