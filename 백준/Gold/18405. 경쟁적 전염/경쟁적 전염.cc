#include <bits/stdc++.h>
using namespace std;

int n, k, s, x, y;
int board[201][201];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;

    vector<tuple<int, int, int, int>> viruses;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            if (board[i][j] != 0) {
                viruses.push_back(make_tuple(board[i][j], 0, i, j));
            }
        }
    }

    cin >> s >> x >> y;
    x--, y--; 
    sort(viruses.begin(), viruses.end());

    queue<tuple<int, int, int, int>> q;
    for (auto &v : viruses) q.push(v);

    while (!q.empty()) {
        int virus = get<0>(q.front());
        int time = get<1>(q.front());
        int i = get<2>(q.front());
        int j = get<3>(q.front());
        q.pop();

        if (time == s) break;

        for (int d = 0; d < 4; d++) {
            int ni = i + dy[d];
            int nj = j + dx[d];
            if (ni < 0 || nj < 0 || ni >= n || nj >= n) continue;

            if (board[ni][nj] == 0) {
                board[ni][nj] = virus;
                q.push(make_tuple(virus, time + 1, ni, nj));
            }
        }
    }

    cout << board[x][y] << '\n';
    return 0;
}
