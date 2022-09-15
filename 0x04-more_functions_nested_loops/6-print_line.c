#include "main.h"
/**
 * print_line - function prints vertical lines
 * @n: input number
 * Return: vertical line regarding number of input
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
	if (n < 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		_putchar('_');
	}
		i++;
	}
	_putchar('\n');
}
