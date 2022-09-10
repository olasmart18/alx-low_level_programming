#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
/*print a to z in reverse*/
{
int ch;

for (ch = 'z' ; ch >= 'a' ; ch--);
/*return z to a in lowecase*/
putchar(ch);

printf("\n");
return (0);
}
