#include <bits/stdc++.h>

using namespace std;

int n;
int dp[100004];
int arr[100004];

int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	dp[0] = arr[0];
	int rst = dp[0];
	
	for(int i=1;i<n;i++){
		dp[i] = max(dp[i-1] + arr[i], arr[i]); 
		rst = max(rst, dp[i]);
	}
	
    cout << rst;
    
    return 0;
}
