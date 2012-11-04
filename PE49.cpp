#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int flag[10000], digits[4];

int getnum(int a[4]) {
	return a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
}

bool isprime(int n) {
	if(n < 2) return false;
	if(n == 2) return true;
	if((n & 1) == 0) return false;
	for(int i = 3, rt = (int)sqrt((double)n); i <= rt; i += 2) {
		if(n % i == 0) return false;
	}
	return true;
}

void process(int *a) {
	int temp[4];
	vector< int > V;
	memcpy(temp, a, sizeof(int)*4);
	do {
		int n;
		n = getnum(temp);
		flag[n] = 1;
		if(isprime(n)) V.push_back(n);
	} while(next_permutation(temp, temp + 4));
	if(V.size() < 3) return;
	int i, j, k, sz = V.size();;
	for(i = 0; i < sz; i++) {
		for(j = i + 1; j < sz; j++) {
			for(k = j + 1; k < sz; k++) {
				if(V[k] - V[j] == V[j] - V[i]) {
					printf("%d%d%d\n", V[i], V[j], V[k]);
				}
			}
		}
	}
}

void gen(int depth) {
	if(depth == 4) {
		int n = getnum(digits);
		if(!flag[n] && isprime(n)) {
			process(digits);
		}
		flag[n] = 1;
		return;
	}
	for(int i = 1; i <= 9; i++) {
		digits[depth] = i;
		gen(depth + 1);
	}
}

int main() {
	gen(0);
	return 0;
}
