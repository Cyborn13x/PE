#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string s = "0123456789";
	int i=1;
	do {
		if(i==1000000) {
			cout << s << endl;
			break;
		}
		i++;
	} while( next_permutation(s.begin(), s.end()) );
	return 0;
}
