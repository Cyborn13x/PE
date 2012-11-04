#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

inline int isprime(int n) {
	if(n < 2) return 0;
	if(n == 2) return 1;
	if((n & 1) == 0) return 0;
	int i, rt = (int)sqrt((double)n);
	for(i = 3; i <= rt; i+=2)
		if(n%i==0)
			return 0;
	return 1;
}

inline int solve() {
	char buff[16];
	int n, i, j;
	for(i=7; i; i--) {
		for(buff[j=i]=0; j; j--)
			buff[i-j] = char(48+j);
		do {
			sscanf(buff, "%d", &n);
			if(isprime(n)) return n;
		} while(prev_permutation(buff, buff+i));
	}
	return -1;
}

int main() {
	printf("%d\n", solve());
	return 0;
}
