#include "main.h"

/**
 *_puts_recurssion - fills memory with a constant byte.
 * @s: takes a pointer as an argument
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
	return (n);
}  

void _print_rev_recursion(char *s)
{
	int n;
	char *h;
	
	h = s;
	n = 0;
	helper(s, h, n);
	_putchar(10);
}
