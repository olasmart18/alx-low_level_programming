#include "main.h"
/**
* _abs - the function computes absolute value of an integer
* @ab: input integer number
* Return: absolute value of ab
*/

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
