#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+5;
int a[N];
int n;
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	int res = 0;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	sort (a+1,a+n+1);
	for (int i=1; i<=n; i++) res += (n-i)*a[i];
	cout << res;
}
