#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int flag,hr_one,hr_two,mn_one,mn_two;

	hr_one = 48;
	hr_two = 48;
	mn_one = 48;
	mn_two = 48;
	flag = 1;
	while(flag)
	{
		for(hr_one = 48; hr_one <= 57; ++hr_one)
		{
			for(mn_two = 48; mn_two <= 53; ++mn_two)
			{
				for(mn_one = 48; mn_one <= 57; ++mn_one)
				{
					_putchar(hr_two);
					_putchar(hr_one);
					_putchar(58);
					_putchar(mn_two);
					_putchar(mn_one);
					_putchar(10);
				
				}
				if((hr_two == 50) &&  (hr_one == 51) && (mn_two == 53) && (mn_one == 59))
				{
					mn_two = 60;
					flag = 0;
				}	
				else
				{
					mn_one = 48;
				}
			}
			if((hr_two == 50) &&  (hr_one == 51))
			{
				hr_one = 60;
				flag = 0;
			}	
			else
			{
				mn_two =48;
			}
		
		}
		++hr_two;

	}
}
