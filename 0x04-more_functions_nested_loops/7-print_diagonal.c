#include "main.h"

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i, j, tmp;

	i = 0;
	j = 0;
	tmp = n;
	while (n > 0)
	{
		while (i > 0)
		{
			_putchar(32);
			--i;
		}
		_putchar (92);
		_putchar (10);
		n--;
		++j;
		i = j;
	}
	if (tmp <= 0)
	{
		_putchar (10);
	}
}
