#include <cstdio>
#include <cstdlib>
#include <queue>
#include <set>
using namespace std;

typedef pair< int, int > pii;
int sum, cnt;
set< int > lt, rt;

bool isprime(int n) {
	if(n < 2) return 0;
	if(n == 2) return 1;
	if((n & 1) == 0) return 0;
	for(int i = 3; i*i <= n; i+=2)
		if(n%i==0)
			return 0;
	return 1;
}

void bfs() {
	char str[32];
	int u, vl, vr, i, s;
	queue< pii > Q;
	Q.push(pii(2,2)); Q.push(pii(3,2)); Q.push(pii(5,2)); Q.push(pii(7,2));
	while(!Q.empty()) {
		u = Q.front().first;
		s = Q.front().second;
		Q.pop();
		for(i = 1; i <= 9; i++) {
			if(s == 2 || s == 0) {
				sprintf(str, "%d%d", i, u);
				sscanf(str, "%d", &vl);
				if(isprime(vl) && lt.find(vl)==lt.end()) {
					lt.insert(vl);
					if(rt.find(vl)!=rt.end()) {
						cnt++;
						sum += vl;
						printf("%8d\n", vl);
						Q.push(pii(vl, 2));
					}
					else Q.push(pii(vl, 0));
				}
				if(cnt == 11) return;
			}
			if(s == 2 || s == 1) {
				sprintf(str, "%d%d", u, i);
				sscanf(str, "%d", &vr);
				if(isprime(vr) && rt.find(vr)==rt.end()) {
					rt.insert(vr);
					if(lt.find(vr)!=lt.end()) {
						cnt++;
						sum += vr;
						printf("%8d\n", vr);
						Q.push(pii(vr, 2));
					}
					else Q.push(pii(vr, 1));
				}
				if(cnt == 11) return;
			}
		}
	}
}

int main() {
	sum = cnt = 0;
	lt.clear(); rt.clear();
	bfs();
	printf("--------\n");
	printf("%8d\n", sum);
	return 0;
}
