#include <bits/stdc++.h>
using namespace std;

int a[104][104];
long long dp[104][104];
int n, rst;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	
	dp[0][0] = 1;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(dp[i][j] == 0 || (i == n-1 && j == n-1))	continue;
			int d = a[i][j];
			if (i + d < n) dp[i + d][j] += dp[i][j];
			if (j + d < n) dp[i][j + d] += dp[i][j];
				
			
		}
	}
	cout << dp[n-1][n-1];
	
    return 0;
}
