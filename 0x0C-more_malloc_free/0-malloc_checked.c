#include "main.h"

/**
 * malloc_checked - function to allocate memory
 * @b: unsigned int
 *
 * Return: pointer to the memory or 98 if failed
 */

void *malloc_checked(unsigned int b)
{
	void *newMemory;

	newMemory = malloc(b);
	if (newMemory == NULL)
	{
		exit(98);
	}
	return (newMemory);
}
