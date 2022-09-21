#include "main.h"

/**
 *print_rev - Print the total length of a string in reverse
 * @s: takes a pointer as an argument
 * Description: Takes a string pointer and try to print the
 * the total length of the string in reverse
 * Return: The value returned is none
 */

void print_rev(char *s)
{
	int i, j, flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		if (s[i] != '\0')
		{
			++i;
		}
			else
			{
				flag = 0;
			}
	}
	--i;
	for (j = i; j >= 0; --j)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}
