#include "main.h"
/**
* more_numbers - the function prints number 0 to 14 10times
*
* Return: 1 to 14 10times
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		j = 0;
		while (j < 14)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
