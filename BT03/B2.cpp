#include<bits/stdc++.h>
using namespace std;
struct point {
	double x,y;
}a,b;
struct Rect {
	int x,y,w,h;
	bool contains(const point a) {
		return a.x >= x && a.y >= y && a.x <= x + w && a.y <= y + h;
	}
};
int main() {
	
}
