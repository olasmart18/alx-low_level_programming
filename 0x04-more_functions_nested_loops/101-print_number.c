#include "main.h"

/**
 * print_number - the function prints integers
 * @n: integer to be printed
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num = n;

	/*check for negative num*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	/* print first few digits*/
	if ((num / 10) > 0)
	print_number(num / 10);

	/*print thelast digit*/
	_putchar((num % 10) + 48);
}
