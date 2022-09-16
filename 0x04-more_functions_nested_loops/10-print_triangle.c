#include "main.h"

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, j, tmp, tmpt;

	i = size;
	tmp = size;
	j = size - 1;
	tmpt = j;
	while (size > 0)
	{
		while (i > 0)
		{
			if  (j > 0)
			{
				_putchar(32);
				--j;
			}
			else
			{
				_putchar(35);
			}
			--i;
		}
		_putchar (10);
		size--;
		i = tmp;
		--tmpt;
		j = tmpt;
	}
	if (tmp <= 0)
	{
		_putchar (10);
	}
}
