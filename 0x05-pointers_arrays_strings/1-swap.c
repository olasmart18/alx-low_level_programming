#include "main.h"
/**
 * swap_int - function swapped teo numbers
 * @a: input num 1
 * @b: input num 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
