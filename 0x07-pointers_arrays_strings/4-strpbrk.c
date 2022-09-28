#include "main.h"

/**
 *_strpbrk - the number of bytes in the initial segment of s from accept
 * @s: takes a pointer as an argument
 * @accept: takes a datatype of char as an argument
 *
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, nc;

	i = 0;
	j = 0;
	nc = 50;
	while (*(accept + i) != '\0')
	{
		while (*(s + j) != '\0')
		{
			if (*(s + j) == *(accept + i))
			{
				if (nc > j)
				{
					nc = j;
				}
			}
			j++;
		}
		i++;
		j = 0;
	}
	if (nc != 50)
	{
		return (s + nc);
	}
	else
	{
		return (NULL);
	}
}
