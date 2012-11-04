#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class BIGINT {
	string num;
public:
	BIGINT() {
		num = "0";
	}
	BIGINT(string s) {
		num = s;
	}
	string toString() {
		return num;
	}
	BIGINT operator+(BIGINT X) {
		int i, j, a, b, c, len1, len2;
		string res, add = X.num;
		len1 = num.size();
		len2 = add.size();
		for(i=len1-1, j=len2-1, c=0; i>=0 || j>=0 || c; i--, j--) {
			a = (i>=0)? num.at(i)-48 : 0;
			b = (j>=0)? add.at(j)-48 : 0;
			res.push_back((a+b+c)%10 + 48);
			c = (a+b+c)/10;
		}
		reverse(res.begin(), res.end());
		return BIGINT(res);
	}
	friend istream &operator>>(istream &stream, BIGINT &X) {
		stream >> X.num;
		return stream;
	}
	friend ostream &operator<<(ostream &stream, BIGINT X) {
		stream << X.num;
		return stream;
	}
};

int main() {
	BIGINT a, b;
	while(cin >> b) {
		a = a + b;
	}
	cout << a << endl;
	return 0;
}

