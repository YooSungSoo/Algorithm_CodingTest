#include <bits/stdc++.h>
using namespace std;

int t, n, m;
int coin[21];
int dp[10001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> t;
	
	while(t--){
		
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> coin[i];
		}
		
		cin >> m;
		
		memset(dp, 0, sizeof(dp));
        dp[0] = 1;
		
		for (int i = 0; i < n; i++) {
            int c = coin[i];
            for (int j = c; j <= m; j++) {
                dp[j] += dp[j - c];
            }
        }

        cout << dp[m] << '\n';
	}
	
    return 0;
}
