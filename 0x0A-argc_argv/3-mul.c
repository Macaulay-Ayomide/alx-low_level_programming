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
	int i, mul;

	mul = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error \n");
	}
    	return (0);
}
