#include<bits/stdc++.h>

using namespace std;

string s;


int main(){
	
	cin >> s;
	bool c=true;
	for(int i=0;i<s.length()/2;i++){
		if(s[i]==s[s.length()-i-1]) {
		c=true;}
		else {
			c = false ;
			break;
			}
	}
	if(c==true) cout << 1;
	else cout << 0;
	return 0;
}