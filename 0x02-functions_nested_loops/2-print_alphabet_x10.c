#include "main.h"

/**
* main - check the code.
* @print_alphabet_x10 - this is a function that print alphabet a to z 10times
*
* Description : print alphabet 10x
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar(x);
	}
	_putchar('\n');
}
