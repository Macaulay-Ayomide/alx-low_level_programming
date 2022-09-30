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
	int i, mul, j;

	mul = 0;
	for (i = 1; i < argc; ++i)
	{
		j = (int)(*(argv[i]));
		if (atoi(argv[i]) == 0 && (j != 48)) 
		{
			printf("Error\n");
			return (0);
		}
		mul += atoi(argv[i]);
	}
	printf("%d\n", mul);
    	return (0);
}
