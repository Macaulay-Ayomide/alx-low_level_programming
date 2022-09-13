#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i,k;
	for (k = 0; k < 10; k++)
	{
		for (i = 97;i < 123; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
