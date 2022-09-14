#include "main.h"
/**
* print_to_98 - the function prints natural numbers to 98
* even when n > 98 and n < 98
* @n: input starting integer number
* Return: Always 0 (success)
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
