#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: memory space to be filled
 * @b: byte to filled
 * @n: number of byte to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
