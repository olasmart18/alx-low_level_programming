#include "main.h"
/**
* print_sign - the function prints a sign of number
* @n: input number or int
*Return: 0 prints '0' if n = 0, -1 prints '-' if n < 0, 1 prints '+' if n > 1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
