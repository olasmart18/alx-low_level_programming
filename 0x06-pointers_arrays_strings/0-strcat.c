#include "main.h"

/**
 * _strcat - function to concatenate 2 strings
 * @dest: destination string or first string
 * @src: source string or second string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
