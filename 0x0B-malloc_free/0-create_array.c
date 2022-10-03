#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @c: charactic to input
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;
	
	ptr = (char*)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
	if (ptr == NULL)
	{
		return (0);
	}
	else
		_putchar(c);
	}
	return (0);
}
