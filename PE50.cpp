#include <cstdio>
#include <cassert>

const int MAX = 1000000, LMT = 1000, PRLEN = 78498;

int flag[(MAX>>6)+1], primes[PRLEN], sum[PRLEN], N;

#define ifc(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define isc(x) (flag[x>>6]|=(1<<((x>>1)&31)))

void sieve() {
	int i, j, k;
	for(i = 3; i < LMT; i += 2) if(!ifc(i)) for(j = i*i, k = i<<1; j < MAX; j += k) isc(j);
	for(N = 1, primes[0] = 2, i = 3; i < MAX; i += 2) if(!ifc(i)) primes[N++] = i;
}

void calcsum() {
	sum[0] = primes[0];
	for(int i = 1; i < N; i++) sum[i] = sum[i-1] + primes[i];
}

bool isprime(int n) {
	if(n < 2) return false;
	if(n == 2) return false;
	if(n & 1) return !ifc(n);
	return false;
}

int process() {
	int i, j, mxlen = 1, mxnum = 2, tmp;
	for(i = 0; i < N; i++) {
		for(j = i + mxlen; j < N; j++) {
			tmp = i ? sum[j] - sum[i-1] : sum[j];
			if(tmp >= MAX) break;
			if(isprime(tmp) && j - i + 1 > mxlen) {
				mxlen = j - i + 1;
				mxnum = tmp;
			}
		}
	}
	return mxnum;
}

int main() {
	sieve();
	calcsum();
	printf("%d\n", process());
	return 0;
}
