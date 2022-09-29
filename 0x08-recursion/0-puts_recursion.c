#include "main.h"

/**
 *_puts_recurssion - fills memory with a constant byte.
 * @s: takes a pointer as an argument
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */
void _puts_recursion(char *s)
{
	if ( *s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	s = (s + 1);
	_puts_recursion(s);

}
