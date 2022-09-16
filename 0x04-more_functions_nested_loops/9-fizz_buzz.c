#include <stdio.h>
/**
 * main - entry point to solve the fizz buzz
 * Desciption: multiples of three print Fizz  multiples of five print Buzz.
 * Multiples of both 3 and 5 should print fizzbuzz
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
