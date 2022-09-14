#include "main.h"
/**
* print_alphabet - the funtion prints a to z in lower case
*
* Return: Always 0 (success)
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}
