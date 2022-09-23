#include "main.h"

/**
 * strncpy - function copy strings
 * @dest: destination string or first string
 * @src: source string or second string
 * @n: sring number to be copied
 * 
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;
    int j;

    //for (i = 0; dest[i] == '\0' && src[i] == '\0'; i++)
    while (src[j])
    {
        j++;
    }

    while (i < n && src[i])
        {
             dest[i] = src[i];
             i++;
        }
       while (i < n)
       {
        dest[i] = '\0';
        i++;
       }
    return (dest);
}