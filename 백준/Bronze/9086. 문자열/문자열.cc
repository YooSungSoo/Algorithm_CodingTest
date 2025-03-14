#include<bits/stdc++.h>

using namespace std;

int n;
string s;

int main(){
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s;
		if(s.length()==1) cout << s << s << endl;
		else cout << s[0] << s[s.length()-1] << endl;
	}
	
	return 0;
}