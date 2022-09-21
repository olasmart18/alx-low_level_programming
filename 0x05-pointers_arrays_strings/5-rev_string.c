#include "main.h"

/**
 * rev_string - function prints string in reverse order
 * @s: string to be reversed
 * Return 0
 */

void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
	
}