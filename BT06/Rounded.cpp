#include<bits/stdc++.h>
using namespace std;
int Round(double num) {
    int rounded;
    double dec = num-(int)num; 
    if (dec >= 0.5) rounded = ceil(num);
    else rounded = floor(num);
    return rounded;
}
int _Round(double num) {
    int rounded;
    if (num >= 0) rounded = static_cast<int>(num + 0.5);
    else rounded = static_cast<int>(num - 0.5);
    return rounded;
}

int main() {
	double n; cin >> n;
	cout << Round(n) << ' ' << _Round(n);
}
