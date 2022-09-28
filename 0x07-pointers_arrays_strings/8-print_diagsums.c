#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - fills memory with a constant byte.
 * @size: takes a pointer as an argument
 * @a: takes a datatype of char as an argument
 *
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */

void print_diagsums(int *a, int size)
{
	int i, diag;
	for (i = 0; i < size; i++)
	{
		diag += (a[i + size * i]);
	}
	printf("%d\n", diag);
}
