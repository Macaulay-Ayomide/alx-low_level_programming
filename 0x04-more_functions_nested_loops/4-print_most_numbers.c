#include "main.h"

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (!(c == 50 || c == 52))
		{
			_putchar (c);
		}
	}
	_putchar (10);
}
