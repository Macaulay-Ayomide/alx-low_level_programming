#include <stdio.h>

/**
 * main - Entry point
 * Description: 'TASK ZERO'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,c,w,nt,i,k,j,ntr;

	c = 44;
	w = 32;
	n = 48;
	nt = 49;
	ntr = 50; 
	for (k = n;  k < 56; k++)
	{
		putchar(n);
		printf("----------");
		i=j= 0;
		printf("%d %3d", i,j);
		for (i = nt; i < 57; i++)
		{
			for (j = ntr; j < 58; j++)
			{
				putchar(n);
				putchar(i);
				putchar(j);
				if (!((n == 55) && (i == 56) && (j == 58)))
				{
					putchar(c);
					putchar(w);
				}
			}
		        ntr++;	
		}
		nt++;
		n++;
	}
	putchar('\n');
	return (0);
}
