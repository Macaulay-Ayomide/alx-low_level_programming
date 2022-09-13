#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int _isalpha(int c);

int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

int _isalpha(int c)
{
	if (((c >= 97) && (c < 123)) || ((c >= 65) && (c < 91)))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
