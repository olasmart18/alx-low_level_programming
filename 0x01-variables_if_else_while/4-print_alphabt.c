#include <stdio.h>
/**
* main - entry point
* print to stdout alphabet a - z excluding e & q
* Return: always 0 (success)
*/

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	if (x != 'e' && x != 'q')
	{
	putchar(x);
	}
	}
	putchar('\n');
return (0);
}
