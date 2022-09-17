#include "main.h"

/**
 * print_line - printa straight line equivalent to input
 * @n: Lenght in int of straight line
 * Description: Use '-' to represent straight line and
 * printit to std output and repeat as many times as int
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar (95);
		n--;
	}
	_putchar (10);
}
