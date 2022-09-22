#include "main.h"

/**
 * _strcmp - a function to cmpare 2 strings
 * @s1: first string input
 * @s2: second string input
 *
 * Return: 0 if same, 15 if s1 is greater than s2, -15 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	/*strcmp (s1, s2);*/
	int i;
	int cmp = 0;

	for (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
		cmp = s1[i] - s2[i];
	return (cmp);
}
