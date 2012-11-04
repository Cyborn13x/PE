#include <cstdio>
using namespace std;

#define MAX 2005056
#define LMT 1416

unsigned flag[MAX>>6];

#define ifC(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define isC(x) (flag[x>>6]|=(1<<((x>>1)&31)))

void sieve()
{
	unsigned i, j, k;
	unsigned long long sum = 0;
	for(i=3; i<LMT; i+=2)
		if(!ifC(i))
			for(j=i*i, k=i<<1; j<2000000; j+=k)
				isC(j);
	sum += 2;
	for(i=3, j=1; i<2000000; i+=2)
		if(!ifC(i))
			sum += i;
	printf("%llu\n", sum);
}

int main()
{
	sieve();
	return 0;
}

