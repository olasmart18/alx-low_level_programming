#include <stdio.h>
/**
* main - entry point
* print alphatet in lower and upper case to std output
* Return: Alwaya 0 (Success)
*/

int main(void)
{
	int y;

	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
return (0);
}
