#include <bits/stdc++.h>
using namespace std;

int t, n;
long long dp[104];

long long wave(int k){
	
	for(int i=4;i<=k;i++){
		dp[i] = dp[i-2] + dp[i-3];
	}
	return dp[k];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> t;
	while(t--){
		cin >> n;
		dp[1] = 1;
		dp[2] = 1;
		dp[3] = 1;	
		cout << wave(n) << "\n";
	}

    return 0;
}
