#include "main.h"
/**
* main - check the code
*
*  write a funtion that prints a to z in lower case
* Return: Always 0.
*/

void print_alphabet(void)
{
	int x;

	for(x= 'a'; x <= 'z'; x++)
	{
        _putchar(x);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
