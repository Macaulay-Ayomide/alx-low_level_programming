#include "main.h"
/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	int ngv;

	if ( n < 0)
	{
		ngv = n * -1;
		if (ngv < 10)
		{
			_putchar (45);
			_putchar (ngv + '0');
		}
			else if (ngv < 100)
			{
				_putchar (45);
				_putchar ((ngv / 10) + '0');
				_putchar ((ngv % 10) + '0');
			}	
			else if (ngv < 1000)
			{
				_putchar (45);
				_putchar ((ngv / 100) + '0');
				_putchar (((ngv % 100) / 10 )+ '0');
				_putchar (((ngv % 100) % 10) + '0');
			}
	}
		else if( n >= 0)
		{
			if  (n < 10)
			{
				_putchar (n + '0');
			}
				else if (n < 100)
				{
					_putchar ((n / 10) + '0');
					_putchar ((n % 10) + '0');
				}	
				else if (n < 1000)
				{
					_putchar ((n / 100) + '0');
					_putchar (((n % 100) / 10) + '0');
					_putchar (((n % 100) % 10) + '0');
				}

				else if (n < 10000)
				{
					_putchar ((n / 1000) + '0');
					_putchar (((n % 1000) / 100) + '0');
					_putchar ((((n % 1000) % 100) / 10)+ '0');
					_putchar ((((n % 1000) % 100) % 10)+ '0');
				}
		}
}
