#include "main.h"

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
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
