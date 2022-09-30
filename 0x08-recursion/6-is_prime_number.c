#include "main.h"

/**
 *_puts_recurssion - fills memory with a constant byte.
 * @s: takes a pointer as an argument
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */

int helper(int a, int n)
{
	if ( (n % a) == 0)
	{
		return (1);
	}
	else if ((n % a == 0) && (n != a) || n <= 1)
	{
		return (0);
	}
	++a;
	return (helper(a, n));
	}
}

int is_prime_number(int n)
{
	int a;
	
	a = 2;
	return(helper(a, n));
}
