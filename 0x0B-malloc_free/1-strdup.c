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

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = ptr[i];
		if (str[i] == '\0')
			return (str);
		else
			return (NULL);
	}
	n = str[i];
	ptr = (char *)malloc(n * sizeof(char));
	return (ptr);
}
