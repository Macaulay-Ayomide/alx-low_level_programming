/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

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
