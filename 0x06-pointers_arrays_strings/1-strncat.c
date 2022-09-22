ginclude "main.h"

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
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++. len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
