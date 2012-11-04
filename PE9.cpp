#include <stdio.h>

int main()
{
	int a, b, c;
	for(a=1; a<=1000; a++)
	{
		for(b=a; b<=1000; b++)
		{
			if(a + b < 1000)
			{
				c = 1000 - a - b;
				if(a*a + b*b == c*c)
				{
					printf("%d\n", a * b * c);
					return 0;
				}
			}
			else break;
		}
	}
	return 0;
}
