#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to check
 * @accept: taget character matches
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int msh = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				msh++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (msh);
		}
		i++;
	}
	return (msh);
}
