#include "main.h"

/**
 * main - entry point to the program
 * @argc: counter of argv passed in
 * @argv: argument passed in
 * Return: num of argv passed in
 */

int main(int argc, char *argv[])
{
	int i;
	(void) i;
	(void) argv;

	/*for (i = 0; argc <= i; i++)*/
		if (argc >= 0)
		{
		printf("%i\n", argc - 1);
		}
	return (0);
}
