#include <stdio.h>

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (i % 3 == 0)
			{
				printf ("Fizz ");
			}
			else
			{
				printf("%d ", i);
			}
		++i;
	}
	printf ("\n");
	return (0);
}
