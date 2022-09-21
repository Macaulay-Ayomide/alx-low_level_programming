#include "main.h"

/**
 *puts_half - Print the half length of a string
 * @str: takes a pointer as an argument
 * Description: Takes a string pointer and try to print the
 * half of the total length of the string in reverse
 * Return: The value returned is none
 */

void puts_half(char *str)
{
	int i, j, flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		if (str[i] != '\0')
		{
			++i;
		}
			else
			{
				flag = 0;
			}
	}
	--i;
	for (j = i / 2 + 1; j <= i; ++j)
	{
		_putchar(str[j]);
	}
	_putchar(10);
}
