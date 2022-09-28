#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to print to stdout
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	else
	{
		_putchar(*s);
	_put_recursion(s + 1);
	}
}
