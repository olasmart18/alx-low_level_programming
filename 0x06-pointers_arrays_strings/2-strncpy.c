#include "main.h"

/**
 * strncpy - function copy strings
 * @dest: destination string or first string
 * @src: source string or second string
 * @n: sring number to be copied
 * 
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; dest[i] == '\0' && src[i] == '\0'; i++)
    {
        if (i < n && src[i] != '\0')
        {
             dest[i] = src[i];
        }
       
    }
    return (dest);
}