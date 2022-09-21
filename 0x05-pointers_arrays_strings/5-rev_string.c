#include "main.h"
#include <stdio.h>

/**
 *rev_string - Return the total length of a string in reverse
 * @s: takes a pointer as an argument
 * Description: Takes a string pointer and try to print the
 * the total length of the string in reverse
 * Return: The value returned is string
 */

void rev_string(char *s)
{
	int i, j, k, flag;

	i = 0;
	flag = 1;
	k = 0;
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
		printf("%d, %d \n", j,k);
		printf("%c\n", s[j]);
		*(s + k) = s[j];
		++k;
	}
}
