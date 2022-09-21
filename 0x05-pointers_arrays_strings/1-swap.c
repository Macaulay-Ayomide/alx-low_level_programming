#include "main.h"

/**
 *swap_int - Derefrencing of two pointers to a new int value
 * @a: takes a pointer as an argument
 * @b: takes a pointer as an argument
 *
 * Description: Takes a pointer and assign it to 98
 * Return: The value returned is 0
 */

void swap_int(int *a, int *b)
{
	int temp, tempone;

	temp = *a;
	tempone = *b;
	*a = tempone;
	*b = temp;
}
