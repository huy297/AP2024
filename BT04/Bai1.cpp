#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+5;
bool use[N];
int n;
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	int res = 0;
	for (int i=1; i<=n; i++) {
		int x; cin >> x;
		if (use[x]) res = 1;
		use[x] = true;
	}
	cout << (res ? "YES" : "NO");
}
