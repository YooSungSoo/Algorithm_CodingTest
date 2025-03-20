#include <bits/stdc++.h>

using namespace std;

int n,k,b,sum;

int main() {
	
	cin >> n >> k;
	
	vector<int> a(n);
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	sum = accumulate(a.begin(),a.begin()+k,0);
	int maxSum = sum;
	
	for(int i=1;i<n-k+1;i++){
		sum = sum - a[i-1] + a[i+k-1];
		maxSum = max(sum,maxSum);
	}
	
	cout << maxSum ;
	return 0;
}

