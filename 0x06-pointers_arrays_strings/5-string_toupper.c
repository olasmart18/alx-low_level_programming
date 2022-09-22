#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function convert string to uppercase
 * 
 * Return nothing
 */

char *string_toupper(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
    {
        str[i] = str[i] - 32;
    }
    }
    return (str);
} 
    /*int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}*/
