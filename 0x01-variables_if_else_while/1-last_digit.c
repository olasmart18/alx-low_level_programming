#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* the code print to stdoutput last digit of  the random number
* Return: Always 0 (Success)
*/
int main(void)
{
int n, lDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lDigit = n % 10;
if (lDigit > 5)
{
printf("Last digit of %d is %d and greater than 5\n", n, lDigit);
}
if (lDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lDigit);
}
if (lDigit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDigit);
}

return (0);
}

