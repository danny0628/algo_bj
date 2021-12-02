#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string s;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };	// µ¿ ³² ¼­ ºÏ
char v_map[101][101];
int dir = 0;
int min_x = 50;
int max_x = 50;
int min_y = 50;
int max_y = 50;
int s_x = 50;
int s_y = 50;


void input() {
	//v_map.resize(101, vector<char>(101));
	cin >> n;
	cin >> s;
	for (int i = 0;i < 101;++i) {
		for (int j = 0;j < 101;++j) {
			v_map[i][j] = '#';
		}
	}
}
void dir_r() {
	dir++;
	if (dir == 4) {
		dir = 0;
	}
}
void dir_l() {
	dir--;
	if (dir == -1) {
		dir = 3;
	}
}
void dir_f(int x, int y) {
	int nx, ny;
	nx = dx[dir] + x;
	ny = dy[dir] + y;
	v_map[nx][ny] = '.';
	s_x = nx;
	s_y = ny;
	min_x = min(min_x, nx);
	max_x = max(max_x, nx);
	min_y = min(min_y, ny);
	max_y = max(max_y, ny);
}

void sol() {

	v_map[s_x][s_y] = '.';
	for (int i = 0;i < n;++i) {
		if (s[i] == 'R') {
			dir_r();
		}
		else if (s[i] == 'L') {
			dir_l();
		}
		else {
			dir_f(s_x, s_y);
		}
	}
}
void output() {
	for (int i = min_x; i <= max_x;++i) {
		for (int j = min_y; j <= max_y;++j) {
			cout << v_map[i][j];
		}
		cout << "\n";
	}
}

int main() {
	input();
	sol();
	output();
}