#include <bits/stdc++.h>
using namespace std;

long long n;
long long dp[100];

void fibo(int k){
	dp[0] = 0;
	dp[1] = 1;
	
	for(int i=2;i<=k;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

	fibo(n);
	cout << dp[n];

    return 0;
}
