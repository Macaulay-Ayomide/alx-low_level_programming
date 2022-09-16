#include <stdio.h>

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

int main (void)
{
	int c, lp, i;
	long n;

	n = 612;
	c = n / 2;
	lp = 3;
	i = 5;
	while (i < c)
	{ 
		if (i % 2 == 0)
		{
			printf("Is even %d",i);
			i++;
		}
	}
	n = i + n;
	printf("%d", c);	
	printf("%d", lp);
	return (0);
}
