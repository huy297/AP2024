#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int Board[15][15];
bool isTry[15][15];
mt19937 ran(time(0));
int mx[] = {-1,-1,-1,0,0,1,1,1};
int my[] = {-1,0,1,-1,1,-1,0,1};
int Rand(int l, int r) {
	return l + ran()%(r-l+1);
}
void makeBoard(int n, int m, int k) {
	for (int i=1; i<=k; i++) {
		int u = Rand(1,n), v = Rand(1,m);
		while (Board[u][v]) {
			u = Rand(1,n), v = Rand(1,m);
		}
		Board[u][v] = true;
	}
}
bool valid(int u, int v) {
	return u >= 1 && v >= 1 && u <= n && v <= m;
}
int NumberBomp(int x, int y) {
	int res = 0;
	for (int i=0; i<8; i++) {
		int u = x + mx[i];
		int v = y + my[i];
		if (!valid(u,v)) continue;
		res += Board[u][v];
	}
	return res;
}
void MapEnd() {
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			cout << (Board[i][j] ? "x" : ".") << ' '; 
		}
		cout << endl;
	}
}
void Map() {
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			if (isTry[i][j]) cout << NumberBomp(i,j) << ' ';
			else cout << "? ";
		}
		cout << endl;
	}
}
void play() {
	int x,y;
	cin >> x >> y;
	if (Board[x][y]) {
		cout << "YOU ARE DEAD!" << endl;
		MapEnd();
		exit(0);
	}
	else {
		isTry[x][y] = true;
		Map();
	}
}
int main() {
	cin >> n >> m >> k;
	makeBoard(n,m,k);
	while (true) play();
}
