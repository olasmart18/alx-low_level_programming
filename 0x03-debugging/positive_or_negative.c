#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{
srand(time(0));
i = rand() - RAND_MAX / 2;
printf("%d ", i);
if (i > 0)
{
printf("is positive\n");
}
else if (i == 0)
{
printf("is zero\n");
}
else
/*final else return 0*/
{
printf("is negative\n");
}
}
