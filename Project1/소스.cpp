#include<iostream>
#include <vector>
using namespace std;

//vector<int> v_map;
//vector<int> dice;
int v_map[1001];
int dice[1001];
int n, m;

void input() {
    cin >> n >> m;
    //v_map.resize(n+1);
    //dice.resize(m+1);
    for (int i = 0;i < n;++i) {
        int temp;
        cin >> v_map[i];
        //v_map.push_back(temp);
    }
    for (int i = 0; i < m;++i) {
        int temp;
        cin >> dice[i];
        //dice.push_back(temp);
    }
}

int sol() {
    int temp = 0;
    int ans = 0;
    int cnt = 0;
    while (temp < n-1)
    {

        temp += dice[ans];
        temp += v_map[temp];

        cnt++;
        ans++;
    }
    return cnt;
}

int main() {
    input();
    cout << sol();
}