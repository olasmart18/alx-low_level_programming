#include "main.h"

/**
 * main - entry point of program
 * @argc: count of argv passed in
 * @argv: argument passed in
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argc > 0)

		printf("%s\n", argv[i]);
	}
	return (0);
}
