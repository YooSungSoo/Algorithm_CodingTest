#include <bits/stdc++.h>
using namespace std;

const int MAX = 300;
int N, M;
int mmap[MAX][MAX];
bool visited[MAX][MAX];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {
    visited[x][y] = true;

    for (int d = 0; d < 4; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx >= 0 && ny >= 0 && nx < N && ny < M) {
            if (mmap[nx][ny] > 0 && !visited[nx][ny]) {
                dfs(nx, ny);
            }
        }
    }
}

int count_components() {
    memset(visited, false, sizeof(visited));
    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (mmap[i][j] > 0 && !visited[i][j]) {
                dfs(i, j);
                count++;
            }
        }
    }
    return count;
}

void melt() {
    int temp[MAX][MAX];
    memcpy(temp, mmap, sizeof(mmap));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (mmap[i][j] > 0) {
                int sea = 0;

                for (int d = 0; d < 4; d++) {
                    int ni = i + dx[d];
                    int nj = j + dy[d];

                    if (ni >= 0 && nj >= 0 && ni < N && nj < M) {
                        if (mmap[ni][nj] == 0)
                            sea++;
                    }
                }

                temp[i][j] = max(0, mmap[i][j] - sea);
            }
        }
    }

    memcpy(mmap, temp, sizeof(mmap));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> mmap[i][j];

    int year = 0;

    while (true) {
        int components = count_components();

        if (components == 0) {
            cout << 0 << '\n';
            break;
        }
        if (components >= 2) {
            cout << year << '\n';
            break;
        }

        melt();
        year++;
    }

    return 0;
}
