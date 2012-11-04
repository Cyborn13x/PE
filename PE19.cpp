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

int mdays[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

inline int isleap(int year) {
	return (year%400==0 || (year%100!=0 && year%4==0));
}

int main() {
	int count=0, days=1, dd=1, mm=1, yy=1900;
	while(yy<=2000) {
		if(yy>1900 && dd==1 && days%7==0) count++;
		dd++;
		days++;
		if((mm==2 && dd>mdays[mm]+isleap(yy)) || dd>mdays[mm]) {
			mm++;
			dd=1;
		}
		if(mm>12) {
			mm = 1;
			yy++;
		}
	}
	printf("%d\n", count);
	return 0;
}
