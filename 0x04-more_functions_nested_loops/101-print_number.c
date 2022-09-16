#include "main.h"

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	int n;

	if (n < 10)
	{
		_putchar (n + '0');
	}
		else if (n < 100)
		{
			n0 = n / 10;
			n1 = n % 10;
			_putchar (n0 + '0');
			_putchar (n1 + '0');
		}
		else if (n < 1000)
		{	
			n0 = n / 100;
			n1 = (n % 100) / 10;
			n2 = (n % 100) % 10;
			_putchar (n0 + '0');
			_putchar (n1 + '0');
			_putchar (n2 + '0');
		}
		else if (n < 10000)
		{	
			n0 = n / 1000;
			n1 = (n % 1000) / 100;
			n2 = (n % 1000) % 100;
			n3 = (n % 1000 ) % 100 % 10;
			_putchar (n0 + '0');
			_putchar (n1 + '0');
			_putchar (n2 + '0');
			_putchar (n3 + '0');
		}
		else 
		{
			n0 = n / 10;
			n1 = n % 10;
			_putchar(196)
			_putchar (n0 + '0');
			_putchar (n1 + '0');
		}
	_putchar (10);
}
