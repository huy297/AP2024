#include<bits/stdc++.h>
using namespace std;
int RandLess(int n) {
	return rand()%n;
}

int main() {
	int n; cin >> n;
	cout << RandLess(n);
}
