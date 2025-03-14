#include<bits/stdc++.h>

using namespace std;

int n,v,cnt;
vector<int> a;

int main(){

	cnt =0;
	cin >> n;
	a.resize(n);
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	cin >> v;
	
	for(int i=0;i<n;i++){
		if(a[i]==v) cnt++;
	}
	cout << cnt;
	return 0;
}