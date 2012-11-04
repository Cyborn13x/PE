#include <stdio.h>

int ispalin(int n)
{
	int t = n, r = 0;
	while(t)
	{
		r = r*10 + t%10;
		t /= 10;
	}
	return (n==r);
}

int main()
{
	int i, j, t, n = 0;
	for(i=100; i<=999; i++)
	{
		for(j=100; j<=999; j++)
		{
			t = i*j;
			if(ispalin(t) && t>n) n = t;
		}
	}
	printf("%d\n", n);
	return 0;
}

