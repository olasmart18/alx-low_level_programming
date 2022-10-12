#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @size: is the size of the array
 * @action: a pointer to the function you need to use
 * @array: array to act on
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count = 0;

	if (!array || !action)
		return;

	while (count < size)
	{
		action(array[count];
				count++;
	}
	return;
}
