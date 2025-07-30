#include <bits/stdc++.h>

using namespace std;

int R, C;
char forest[51][51];
int visited[51][51]; 

queue<pair<int, int>> water_q;
queue<pair<int, int>> hedgehog_q;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1}; 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < C; j++) {
            forest[i][j] = row[j];
            if (forest[i][j] == '*') {
                water_q.push({i, j});
            } else if (forest[i][j] == 'S') {
                hedgehog_q.push({i, j});
                visited[i][j] = 1;
            }
        }
    }

    while (!hedgehog_q.empty()) {
        int water_size = water_q.size();
        for (int i = 0; i < water_size; i++) {
            int x = water_q.front().first;
            int y = water_q.front().second;
            water_q.pop();

            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx >= 0 && ny >= 0 && nx < R && ny < C) {
                    if (forest[nx][ny] == '.') {
                        forest[nx][ny] = '*';
                        water_q.push({nx, ny});
                    }
                }
            }
        }

        int hedgehog_size = hedgehog_q.size();
        for (int i = 0; i < hedgehog_size; i++) {
            int x = hedgehog_q.front().first;
            int y = hedgehog_q.front().second;
            hedgehog_q.pop();

            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx >= 0 && ny >= 0 && nx < R && ny < C) {
                    if (forest[nx][ny] == 'D') {
                        cout << visited[x][y] << '\n';
                        return 0;
                    }
                    if (forest[nx][ny] == '.' && visited[nx][ny] == 0) {
                        visited[nx][ny] = visited[x][y] + 1;
                        hedgehog_q.push({nx, ny});
                    }
                }
            }
        }
    }

    cout << "KAKTUS\n";
    return 0;
}
