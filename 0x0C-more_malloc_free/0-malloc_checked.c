#include "main.h"

/**
 * malloc_checked - function to allocate memory
 * @b: unsigned int
 *
 * Return: pointer to the memory or 98 if failed
 */

void *malloc_checked(unsigned int b)
{
	int *newMemory;
	unsigned int n;

	newMemory = (int *)malloc(n * sizeof *b);
	if (newMemory == NULL)
	{
		exit (98);
	}
	return (newMemory);
}
