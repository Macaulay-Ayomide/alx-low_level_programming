#include "main.h"

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar (c);
	}
	_putchar (10);
}
