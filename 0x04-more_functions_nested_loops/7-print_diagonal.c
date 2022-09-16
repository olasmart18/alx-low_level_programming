#include "main.h"
/**
 * print_diagonal - the functon draws a diagonal line
 * @n: number of times '\' 2ill be printed
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int j, k;

	j = 0;
	while (n > 0)
	{
		k = j;
		while (k > 0)
		{
			_putchar(' ');
			k--;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
		n--;
	}
	if (j < 1)
		_putchar('\n');
}
