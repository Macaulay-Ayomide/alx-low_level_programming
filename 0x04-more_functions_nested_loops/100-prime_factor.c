#include <stdio.h>

/**
 * main - Entry point
 * Description: Print th highest common factor of var n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, lp, i;
	long n;

	n = 612852475143;
	c = n / 2;
	lp = 2;
	i = 5;
	while (i < c)
	{
		if (!(i % 2 == 0 || i % 5 == 0 || i % 3 == 0))
		{
			if (n % i == 0 && i > lp)
			{
				lp = i;
			}
		}
		++i;
	}
	printf("%d \n", lp);
	return (0);
}
