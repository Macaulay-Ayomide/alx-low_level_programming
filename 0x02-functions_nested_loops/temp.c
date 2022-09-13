#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}

int _islower(int c)
{
	if ((c > 97) && (c < 123))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
