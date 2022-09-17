#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 * Description: Recieves no input and return no outputs
 * prints number from 0 t0 9 to std output
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar (c);
	}
	_putchar (10);
}
