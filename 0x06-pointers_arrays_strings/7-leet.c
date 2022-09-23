#include "main.h"

/**
 * leet - functuon encode into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: pointer to string
 *
 * Return: pointer to s.
 */

char *leet(char *str)
{
	int stringcount = 0;
	int leetcount = 0;
	char leetAlpha[] = "aAeEoOtTlL";
	char leetNum[] = "4433007711";

	while (str[stringcount] != '\0')
	{
		while (leetcount < 10)
	{
		if (leetAlpha[leetcount] == str[stringcount])
	{
		str[stringcount] = leetNum[leetcount];
	}
	leetcount++;
	}
	stringcount++;
	}
return (str);
}
