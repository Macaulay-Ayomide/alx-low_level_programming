#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,i;
	char text [25];
	char c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(text, "%d", n);
	i = 0;
	while (text[i] != '\0')
	{
		i++;
	}
	c = atoi(text[i]);
	if (c > 5 && n > 0)
	{
		printf("Last digit of %d is %c and is greater than 5 \n", text[i]);
	} else if (c == 0 && n >= 0)
	{
		printf("Last digit of %d is %c and is 0\n", n, text[i]);
	}
	else if(c < 6 && c != 0)
	{
		if (n > 0)
		{
			printf("Last digit of %d is %c and is less than 6 and not 0\n", n, text[i]);
		} else 
		{
			printf("Last digit of %d is -%c and is less than 6 and not 0\n", n, text[i]);
	}
	return (0);
}
