#include <stdio.h>

int main()
{
	int a, b, c, sum=0;
	a = b = 1;
	while(a <= 4000000)
	{
		c = a;
		a = a + b;
		b = c;
		if(a%2==0) sum += a;
	}
	printf("%d\n", sum);
	return 0;
}
