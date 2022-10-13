#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @f: function pointer
 * @name: name to print
 *
 * Return: point to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
