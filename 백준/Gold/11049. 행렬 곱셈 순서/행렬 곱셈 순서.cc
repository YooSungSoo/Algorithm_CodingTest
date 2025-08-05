#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int n;
pair<int, int> matrix[501];
int dp[501][501];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> matrix[i].first >> matrix[i].second;
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 1; i <= n - len + 1; i++) {
            int j = i + len - 1;
            dp[i][j] = INF;

            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j]
                         + matrix[i].first * matrix[k].second * matrix[j].second;

                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    cout << dp[1][n] << "\n";

    return 0;
}
