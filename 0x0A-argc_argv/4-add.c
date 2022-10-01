#include "main.h"

/**
 * main - entry point of program
 * @argc: counter of argv
 * @argv: argument
 * Return: 0 on successful
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
		}
		/*atoi convert char passed in to int*/
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
