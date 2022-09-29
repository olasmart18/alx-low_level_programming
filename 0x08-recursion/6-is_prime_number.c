#include "main.h"

/**
 * evaluate_num - recursion loop
 * @num: num
 * @iterator: number to iterate
 * Return: return 1 or 0
 */
int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}

	else if (num % iterator == 0)
	{
		return (0);
	}

	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterator + 1));
	}

	return (0);
}
/**
 * is_prime_number - function that prints a prime number
 * @n: input integer number
 * Return: 1 if input is a prime number
 */

int is_prime_number(int n)
{
	int iterator;

	iterator = 2;

	/* only greater than 2*/
	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (evaluate_num(n, iterator));
}