#include "main.h"
/**
 * source - function to find the square root
 * @x: number
 * @y: number to check for the square root in X
 * Return: quare root
 */

int source(int x, int y)
{

	if (y * y > x)
		return (-1);
	
	else if (y * y == x)

		return (y);

	else
		return (source(x, y + 1));

	return (1);
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
