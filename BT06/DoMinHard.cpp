#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int Board[15][15];
bool isTry[15][15];
int density[15][15];
mt19937 ran(time(0));
int mx[] = {-1,-1,-1,0,0,1,1,1};
int my[] = {-1,0,1,-1,1,-1,0,1};
int NeedToRender[15][15];
int Rand(int l, int r) {
	return l + ran()%(r-l+1);
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
void makeBoard(int n, int m, int k) {
	for (int i=1; i<=k; i++) {
		int u = Rand(1,n), v = Rand(1,m);
		while (Board[u][v]) {
			u = Rand(1,n), v = Rand(1,m);
		}
		Board[u][v] = true;
	}
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			density[i][j] = NumberBomp(i,j);
		}
	}
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
			if (NeedToRender[i][j] == -1) cout << density[i][j] << ' ';
			else if (NeedToRender[i][j] == 0) cout << "? ";
			else cout << ". ";
		}
		cout << endl;
	}
}
void dfs(int x, int y) {
	if (density[x][y] > 0) {
		NeedToRender[x][y] = -1;
		return;
	}
	NeedToRender[x][y] = 1;
	for (int i=0; i<8; i++) {
		int u = x + mx[i];
		int v = y + my[i];
		if (!valid(u,v)) continue;
		if (NeedToRender[u][v] == 0 && Board[u][v] == 0) dfs(u,v);
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
		dfs(x,y);
		Map();
	}
}
int main() {
	cin >> n >> m >> k;
	makeBoard(n,m,k);
	while (true) play();
}
