#include "main.h"

/**
 * helper - fills memory with a constant byte.
 * @s: takes a pointer as an argument
 * @h: pointer as arguments
 * n: int as arguments
 *
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */

int helper(char *s,char *h, int n)
{
	if ( *h == '\0')
	{
		return (n);
	}
	++n;
	helper(s, h + 1, n);
	_putchar(*(s + n));
	--n;
	helper(s);
	return (n);
}
