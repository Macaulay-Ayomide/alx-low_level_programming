#include "main.h"

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar (95);
		n--;
	}
	_putchar (10);
}
