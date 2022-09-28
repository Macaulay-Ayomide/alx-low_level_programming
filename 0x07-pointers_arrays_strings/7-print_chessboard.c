#include "main.h"

/**
 *print_chessboard - fills memory with a constant byte.
 * @a: takes a pointer as an argument
 *
 * Description: assign each char in s to b.
 * Return: The value returned is 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
		j = 0;
	}
}
