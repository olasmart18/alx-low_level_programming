#include "main.h"

/**
 * _strncat - function concatenate 2 strings
 * @dest: destination string
 * @src: sourse string
 * @n: limit of concatination
 * 
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
    int i =0;
    int len = 0;

    while (dest[len])
    {
        len++;
    }
    while (i < n && src[i])
    {
        dest[len] = src[i];
        len++;
        i++;
    }
    dest[len + n + 1] = '\0';
    return(dest);
}