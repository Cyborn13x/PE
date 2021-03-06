#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

#define MAX 20

int a[MAX][MAX];

int main() {
	int i, j, maxval;
	freopen("PE18.txt", "r", stdin);
	for(i=1; i<=15; i++) {
		for(j=1; j<=i; j++) {
			scanf("%d", &a[i][j]);
			a[i][j] += max(a[i-1][j-1], a[i-1][j]);
		}
	}
	for(i=15, j=1, maxval = -999999; j<=15; j++) {
		maxval = max(maxval, a[i][j]);
	}
	printf("%d\n", maxval);
	return 0;
}
