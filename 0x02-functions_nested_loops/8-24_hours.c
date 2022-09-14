#include "main.h"
/**
* jack_bauer - the function prints every minute of the day
* hrs = hours, mnt = minutes
* / 10 aloows seconds to rotate
* for loops terminate before passing 24:00
* Return: 24hours clock line after line
*/

void jack_bauer(void)
{
	int hrs, mnt = 0;

	for (hrs = 0; hrs < 25; hrs++)
	{
		for (mnt = 0; mnt <= 60; mnt++)
		{
				_putchar((hrs / 10) + '0');
				_putchar((hrs % 10) + '0');
				_putchar(':');
				_putchar((mnt / 10) + '0');
				_putchar((mnt % 10) + '0');
				_putchar('\n');

		}
	}
}
