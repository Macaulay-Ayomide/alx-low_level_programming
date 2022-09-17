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
	int ngv;

	if (n < 0)
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
	}
		else if (n >= 0)
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
		}
}
