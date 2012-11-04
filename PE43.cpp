#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long i64;

i64 getnum(int *digits) {
	i64 sum = 0;
	for(int i = 0; i < 10; i++) {
		sum = sum * 10 + digits[i];
	}
	return sum;
}

int main() {
	int digits[10], primes[7] = {2, 3, 5, 7, 11, 13, 17};
	int i, j, k;
	i64 sum = 0;
	for(i = 1; i < 10; i++) {
		digits[0] = i;
		for(j = 0, k = 1; j < 10; j++) {
			if(j != i) digits[k++] = j;
		}
		do {
			for(j = 0; j < 7; j++) {
				if((100*digits[j+1] + 10*digits[j+2] + digits[j+3]) % primes[j]) {
					break;
				}
			}
			if(j == 7) sum += getnum(digits);
		} while(next_permutation(digits + 1, digits + 10));
	}
	printf("%lld\n", sum);
	return 0;
}
