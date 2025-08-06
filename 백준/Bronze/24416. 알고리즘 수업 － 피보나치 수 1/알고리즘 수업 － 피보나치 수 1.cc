#include <bits/stdc++.h>
using namespace std;

int n, f1, f2;
int dp[40];

int fibo(int k){

	if(k<1) return 0;
	else if(k == 1){
		f1++;
		return 1;
	} 
	else return fibo(k-1) + fibo(k-2);
}

int fibo2(int k){
	dp[1] = 1;
	dp[2] = 1;
	for(int i=3;i<=k;i++){
		dp[i] = dp[i-1] + dp[i-2];
		f2++;
	}
	
	return dp[k];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	fibo(n);
	fibo2(n);

	cout << f1 << endl;
	cout << f2;

    return 0;
}
