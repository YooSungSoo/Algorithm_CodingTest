#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, k;
vector<pair<int, int>> graph[101];
int indegree[101];
int dp[101][101];
bool isBasic[101];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> x >> y >> k;
        graph[y].push_back({x,k});
        indegree[x]++;
    }

    queue<int> q;

    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            isBasic[i] = true;
            q.push(i);
        }
    }

    while (!q.empty()) {
        int cur = q.front();
		q.pop();

        for (int i = 0; i < graph[cur].size(); i++) {
            int next = graph[cur][i].first;
            int cnt = graph[cur][i].second;

            if (isBasic[cur]) {
                dp[next][cur] += cnt;
            } else {
                for (int j = 1; j <= n; j++) {
                    dp[next][j] += dp[cur][j] * cnt;
                }
            }

            indegree[next]--;
            if (indegree[next] == 0) {
                q.push(next);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (isBasic[i] && dp[n][i] > 0) {
            cout << i << " " << dp[n][i] << "\n";
        }
    }

    return 0;
}
