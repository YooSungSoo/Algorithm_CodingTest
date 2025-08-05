#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MAX_N = 10005;
const int MAX_V = 150;

int N, M;
bool trap[MAX_N];
int dp[MAX_N][MAX_V];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    while (M--) {
        int x;
        cin >> x;
        trap[x] = true;
    }

    for (int i = 0; i <= N; i++)
        for (int j = 0; j < MAX_V; j++)
            dp[i][j] = INF;

    dp[1][0] = 0; 
    for (int pos = 1; pos <= N; pos++) {
        for (int speed = 0; speed < MAX_V; speed++) {
            if (dp[pos][speed] == INF) continue;

            for (int delta = -1; delta <= 1; delta++) {
                int next_speed = speed + delta;
                if (next_speed <= 0) continue;

                int next_pos = pos + next_speed;
                if (next_pos > N || trap[next_pos]) continue;

                dp[next_pos][next_speed] = min(dp[next_pos][next_speed], dp[pos][speed] + 1);
            }
        }
    }

    int result = INF;
    for (int speed = 0; speed < MAX_V; speed++)
        result = min(result, dp[N][speed]);

    cout << (result == INF ? -1 : result) << '\n';
    return 0;
}
