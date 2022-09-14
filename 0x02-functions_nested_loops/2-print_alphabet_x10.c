#include "main.h"

/**
* print_alphabet_x10 - this is a function that print alphabet a to z 10times
*
* Return a - z 10x
*/
void print_alphabet_x10(void)
{
	int x = 48, y;

	while (x <= 57)
	{
		for (y = 97; y < 123; y++)
		{
			_putchar(y);
		}
		x++;
		_putchar('\n');
	}
}
