#include "main.h"

/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 * @src: takes a char pointer as an argument
 * @dest: takes a datatype of char as an argument
 * @n: takes  a datarype of int as an argument
 *
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)	
	{
		(dest + i) = &(*(src + 1));
	}
	return src;
}
