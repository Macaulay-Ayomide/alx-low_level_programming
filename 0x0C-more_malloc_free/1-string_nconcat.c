#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - Derefrencing of a function to a new int value
 * @s1: takes a pointer as an argument
 * @s2: .......
 * @n: .........
 *
 * Description: Takes a pointer and assign it to 98
 * Return: The value returned is 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j, k;

	i = 0;
	j = 0;
	k = sizeof(s1) + n;
	p = malloc(k);
	if (p == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (j < (int) n)
	{
		p[i] = s2[j];
		++i;
		++j;
	}
	i++;
	p[i] = '\0';
	return (p);
}
