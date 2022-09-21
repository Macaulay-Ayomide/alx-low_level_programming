#include "main.h"

/**
 *_puts - Print the total length of a string
 * @str: takes a pointer as an argument
 * Description: Takes a string pointer and try to print the
 * the total length of the string
 * Return: The value returned is none
 */

void _puts(char *str)
{
	int i, flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
			++i;
		}
			else
			{
				flag = 0;
			}
	}
	_putchar(10);
}
