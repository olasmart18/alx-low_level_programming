#include "main.h"
/**
* print_last_digit - the function prints the last digit of s number
* @x: input integer number
* @i: last digit numbers
* Return: the value of the last digit
*/

int print_last_digit(int i)
{
	int x;

	x = (i % 10);

	if (x < 0)
	{
		x = (-1 * x);
	}
	_putchar(x + '0');
		return (x);

}
