#include "main.h"

/**
 * cap_string - capitalized every first letter in a string
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @s: pointer to string
 *
 * Return: pointer to s.
 */

char *cap_string(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
	|| s[count] == ',' || s[count] == ';' || s[count] == '.'
	|| s[count] == '!' || s[count] == '"' || s[count] == '('
	|| s[count] == ')' || s[count] == '{' || s[count] == '}')
	{
		if (s[count + 1] >= 97 && s[count + 1] <= 122)
	{
		s[count + 1] = s[count + 1] - 32
	}
	}
	count++;
	}
	return (s);
}
