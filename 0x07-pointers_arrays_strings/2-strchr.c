#include "main.h"

/**
 *_strchr - a pointer to the first occurrence of the character 
 * @s: takes a pointer as an argument
 * @c: takes a datatype of char as an argument
 *
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			s = &c;
			break;
		}
	}
	return s;
}
