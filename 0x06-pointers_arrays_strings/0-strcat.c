#include "main.h"

/**
 *_strcat - Copying from source to destination
 * @dest: takes a pointer as an argument
 * @src: takes a pointer as an argument
 * Description: ..........................
 * Return: The value returned is 0
 */

char *_strcat(char *dest, char *src)
{
	int i,j;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	dest[i++] = '\0';
	return (dest);
	
}
