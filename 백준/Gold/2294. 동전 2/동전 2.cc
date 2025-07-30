#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> coin(N);
    for (int i = 0; i < N; i++) {
        cin >> coin[i];
    }

    vector<int> dp(K + 1, INF);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = coin[i]; j <= K; j++) {
            dp[j] = min(dp[j], dp[j - coin[i]] + 1);
        }
    }
    
    if (dp[K] == INF) {
        cout << -1 << '\n';
    } else {
        cout << dp[K] << '\n';
    }

    return 0;
}
