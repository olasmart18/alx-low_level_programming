#include "main.h"

/**
 * _isdigit - function for digit
 * @s: string to check
 * Return: 0 or 1
 */

int _isdigit(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
	}
	return (0);
}

/**
 * main - entry point of program
 * @argc: counter of argv
 * @argv: argument
 * Return: 0 on successful
 */

int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (_isdigit(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		/*atoi convert char passed in to int*/
		sum = sum + atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
