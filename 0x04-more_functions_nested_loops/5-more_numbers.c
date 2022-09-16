#include "main.h"
/**
* more_numbers - the function prints number 0 to 14 10times
*
* Return: 1 to 14 10times
*/

void more_numbers(void)
{
	int i, j, c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 0; c <= 14; ++c)
		{
		j = c;
			if (j > 14)
		{
			_putchar(1 + 48);
			j = c % 10;
		}
		_putchar(j + 48);
		}
		_putchar('\n');
	}
}
