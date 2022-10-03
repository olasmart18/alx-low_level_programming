#include "main.h"
/**
 * _strlen - function to check for length of a string
 * @s: string to check
 * Return: string lenght
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		return (i);
	}
	return (0);
}

/**
 * _strcpy - function to copy string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

int _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];

	}
	dest[i] = '\0'
	return (dest);
}

/**
 * _strdup - function to copy and return pointer to new space
 * @str: sring to copy
 *
 * Return:NULL if str = NULL
 */


char *_strdup(char *str)
{
	char *ptr;
	int n;

	if (str == 0)
	{
		return (NULL);
	}

	n = _strlen(str) + 1;
	ptr = (char *)malloc(n * sizeof(char));

	if (ptr == 0)
	{
	return (NULL);
	}
	_strcpy(ptr, str);
	return (ptr);
}
