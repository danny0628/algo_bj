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
					int temp = a[i] / c;	// �����ִ� �����%�ΰ�
					if (a[i] % c != 0) { //���� �����ִ� ������� 0�� �ƴ϶� �� ������� �Ѵٸ�? 
						temp += 1;		//�ΰ��� �Ѹ� ���ʿ�
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