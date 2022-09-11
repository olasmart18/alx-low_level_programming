#include <stdio.h>
/**
* main - entry point
* print to stdout hexadecimal
* Return: always 0 (success)
*/

int main(void)

{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
return (0);
}
