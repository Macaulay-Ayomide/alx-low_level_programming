#include "main.h"

/**
 * _isdigit - Check if a char is digit
 * @c: int input less than 128
 * Description: Takes an int and checks if its within the range of
 * of digit in ascii code from 48 to 58
 * Return: The value returned is 0
 */

int _isdigit(int c)
{
	if (c >=  48 && c < 58)
	{
		return (1);
	}
		else
		{
			return (0);
		}
}
