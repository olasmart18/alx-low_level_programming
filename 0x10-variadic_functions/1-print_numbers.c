#include "variadic_functions.h"

/**
 * prints_numbers - function that prints numbers, followed by a new line
 * @seperator: char to seprate string
 * @n: number of string passed in
 * Return: pointer to string
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);

	while (i < n)
	{
		printf("%d", va_arg(ptr, int));
		if (seperator && i < n - 1)
		{
			ptintf("%s", seperator);
		}
		i++;
	}

	printf("\n");
	va_end(ptr);
}
