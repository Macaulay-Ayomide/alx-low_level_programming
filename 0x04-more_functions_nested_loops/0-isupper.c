#include "main.h"

/**
 *_isupper- Check if a letter is an uppercase
 * @c: int input less than 128
 * Description: Takes an int and checks if its within the range of uppercase
 * letters from 65 to  91
 * Return: The value returned is 0
 */

int _isupper(int c)
{
	if (c >=  65 && c < 91)
	{
		return (1);
	}
		else
		{
			return (0);
		}
}
