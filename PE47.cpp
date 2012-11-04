#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

const int LMT = 1000000;

vector< int > factorize(int n) {
	vector< int > fact;
	if((n & 1) == 0) {
		fact.push_back(2);
		while((n & 1) == 0) n >>= 1;
	}
	int rt = (int)sqrt((double)n);
	for(int i = 3; i <= rt; i+=2) {
		if(n % i == 0) {
			fact.push_back(i);
			while(n % i == 0) n /= i;
			rt = (int)sqrt((double)n);
		}
	}
	if(n > 1) fact.push_back(n);
	return fact;
}

int ndist(vector< int > &f) {
	sort(f.begin(), f.end());
	return unique(f.begin(), f.end()) - f.begin();
}

int main() {
	vector< int > f[4];
	int i, j;
	for(i = 210; i < LMT; i++) {
		for(j = 0; j < 4; j++) {
			f[j] = factorize(i + j);
			if(ndist(f[j]) < 4) {
				i = i + j;
				break;
			}
		}
		if(j == 4) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
