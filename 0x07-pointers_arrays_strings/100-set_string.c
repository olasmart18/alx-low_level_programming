#include "main.h"

/**
 * set_string -  function that sets the value of a pointer to a char
 * @s: string pointer
 * @to: the character to set the pointer to
 * Return: string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
