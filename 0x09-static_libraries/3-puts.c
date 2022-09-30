#include "main.h"
/**
 * _puts - function prints to stdout
 * @str: input strings
 *
 * Deacription: prints a string
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
