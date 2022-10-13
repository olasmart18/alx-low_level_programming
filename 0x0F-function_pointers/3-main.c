#include "3-calc"

/**
 * main - entry for program
 * @argc: argumenent count
 * argv: array of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(89);
	}
	arg1 = atoi(arv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n);
		exit(99);
	}
	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

		return (0);
}
