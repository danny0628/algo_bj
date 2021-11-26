#include<iostream>
#include<string>
using namespace std;
bool flag;
int dx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int dy[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };
bool visited[6][6];

int main()
{
    string str;
    cin >> str;
    int start_x = 5 - (str[1] - '1');
    int start_y = str[0] - 'A';
    int temp_x = start_x;
    int temp_y = start_y;
    visited[temp_x][temp_y] = true;
    for (int i = 0; i < 35; i++)
    {
        cin >> str;

        int x = 5 - (str[1] - '1');
        int y = str[0] - 'A';
        flag = false;
        for (int j = 0; j < 8; j++)
        {
            int nx = temp_x + dx[j];
            int ny = temp_y + dy[j];
            if (nx >= 0 && nx < 6 && ny >= 0 && ny < 6) {
                if (nx == x && ny == y && visited[nx][ny] == false) {
                    visited[x][y] = true;
                    flag = true;
                    break;
                }
            }
        }

        if (flag) {
            temp_x = x;
            temp_y = y;
        }
        else {
            cout << "Invalid";
            exit(0);
        }
    }
    flag = false;
    for (int j = 0; j < 8; j++)
    {
        if (temp_x + dx[j] == start_x && temp_y + dy[j] == start_y) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "Valid";
    }
    else {
        cout << "Invalid";
    }
    return 0;
}
