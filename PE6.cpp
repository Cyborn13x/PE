#include <stdio.h>

int main()
{
	long long int n = 100;
	long long int a = n * (n + 1 ) * (2 * n + 1) / 6;
	long long int b = n * n * (n + 1) * (n + 1) / 4;
	printf("%lld %lld %lld\n", a, b, a - b);
}
