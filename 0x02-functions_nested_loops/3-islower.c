#include "main.h"
/**
* main - check the code.
*
* @c: single char type input
* Return: 1 if c is lowercase, Returns 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

	_putchar('\n');
}
