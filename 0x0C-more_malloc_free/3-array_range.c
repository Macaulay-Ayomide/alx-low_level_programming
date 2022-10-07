#include "main.h"
#include <stdlib.h>
/**
 *array_range - Derefrencing of a function to a new int value
 *@min : takes a pointer as an argument
 *@max: .......
 *
 * Description: Takes a pointer and assign it to 98
 * Return: The value returned is 0
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	i = 0;
	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(((max - min) + 1) * 4);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < max)
	{
		*(ptr + i) = min;
		min++;
		i++;
	}
	return (ptr);
}
