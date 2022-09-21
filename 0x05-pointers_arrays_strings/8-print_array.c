#include "main.h"
#include <stdio.h>

/**
 *print_array - Print the total length of a string in reverse
 * @a: takes a pointer as an argument
 * @n: takes int as an arguments
 *
 * Description: Takes a string pointer and try to print the
 * the total length of the string in reverse
 * Return: The value returned is none
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; ++j)
	{
		if (j > 0)
		{
			printf(", %d", a[j]);
		}
			else
			{
				printf("%d", a[j]);
			}
	}
	printf("\n");
}
