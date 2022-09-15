#include "main.h"

/**
* print_most_numbers - the function prints digit from 0 to 9 except 2 and 4
*
* Return: digit from 0 t0 9 excluding2 and 4
*/

void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
			n++;
	}
	_putchar('\n');
}
