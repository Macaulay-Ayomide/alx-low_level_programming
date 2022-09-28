#include "main.h"

/**
 *_strstr - the number of bytes in the initial segment of s from accept
 * @haystack: takes a pointer as an argument
 * @neddle: takes a datatype of char as an argument
 *
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	i = 0;
	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle))
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
