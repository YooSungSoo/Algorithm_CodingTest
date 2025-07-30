#include <bits/stdc++.h>

using namespace std;

int M, N, H;
int box[100][100][100];
int days[100][100][100];

int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

queue<tuple<int, int, int>> q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> M >> N >> H;

    for (int h = 0; h < H; ++h) {
        for (int n = 0; n < N; ++n) {
            for (int m = 0; m < M; ++m) {
                cin >> box[h][n][m];
                if (box[h][n][m] == 1) {
                    q.push({h, n, m});
                }
            }
        }
    }

    while (!q.empty()) {
        int z, x, y;
        tie(z, x, y) = q.front();
        q.pop();

        for (int d = 0; d < 6; ++d) {
            int nz = z + dz[d];
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nz >= 0 && nz < H && nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (box[nz][nx][ny] == 0) {
                    box[nz][nx][ny] = 1;
                    days[nz][nx][ny] = days[z][x][y] + 1;
                    q.push({nz, nx, ny});
                }
            }
        }
    }

    int result = 0;
    for (int h = 0; h < H; ++h) {
        for (int n = 0; n < N; ++n) {
            for (int m = 0; m < M; ++m) {
                if (box[h][n][m] == 0) {
                    cout << -1 << '\n';
                    return 0;
                }
                result = max(result, days[h][n][m]);
            }
        }
    }

    cout << result << '\n';
    return 0;
}
