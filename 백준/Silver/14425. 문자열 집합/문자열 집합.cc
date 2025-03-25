#include<bits/stdc++.h> 

using namespace std; 

int n,m,cnt;

int main() {
	
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	cin >> n >> m;
	
	set<string> se;
	
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		se.insert(s);
	}
	
	for(int i=0;i<m;i++){
		string s;
		cin >> s;
		if(se.count(s)) cnt++;
	}
	
	cout << cnt;
		
	return 0;
	
}