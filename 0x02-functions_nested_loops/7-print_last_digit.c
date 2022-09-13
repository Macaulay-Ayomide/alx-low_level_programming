#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int print_last_digit(int a)
{
	int n;
	if (a < 0)
	{
		a = a * (-1);
	}
	n = a % 10;
	_putchar(n + '0');
	return (n);
}
