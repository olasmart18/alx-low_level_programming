#include "main.h"

/**
 * print_diagsums - print sum  of diagonal in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int diagonal_sum_1 = 0;
	int diagonal_sum_2 = 0;
	int row;
	int i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_sum_1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal_sum_2 += a[i];
	}
	printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}
