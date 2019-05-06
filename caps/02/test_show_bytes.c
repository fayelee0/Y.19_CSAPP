#include <string.h>
#include "show_bytes.h"

int main(void)
{
        int i = 12345;
        float f = (float) i;
        int* p = &i;

        show_int(i);
        show_float(f);
        show_pointer(p);

        const char* s = "abcdef";
        show_bytes((unsigned char*) s, strlen(s));

        return 0;
}
