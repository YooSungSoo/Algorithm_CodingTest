#include<bits/stdc++.h> 

using namespace std; 

int n,cnt;
string s;
int main() {

	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> s;
		stack<char> stk;
		
		for(int j=0;j<s.size();j++){
			if(stk.size() && stk.top()==s[j]) stk.pop();
			else stk.push(s[j]);
		}
		
		if(stk.size()==0) cnt++;
		
	}
	cout << cnt;
	
	return 0;
}