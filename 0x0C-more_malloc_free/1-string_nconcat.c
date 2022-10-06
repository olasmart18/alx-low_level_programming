#include "main.h"

/**
 * string_nconcat - functo concatenate to string on coditions
 * @s1: string
 * @s2: string
 * @n: number of string
 *
 * Return: pointer to new memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index = 0, len1 = 0, len2 = 0;
	char *newMem;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
		n = len2;

	newMem = malloc((len1 + n + 1) * sizeof(char));

	if (newMem == NULL)
		return (NULL);

	while (index < len1)
	{
		newMem[index] = s1[index];
		index++;
	}
	for (; index < (len1 + n); index++)
	{
		newMem[index] = s2[index - len1];
	}
	newMem[index] = '\0';
	return (newMem);
}
