#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: number of string passed
 * Return: point to function ptr
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;
	char *s;

	va_start(ptr, n);

	while (i < n)
	{
		s = va_arg(ptr, char *);

			if (!(s))
				{
				printf("(nil)");
				}
				else
				printf("%s", s);

				if (i < n - 1)
				if (separator)
				printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ptr);
}
