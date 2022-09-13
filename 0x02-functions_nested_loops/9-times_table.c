#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int j,i,k,l,m,n,x;
	int arr[110];
	
	k = 0;
	l = 0;
	for(i = 0; i <= 9; i++)
	{
		for (j =0; j <= 9;j++)
		{
			arr[k] = i * j;
			k++;
		}
		j = 0;
	}
	while(l < 100)
	{
		m = arr[l];
		if( m < 10)
		{
			_putchar(m + '0');
			if(!((l+1) % 10))
			{
				_putchar(36);
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
		}
		else
		{
			n = m / 10;
			x = m % 10;
			_putchar(n + '0');
			_putchar(x + '0');
			if(!((l+1) % 10))
			{
				_putchar(36);
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
		}

		if(!((l+1) % 10))
		{
			_putchar(10);
		}
		++l;
	}
}
