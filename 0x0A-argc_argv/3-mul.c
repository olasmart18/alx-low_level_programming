#include "main.h"

/**
 * main - entry point of program
 * @argc: counter of argv passed in
 * @argv: argument passed in
 * Return: 0 on successful
 */

int main(int argc, char *argv[])
{
	int mul;
	int i;
	(void) i;

	/*for (i = 1; argc > i; i++)*/
		if ((argc - 1) < 2)
			printf("Error\n");
		else
		{	/*atio takes a char array and
			  *convert it to int
			  */
			mul = (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", mul);
	}
	return (0);
}
