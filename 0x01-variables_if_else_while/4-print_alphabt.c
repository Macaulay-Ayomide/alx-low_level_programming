#include <stdio.h>

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 112 || n != 102)
		{
			putchar(n);
	        }
	}
	putchar('\n');
	return (0);
}
