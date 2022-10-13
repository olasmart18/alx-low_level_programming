#include "function_pointers.h"

/**
 * int_index - function to search for an interger
 * @array: place to search
 * @size: number of element in the array
 * @cmp: pointer to the function
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (array && cmp)
	{
		while (count < size)
		{
			if (cmp(array[count] != 0);
					return (count);
					count++;
		}
	}
	return (-1);
}
