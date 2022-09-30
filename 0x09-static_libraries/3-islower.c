#include "main.h"
/**
* _islower - the function will check for lower case character
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
