#include "main.h"
/**
 * print_line - function prints vertical lines
 * @n: input number
 * Return: vertical line regarding number of input
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; ++i)
			_putchar('_');
		_putchar('\n');
	}
}
