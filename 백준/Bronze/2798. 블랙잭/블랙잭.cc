#include<bits/stdc++.h>

using namespace std;

int n,m,a,sum,max1;

int main() {

	cin >> n >> m;
	vector<int> q(n);
	
	for(int i=0;i<n;i++){
		cin >> a;
		q[i] = a;
	}
	
	for(int i=0;i<q.size();i++){
		for(int j=i+1;j<q.size();j++){
			for(int k=j+1;k<q.size();k++){
				sum = q[i] + q[j] + q[k];
				if(sum <= m && max1 <= sum) max1 = sum; 
			}
		}
	}
	
	cout << max1;
	
	
    return 0;
}