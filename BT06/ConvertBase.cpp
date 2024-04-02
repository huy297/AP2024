#include<bits/stdc++.h>
using namespace std;
int BinToDec(string s) {
	int res = 0;
	for (auto u : s) {
		res = res*2 + u -'0';
	}
	return res;
}
string DecToBin(int n) {
	string res;
	while (n > 0) {
		res.push_back(char('0'+n%2));
		n /= 2;
	}
	reverse(res.begin(),res.end());
	return res;
}
int main() {
	int n; cin >> n;
	cout << DecToBin(n);
	string s; cin >> s;
	cout << BinToDec(s);
}
