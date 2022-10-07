#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Derefrencing of a function to a new int value
 * @b: takes a pointer as an argument
 * Description: Takes a pointer and assign it to 98
 * Return: The value returned is 0
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
