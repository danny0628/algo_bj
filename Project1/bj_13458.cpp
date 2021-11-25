	#include <iostream>
	#include <vector>

	using namespace std;

	int n, c, b;
	int a[1000001];

	void input() {
		cin >> n;
		//a.resize(n);
		for (int i = 1; i <= n;++i) {
			cin >> a[i];
		}
		cin >> b >> c;
	}
	long long sol() {
		long long cnt = 0;
		for (int i = 1;i <= n;++i) {
			a[i] -= b;
			cnt++;

			if (a[i] <= 0) {
				continue;
			}
			else {
				if (a[i] <= c) {
					cnt++;
				}
				else {
					int temp = a[i] / c;	// 남아있는 사람수%부감
					if (a[i] % c != 0) { //만약 남아있는 사람수가 0이 아니라 더 나눠줘야 한다면? 
						temp += 1;		//부감독 한명 더필요
					}
					cnt += temp;
				}
			}
		}
		return cnt;
	}

	int main() {
		input();
		cout << sol();
	}