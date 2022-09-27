#include "main.h"

/**
 *_memset - fills memory with a constant byte.
 * @s: takes a pointer as an argument
 * @b: takes a datatype of char as an argument
 * @n: takes  a datarype of int as an argument
 *
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)	
	{
		*(s + i) = b;
	}
	return s;
}
