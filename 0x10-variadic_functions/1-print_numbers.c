#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: char to seprate string
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
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");
	va_end(ptr);
}
