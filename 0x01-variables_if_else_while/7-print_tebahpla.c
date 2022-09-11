#include<stdio.h>
/**
* main - Entry point
* print to sdtout a-z in reverse format
* Return: Always 0 (Success)
*/
int main(void)

{
int ch;

for (ch = 'z' ; ch >= 'a' ; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
