#include<bits/stdc++.h>
using namespace std;
int a[55];
void makeArr () {
	for (int i=0; i<50; i++) a[i] = rand();
}
void solve() {
	for (int i=0; i<50; i++) {
		for (int j=i+1; j<50; j++) {
			for (int k=j+1; k<50; k++) if ((a[i] + a[j] + a[k]) % 25 == 0) cout << a[i] << ' ' << a[j] << ' ' << a[k] << endl; 
		} 
	}
}
int main() { 
	makeArr();
	solve();
}
