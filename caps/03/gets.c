#include <stdio.h>

/* Implementation of library function gets() */
char* gets(char* s)
{
        int c;
        char* dest = s;
        while ((c = getchar()) != '\n' && c != EOF) {
                *dest++ = c;
        }

        if (c == EOF && dest == s) {
                /* No characters read */
                return NULL;
        }
        *dest++ = '\0';
        return s;
}

/* Read input line and write it back */
void echo()
{
        char buf[8];
        gets(buf);
        puts(buf);
}
