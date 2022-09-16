#include "main.h"

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j, k, l;

	i = 49;
	j = 48;
	k = 0;
	l = 0;
	while (k < 10)
	{
		l = 0;
		j = 48;
		while (l < 14)
		{
			if (l >= 10)
			{
				_putchar (i);
			}
			++l;
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
		++k;
	}
}
