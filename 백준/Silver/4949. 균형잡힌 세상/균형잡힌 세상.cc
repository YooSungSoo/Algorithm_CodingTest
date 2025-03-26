#include <bits/stdc++.h>

using namespace std;

string s;

int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	
	while(1){
		getline(cin,s);
		stack<char> stk;
		if(s == ".") break;
		for(int i=0;i<s.length();i++){
			if(s[i]=='[' || s[i]==']' || s[i]=='(' || s[i]==')'){
				if(s[i]=='[' || s[i]=='(') stk.push(s[i]);
				else if(!stk.empty() && stk.top()=='[' && s[i]==']') stk.pop();
				else if(!stk.empty() && stk.top()=='(' && s[i]==')') stk.pop();
				else stk.push(s[i]);
			}
		}
		if(stk.size()==0) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}


	return 0;	
}
