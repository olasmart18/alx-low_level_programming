#include "main.h"
/**
* _isalpha - function that check for lowercase or uppercase
* @c: single char type input
* Return: 1 if c is lowercase or uppercase, Returns 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 || c <= 65)  && (c <= 122 || c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
