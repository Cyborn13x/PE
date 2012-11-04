#include <iostream>
#include <algorithm>
using namespace std;

inline int toInt(char *num, int st, int en) {
	int ret = 0, i;
	for(i = st; i < en; i++) ret = num[i]-'0' + ret*10;
	return ret;
}

inline int toStr(int n, char *num) {
	int k = 0;
	while(n) { num[k++] = '0' + n%10; n /= 10; }
	if(!k) num[k++] = '0'; num[k] = 0;
	reverse(num, num+k);
	return k;
}

int main() {
	char num[] = "987654321", s[10], t[10];
	int i, j, k, n, slen, tlen;
	do {
		for(i = 1; i < 5; i++) {
			n = toInt(num, 0, i);
			for(tlen = 0, j = 1;;j++) {
				slen = toStr(n*j, s);
				if(slen + tlen > 9) break;
				strcpy(&t[tlen], s);
				for(k = tlen; k < tlen + slen && t[k]==num[k]; k++);
				if(k < tlen+slen) break;
				tlen += slen;
				if(tlen == 9) break;
			}
			if(tlen==9 && !strcmp(t, num)) break;
		}
		if(i < 5) break;
	} while(prev_permutation(num, num + 9));
	puts(num);
	system("pause");
	return 0;
}
