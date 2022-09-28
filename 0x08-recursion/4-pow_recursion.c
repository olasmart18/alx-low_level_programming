#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to power y
 * @x: the main integer
 * @y: the power integer
 * Return: the interger value
 */

int _pow_recursion(int x, int y)
{
	int j;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		j = (x * (_pow_recursion(x, y - 1)));
	return (j);
}
