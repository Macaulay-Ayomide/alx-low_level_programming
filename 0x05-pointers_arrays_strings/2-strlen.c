#include "main.h"

/**
 *_strlen - Getting the lenght of a string
 * @s: takes a pointer as an argument
 * Description: Takes a string pointer and try to calculate
 * the total length of a string
 * Return: The value returned is an int
 */

int _strlen(char *s)
{
	int i, flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		if (s[i] != '\0')
		{
			i++;
		}
			else
			{
				flag = 0;
			}
	}
	return (i);
}
