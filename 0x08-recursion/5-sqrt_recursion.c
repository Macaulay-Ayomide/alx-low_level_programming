#include "main.h"

/**
 *_puts_recurssion - fills memory with a constant byte.
 * @s: takes a pointer as an argument
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */
int helper(int a, int n)
{
	if ( (a * a) == n)
	{
		return (a);
	}
	else if ((a * a) > n)
	{
		return (-1);
	}
	++a;
	return (helper(a, n));
	}
}

int _sqrt_recursion(int n)
{
	int a;
	
	a = 0;
	return(helper(a, n));
}
