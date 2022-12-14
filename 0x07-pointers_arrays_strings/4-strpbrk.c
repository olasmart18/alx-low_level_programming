#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to loop through
 * @accept: the string character to target
 * Return:  a pointer to the byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
