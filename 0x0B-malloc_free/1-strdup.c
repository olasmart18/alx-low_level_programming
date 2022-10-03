#include "main.h"

/**
 * _strdup - function to copy and return pointer to new space
 * @str: sring to copy
 *
 * Return:NULL if str = NULL
 */


char *_strdup(char *str)
{
	int i;
	char *ptr;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(n * sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		*str[i] = ptr;
		if (str[i] == '\0')
			return (ptr);
		else
			return (NULL);
	}
	return (0);
}
