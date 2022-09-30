#include "main.h"
/**
 * _strlen - function to print the length
 * @s: string character input
 * Return: string lengt
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
return (len);
}
