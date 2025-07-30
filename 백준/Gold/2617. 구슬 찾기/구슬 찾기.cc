#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<int> heavier[101];
vector<int> lighter[101];
bool visited[101];

int dfs(int curr, vector<int> graph[]) {
    int cnt = 0;
    visited[curr] = true;

    for (int next : graph[curr]) {
        if (!visited[next]) {
            cnt += 1 + dfs(next, graph);
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int heavy, light;
        cin >> heavy >> light;
        heavier[heavy].push_back(light);
        lighter[light].push_back(heavy);
    }

    int mid = (N + 1) / 2;
    int result = 0;

    for (int i = 1; i <= N; i++) {

        memset(visited, false, sizeof(visited));
        int light_cnt = dfs(i, heavier);

        memset(visited, false, sizeof(visited));
        int heavy_cnt = dfs(i, lighter);

        if (light_cnt >= mid || heavy_cnt >= mid) {
            result++;
        }
    }

    cout << result << '\n';
    return 0;
}
