#include "main.h"
/**
 * _strlen - funcheck to check string lenght
 * @s: string to check for lenght
 * Return: nothing
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - function to concatenate 2 string
 * @s1: destistination string
 * @s2: source string
 * Return: dest
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int n;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	n = ((_strlen(s1)) + (_strlen(s2) + 1));

	ptr = (char *)malloc(n * sizeof(char));

	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
		while (s2[j] != '\0')
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}

	return (ptr);
}
