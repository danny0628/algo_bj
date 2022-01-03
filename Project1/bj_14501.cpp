#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int>> v;
int ans = 0;

void input() {
	cin >> n;
	for (int i = 0; i < n;++i) {
		int t, p;
		cin >> t >> p;
		v.push_back({ t,p });
	}
}

void dfs(int cnt, int sum) {
	if (cnt > n) {
		return;
	}

	ans = max(ans, sum);
	for (int i = cnt;i < n;++i) {
		dfs(i + v[i].first, sum + v[i].second);
	}
}

int main() {
	input();
	dfs(0, 0);
	cout << ans;
}