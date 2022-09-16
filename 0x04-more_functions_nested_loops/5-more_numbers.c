#include "main.h"

/**
 * more_numbers - Prints out 0 to 14, ten times
 * Description: 'this prints out number from 0 to 14 repeatedly
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j, k, l;

	i = 49;
	for (k = 0; k < 10; ++k)
	{
		l = 0;
		j = 48;
		for (l = 0; l < 15; ++l)
		{
			if (l >= 10)
			{
				_putchar (i);
			}
			_putchar (j);
			if ( l == 9)
			{
				j = 48;
			}
				else
				{
					++j;
				}
		}
		_putchar (10);
	}
}
