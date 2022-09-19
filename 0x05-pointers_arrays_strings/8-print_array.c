#include<stdio.h>

/**
 * print_array - function prints to stdout the array of input
 * @a: araay input
 * @n: number of element
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n -1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
