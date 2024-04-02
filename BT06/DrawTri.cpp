#include<bits/stdc++.h>
using namespace std;
void draw(int n) {
	int cach = n - 1;
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < cach; j++) {
            cout << ' ';
        }
        for (int k = 0; k < 2*i+1; k++) {
            cout << "*";
        }
		cout << endl;
        cach--;
    }
} 
int main() {
	int n; cin >> n;
	draw(n);
}
