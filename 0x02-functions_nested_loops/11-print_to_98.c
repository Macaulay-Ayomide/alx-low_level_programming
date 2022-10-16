#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i,j,k,l,m,o,p;
	
	if (n <= 98)
	{
		for (i = n; n < 99; i++)
		{
			if (i <10)
			{
				_putchar(i + '0');
				_putchar(44);
				_putchar(32);
			}else
			{
				if (i == 98)
				{
					j = i / 10;
					k = i % 10;
					_putchar(j + '0');
					_putchar(k + '0');
				}else
				{
					j = i / 10;
					k = i % 10;
					_putchar(j + '0');
					_putchar(k + '0');
					_putchar(44);
					_putchar(32);
				}
			}
		}
	}
	if (n > 98) 
	{ 
		for (i = n; i > 98; --i)
		{
			if (i < 100)
			{
				if(i == 98)
				{
					j = i / 10;
					k = i % 10;
					_putchar(j + '0');
					_putchar(k + '0');
				}else
				{
					j = i / 10;
					k = i % 10;
					_putchar(j + '0');
					_putchar(k + '0');
					_putchar(44);
					_putchar(32);
				}
			}
			else if(i < 1000)
			{
				l = i/100;
				_putchar(l + '0');
				if (!(i % 100))
				{
					_putchar ('0');
					_putchar ('0');
					_putchar (44);
					_putchar (32);
				}else 
				{
					m = i % 100;
					o = m /10;
					p = m % 10;
					_putchar(o +'0');
					_putchar(p +'0');
					_putchar(44);
					_putchar(32);
				}
			}
		}
	}
						
}
