#include "main.h"

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int c, i, j, k;

	i = 49;
	k = 0;
	while (k < 10)
	{
		for (c = 48; c < 58; c++)
		{
			_putchar (c);
		}
		for (j = 48; j < 53; j++)
		{
			_putchar (i);
			_putchar (j);
		}
		_putchar (10);
		++k;
	}
}
