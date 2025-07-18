#include<bits/stdc++.h>
using namespace std;

int n,k;
int cnt;
int main(){

	cin >> n >> k;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a = 0;
		cin >> a;
		v.push_back(a);
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(v[i] + v[j]==k) cnt++;
		}
	}
	
	cout << cnt;
	
	return 0;
}