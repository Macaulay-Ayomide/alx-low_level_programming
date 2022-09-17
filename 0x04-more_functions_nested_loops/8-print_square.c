#include "main.h"

/**
 * print_square - this prints squares n times in form of #
 * @n: inpu in lenght of the square
 * Description: this repeats # n times
 * Return: Always 0 (Success)
 */

void print_square(int n)
{
	int i, tmp;

	i = n;
	tmp = n;
	while (n > 0)
	{
		while (i > 0)
		{
			_putchar(35);
			--i;
		}
		_putchar (10);
		n--;
		i = tmp;
	}
	if (tmp <= 0)
	{
		_putchar (10);
	}
}
