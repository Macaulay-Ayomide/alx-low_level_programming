#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: integer 0 an above
 * argv: String Array
 *
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */ 

int main(int argc, char *argv[])
{
	int count, num;

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("%d", 0);
		return (0);
	}
	while (num > 0)
	{
		if (num >= 25)
		{
			num -= 25;
		}
		else if (num >= 10)
		{
			num -= 10;
		}
		else if (num >= 5)
		{
			num -= 5;
		}
		else if (num >= 2)
		{
			num -= 2;
		}
		else
		{
			num -= 1;
		}
		++count;
	}
	printf("%d\n", count);
    	return (0);
}
