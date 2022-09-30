#include "main.h"

/**
 *_puts_recurssion - fills memory with a constant byte.
 * @s: takes a pointer as an argument
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */

int helper(char *s, int n)
{
	if ( *s == '\0')
	{
		return (n);
	}
	++n;
	return (helper(s+1, n));
}
int helper(char *s, char *h, int max, int min, int mid)
{
	if (*s == '\0')
	{
		return (1);
	}
	else if (*(s + max) == *(h + min))
	{
		if (max == min || max -1 == mid)
		{
			return (1);
		}
		else
		{
			--min;
			--max;
			return(helpertwo(s,h,max,min,mid));
		}
	}
	else
	{
		return (0);
	}
}

int is_palindrome(char *s)
{
	int n, max, min, mid;
	char *p;

	n = 0;
	p = *s;
	max = helper(s, n);
	max = max - 1;
	mid = max /2;
	min = 0;
	return(helpertwo(s, p, max, min, mid));

}
