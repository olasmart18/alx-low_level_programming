#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @c: charactic to input
 * @size: number of char
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		ptr[i] = c;
	}
	return (ptr);
	}
}
