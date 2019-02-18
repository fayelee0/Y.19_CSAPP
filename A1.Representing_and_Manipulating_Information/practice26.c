/**
 * Practice 26
 *
 */
#include <stdio.h>
#include <string.h>

int strlonger(char* s, char* t);

int main(void)
{
        char* s = "abcdef";
        char* t = "xyzuvwxyz";

        printf("%d\n", strlonger(s, t));

        return 0;
}

/*
 * if s.length < t.length then s.length - t.length always bigger than 0
 *
 */
/*
int strlonger(char* s, char* t)
{
        return strlen(s) - strlen(t) > 0;
}
*/

int strlonger(char* s, char* t)
{
        return strlen(s) > strlen(t);
}
