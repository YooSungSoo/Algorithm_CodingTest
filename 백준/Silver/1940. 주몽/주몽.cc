#include<bits/stdc++.h> 

using namespace std; 

int n,m,cnt;

int main() {

	cin >> n >> m;
	
	vector<int> s(n);
	
	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i] + s[j]==m) cnt++;
		}
	}
	
	cout << cnt;
	
	return 0;
}