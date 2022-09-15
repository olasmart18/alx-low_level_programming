#include "main.h"

/**
* _isdigit - the function check for a digit number
* @c: the digit input
* Return: 1 if its digit, 0 if its not digit
*/

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
