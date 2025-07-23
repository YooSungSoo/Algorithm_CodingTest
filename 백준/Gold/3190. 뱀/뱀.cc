#include <bits/stdc++.h>
using namespace std;

int n, k, l;
int board[101][101];
deque<pair<int, int>> snake;
map<int, char> cmd;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        int x, y; cin >> x >> y;
        board[x][y] = 1;
    }

    cin >> l;
    for (int i = 0; i < l; i++) {
        int t; char c;
        cin >> t >> c;
        cmd[t] = c;
    }

    int time = 0;
    int dir = 0; 
    int x = 1, y = 1; 
    snake.push_back({x, y});
    board[x][y] = 2; 

    while (true) {
        time++;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 1 || ny < 1 || nx > n || ny > n) break;
        if (board[nx][ny] == 2) break;

        if (board[nx][ny] != 1) {
            auto tail = snake.back();
            board[tail.first][tail.second] = 0;
            snake.pop_back();
        }

        board[nx][ny] = 2;
        snake.push_front({nx, ny});
        x = nx; y = ny;

        if (cmd.count(time)) {
            if (cmd[time] == 'L') dir = (dir + 3) % 4;
            else if (cmd[time] == 'D') dir = (dir + 1) % 4;
        }
    }

    cout << time << '\n';
    return 0;
}
