/*
 * Practice 26
 *
 * #+AUTHOR: Fei Li
 * #+EMAIL: wizard@pursuetao.com
 */
#include <string.h>

/*
int strlonger(char* s, char* t)
{
        return strlen(s) - strlen(t) > 0;
}
*/

/*
 * 1. size_t is unsigned
 * 2. if strlen(s) < strlen(t), strlen(s) - strlen(t) > 0
 *
 */

int strlonger(char* s, char* t)
{
        return strlen(s) > strlen(t);
}


