#include "main.h"

/**
 * _strchr - the function locates a character in a string
 * @s: string character
 * @c: character to locate
 * Return: a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);

	else

		return (NULL);
}
