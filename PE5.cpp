#include <stdio.h>
#include <math.h>

#define MAX 20

int primes[MAX];

void factorize(int n)
{
	int i, cnt, lmt = sqrt(n);
	for(i=2; i<=lmt; i++)
	{
		if(n % i == 0)
		{
			cnt = 0;
			while(n % i == 0)
			{
				cnt++;
				n /= i;
			}
			if(cnt > primes[i]) primes[i] = cnt;
		}
	}
	if(n > 1)
	{
		if(1 > primes[n]) primes[n] = 1;
	}
}

int main()
{
	int i, res = 1;
	for(i=2; i<=MAX; i++)
	{
		factorize(i);
	}
	for(i=2; i<MAX; i++)
	{
		res *= pow(i, primes[i]);
	}
	printf("%d\n", res);
	return 0;
}

