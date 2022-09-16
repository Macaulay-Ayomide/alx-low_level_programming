#include "main.h"

/**
 * main - Entry point
 * Description: 'this is a file comtaining a function called _isupper()'
 * @c >>> a inputed parameter caontaing a character
 * Return: Always 0 (Success)
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
