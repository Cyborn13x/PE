#include <stdio.h>

long countdiv(long long n)
{
	long count = 0;
	long long d;
	for(d=1; d*d <= n; d++)
	{
		if(n % d == 0)
		{
			if(d*d == n) count++;
			else count += 2;
		}
	}
	return count;
}

int main()
{
	long long n;
	long ndiv;
	for(n=1; ; n++)
	{
		ndiv = countdiv(n*(n+1)/2);
		if(ndiv > 500)
		{
			printf("%lld\n", n*(n+1)/2);
			break;
		}
	}
	return 0;
}

