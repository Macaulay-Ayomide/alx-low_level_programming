#include "main.h"

/**
 * print_triangle - prints a triangle with ' ' and #
 * @size: used to determine the lenghth given in int
 * Description: similar to print_square but employ use of ' '
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
