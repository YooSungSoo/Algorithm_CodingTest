#include<bits/stdc++.h>
using namespace std;

string s;

int main() {
 
	cin >> s;
	int n = s.size()/2;
	int rst = 1;
	
	for(int i=0;i<n;i++){
		if(s[i] == s[s.size()- 1 -i]) continue;
		else rst = 0;
	}
	
	cout << rst;
	return 0;   
}