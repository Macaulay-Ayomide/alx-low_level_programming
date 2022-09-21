#include "main.h"

/**
 *puts2 - Print the total length of a string after skipping a letter between
 * @str: takes a pointer as an argument
 * Description: Takes a string pointer and try to print the
 * the total length of the string after skippping a letter inbetween
 * Return: The value returned is none
 */

void puts2(char *str)
{
	int i, flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
			i = i + 2;
		}
			else
			{
				flag = 0;
			}
	}
	_putchar(10);
}
