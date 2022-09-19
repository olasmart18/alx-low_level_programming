#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: input string
 * Return: 0
 */

void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
