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
struct Ship {
	Rect body;
	string id;
	int dx,dy;
	void move() {
		body.x += dx;
		body.y += dy;
	}
	void Display() {
		cout << body.x << ' ' << body.y << ' ' << body.w << ' ' << body.h << ' ' << id << '\n';
	}
};
void display(Ship ship) {
	ship.Display();
}
int main() {
	
}
