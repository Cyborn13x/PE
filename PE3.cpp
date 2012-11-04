#include <cstdio>
#include <vector>
using namespace std;

#define MAX 777924
#define LMT 882
#define u64 unsigned long long
#define ifC(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define isC(x) (flag[x>>6]|=(1<<((x>>1)&31)))

int flag[MAX>>6];
int primes[62314];
int total;

inline u64 sq(u64 n) { return n * n; }

void sieve() {
	int i, j, k;
	primes[0] = 2, total = 1;
	for(i=3; i<LMT; i+=2) if(!ifC(i)) for(j=i*i, k=i<<1; j<MAX; j+=k) isC(j);
	for(i=3; i<MAX; i+=2) if(!ifC(i)) primes[total++] = i;
}

void factorize(u64 n, vector< u64 > &V) {
	for(int i=0; i<total && sq(primes[i]) <= n; i++) {
		if(n%primes[i]==0) {
			V.push_back(primes[i]);
			while(n%primes[i]==0) n /= primes[i];
		}
	}
	if(n > 1) V.push_back(n);
}

int main() {
	sieve();
	vector< u64 > factors;
	factorize(600851475143ULL, factors);
	printf("%llu\n", factors[factors.size()-1]);
	return 0;
}

