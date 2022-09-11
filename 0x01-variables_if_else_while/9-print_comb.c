#include <stdio.h>
/**
* main - entry point
* print to stdout 1-9 seperated with comma ans space
* Return: always 0 (success)
*/
int main(void)

{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
