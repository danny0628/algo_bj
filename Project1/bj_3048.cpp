#include<iostream>
#include<vector>
#include<string>
using namespace std;

int n1, n2, t;
string v1;
string v2;
vector<pair<char, bool>> dir;

void input() {
	cin >> n1 >> n2;

	string t_v1;
	cin >> t_v1;
	int size = t_v1.size();
	for (int i = size - 1;i >= 0;--i) {
		v1 += t_v1[i];
	}
	cin >> v2;
	cin >> t;
	//cout << v1 + v2 << '\n';
}

void make_dir(){
	int size1 = v1.size();
	int size2 = v2.size();
	for (int i = 0;i < size1;++i) {
		dir.push_back({ v1[i], true}); //  -> 방향
		//cout << dir[i].second;
	}
	for (int i = 0;i < size2;++i) {
		dir.push_back({ v2[i], false}); //  <- 방향
	}
	/*
	for (int i = 0;i < size1 + size2;++i) {
		cout << dir[i].second << "\t";
	}*/
	
}

void sol() {
	int size = dir.size();
	while (t > 0) {
		for (int i = 0;i < size - 1;++i) {
			if (dir[i].second == dir[i + 1].second) {	//지금 방향과 다음에 탐색할 개미의 방향이 같다면? swap없이 진행
				continue;
			}
			else {
				if (dir[i].second == true) {
					char temp1;
					bool temp2;
					temp1 = dir[i].first;
					temp2 = dir[i].second;

					dir[i].first = dir[i + 1].first;
					dir[i].second = dir[i + 1].second;
					dir[i + 1].first = temp1;
					dir[i + 1].second = temp2;
					++i;
				}
			}
		}
		t--;
	}
}

void output() {
	int size = dir.size();
	for (int i = 0; i < size;++i) {
		cout << dir[i].first;
	}
}

int main() {
	input();
	make_dir();
	sol();
	output();
}