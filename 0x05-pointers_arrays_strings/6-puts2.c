#include "main.h"

/**
 * puts2 - funtion print to stdout the number
 * @str: string input
 * Return: nubers
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
