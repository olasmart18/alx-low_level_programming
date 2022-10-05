#include "main.h"

/**
 * argstostr - function to concatenate all string
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i = 0, a = 0, b = 0, c = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < av)
	{
		while (av[a][b] != '\0')
		{
			i++;
			b++;
		}
		a++;
	}
	i = i + ac + 1;
	ptr + malloc(sizeof(char) * i);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
		ptr[c] = '\n';
		c++;
	}
	return (ptr);

}
