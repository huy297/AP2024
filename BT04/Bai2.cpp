#include<bits/stdc++.h>
using namespace std;
#define int long long
string s;
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> s;
	string t = s;
	reverse(t.begin(),t.end());
	cout << (t == s ? "YES" : "NO");
}
