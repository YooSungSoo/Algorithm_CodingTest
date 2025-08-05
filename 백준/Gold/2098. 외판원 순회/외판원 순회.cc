#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int N;
int W[16][16];
int dp[1<<16][16];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> W[i][j];
        }
    }

    int FULL = (1 << N) - 1;

    for(int mask = 0; mask <= FULL; mask++){
        for(int i = 0; i < N; i++){
            dp[mask][i] = INF;
        }
    }

    dp[1][0] = 0; 

    for(int mask = 1; mask <= FULL; mask++){
        for(int last = 0; last < N; last++){
            if (!(mask & (1 << last))) continue;

            for(int nxt = 0; nxt < N; nxt++){
                if (mask & (1 << nxt)) continue;
                if (W[last][nxt] == 0) continue;

                int nextMask = mask | (1 << nxt);
                dp[nextMask][nxt] = min(dp[nextMask][nxt],
                                        dp[mask][last] + W[last][nxt]);
            }
        }
    }

    int ans = INF;
    for(int i = 0; i < N; i++){
        if (W[i][0] != 0){
            ans = min(ans, dp[FULL][i] + W[i][0]);
        }
    }

    cout << ans << "\n";
    return 0;
}
