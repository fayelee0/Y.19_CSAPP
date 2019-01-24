#include <stdio.h>
#include <strings.h>

/* Determine whether string s is longer than string t */
/* WARNNING: This function is buggy */
int strlonger(char *s, char *t)
{
        // when s length is 0, t length is 1
        // 0U - 1U = UMax
        // return strlen(s) - strlen(t) > 0;

        return strlen(s) > strlen(t);
}

int main(void)
{
        char* s = "";
        char* t = "1";

        printf("s longer t = %d\n", strlonger(s, t));

        return 0;
}
