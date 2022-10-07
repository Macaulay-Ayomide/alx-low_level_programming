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
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	int *p;

	i = 0;
	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptr = malloc(new_size);
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
