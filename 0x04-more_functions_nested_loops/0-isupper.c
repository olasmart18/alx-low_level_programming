#include "main.h"
/**
* _isupper - the function check if the alphabet is uppercase
* @c: the alphabet character enter
* Return: 1 if its upper, 0 if its lowwer
*/

int _isupper(int c)

{

	if (c != 'a' && c != 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
