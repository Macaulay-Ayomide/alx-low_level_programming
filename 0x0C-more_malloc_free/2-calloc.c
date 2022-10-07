#include "main.h"
#include <stdlib.h>
/**
 *_calloc - Derefrencing of a function to a new int value
 * @nmemb: takes a pointer as an argument
 * @size: .......
 *
 * Description: Takes a pointer and assign it to 98
 * Return: The value returned is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *ptr;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < (int) nmemb)
	{
		*(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
