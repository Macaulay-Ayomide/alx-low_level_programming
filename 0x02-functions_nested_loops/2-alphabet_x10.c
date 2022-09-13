#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int i,k;
	for (k = 0; k < 10; k++)
	{
		for (i = 97;i < 123; i++)
		{
			putchar(i);
		}
		putchar(10);
	}
}
