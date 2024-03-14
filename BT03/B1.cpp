#include<bits/stdc++.h>
using namespace std;
struct point {
	double x,y;
}a,b;
void print (point p) {
	cout << p.x << ' ' << p.y << '\n';
} 
point mid_point (const point a, const point b) {
	return {(a.x+b.x)/2,(a.y+b.y)/2};
}
int main() {
	a.x = 5;
	a.y = 6;
	print(a);
	b.x = 4;
	b.y = 6;
	print(mid_point(a,b));
}
