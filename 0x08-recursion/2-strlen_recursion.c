#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to count
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = (1 + _strlen_recursion(s + 1));
		return (i);
	}
	return (0);
}
