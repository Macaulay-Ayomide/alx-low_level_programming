#include <stdio.h>

void main(void)
{
int a,b,c,d,i,j;
int str [20];
a = 7;
b = 8;
c = 9;
d = 10;
i = 0;
str[i] = a * b;
i++;
str[i] = b * c;
i++;
str[i] = c * d;
++i;
str[i] = d * b;
for (j = 0; j < 7; ++j)
{
	putchar(str[j]);
}

}
