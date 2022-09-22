#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function convert string to uppercase
 * @str: string input
 *
 * Return: string to uppercase
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
	}
	return (str);
}
