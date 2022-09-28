#include "main.h"

/**
 * factorial -  function that prints the factorial of a given number
 * @n: input number
 * Return: the factorial of a number
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		i = n * factorial(n - 1);
	return (i);
}
