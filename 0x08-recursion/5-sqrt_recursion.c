#include "main.h"
/**
 * source - function to find the square root
 * @x: number
 * @y: number to check for the square root in X
 * Return: quare root
 */

int source(int x, int y)
{
	if (x * x > y)
	{
		return (-1);
	}
	else if (x * x == y)
	{
		return (y);
	}
	else
	{
		i = source(x, y + 1);
	return (i);
	}
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input integer number
 * Return: natural integer square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (source(n, 1));
}
