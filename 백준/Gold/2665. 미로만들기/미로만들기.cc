#include <bits/stdc++.h>

using namespace std;

int n;
string s;
int a[54][54];
int dist[54][54];
int dy[] = {0,1,0,-1};
int dx[] = {1,0,-1,0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s;
		for(int j=0;j<s.size();j++){
			a[i][j] = s[j] - '0';
			dist[i][j] = 1e9;
		}
	}
	deque<pair<int, int>> dq;
    dq.push_front({0, 0});
    dist[0][0] = 0;

    while (!dq.empty()) {
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();

        for (int d = 0; d < 4; ++d) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx >= 0 && ny >= 0 && nx < n && ny < n) {
                if (a[nx][ny] == 1 && dist[nx][ny] > dist[x][y]) {
                    dist[nx][ny] = dist[x][y];
                    dq.push_front({nx, ny});
                }
                else if (a[nx][ny] == 0 && dist[nx][ny] > dist[x][y] + 1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    dq.push_back({nx, ny});
                }
            }
        }
    }

    cout << dist[n-1][n-1] << '\n';

	

    return 0;
}
