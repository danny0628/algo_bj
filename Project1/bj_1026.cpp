#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int ans = 0;
vector<int> a;
vector<int> b;
vector<int> s;

void input() {
	cin >> n;
	a.resize(n);
	b.resize(n);
	for (int i = 0;i < a.size();++i) {
		cin >> a[i];
	}
	int max_num = -1;
	for (int i = 0;i < b.size();++i) {
		cin >> b[i];
		s.push_back(b[i]);
	}
	

}

void sol() {
	sort(s.begin(), s.end(), greater<>());
	sort(a.begin(), a.end());
	/*
	for (int i = 0;i < n;++i) {
		cout << s[i] << "\t" << a[i] << "\n";
	}
	*/
	for (int i = 0;i < n;++i) {
		ans += (a[i] * s[i]);
	}
	cout << ans;
}

int main() {
	input();
	sol();
}