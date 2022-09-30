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
