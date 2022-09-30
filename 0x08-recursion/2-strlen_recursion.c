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
	return(helper(s + 1, n));
}  

int _strlen_recursion(char *s)
{
	int n;
	
	n = 0;
	return(helper(s, n));
	_putchar(10);
}
