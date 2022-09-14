#include "main.h"
/**
* print_sign - the function prints a sign of number
* @n: input number or int
*Returns: 0 if n is zero and returns -1 n is - and + if greater than 0
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
	else ( n < 0)
	{
		_putchar('-');
		return (-1);
	}

}
