#include <bits/stdc++.h>
using namespace std;

int n,a;
int rst;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	vector<int> dp(n,1);
	int rst = 1;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(v[j] < v[i]) dp[i] = max(dp[i],dp[j]+1);
		}
		rst = max(rst,dp[i]);
	}
	
	cout << rst;
	
	
	return 0;
}