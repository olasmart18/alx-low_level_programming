#include "main.h"

/**
 * _strncpy - function copy strings
 * @dest: destination string or first string
 * @src: source string or second string
 * @n: sring number to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i]
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
