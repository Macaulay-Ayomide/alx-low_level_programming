#include "main.h"
/**
 * print_number - this printt a postive integer of the input
 * @n: Int to be paased into the function
 * Description: takes an in and return its positive form if its
 * already positivr leave it unchanged
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	for (i = 10; i > 0; i--)
	{
		if (n < 10)
		{
			_putchar (n + '0');
			break;
		}
			else if (n < 100)
			{
				_putchar ((n / 10) + '0');
				n = n % 10;
			}
			else if (n < 1000)
			{
				_putchar ((n / 100) + '0');
				n = n % 100;
			}
			else if (n < 10000)
			{
				_putchar ((n / 1000) + '0');
				n = n % 1000;
				if (n < 100)
				{
					_putchar('0');
				}
			}
			else if (n < 100000)
			{
				_putchar((n / 10000) + '0');
				n = n % 10000;
			}
	}
}
