#include <cstdio>
using namespace std;

#define MAX 777924
#define LMT 882

unsigned flag[MAX>>6];

#define ifC(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define isC(x) (flag[x>>6]|=(1<<((x>>1)&31)))

void sieve()
{
	unsigned i, j, k;
	for(i=3; i<LMT; i+=2)
		if(!ifC(i))
			for(j=i*i, k=i<<1; j<MAX; j+=k)
				isC(j);
	for(i=3, j=1; i<MAX; i+=2)
	{
		if(!ifC(i))
		{
			j++;
			if(j==10001)
			{
				printf("%u\n", i);
				return;
			}
		}
	}
}

int main()
{
	sieve();
	return 0;
}

