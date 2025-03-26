#include <bits/stdc++.h>

using namespace std;

int k;
string s;

int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	
	cin >> k;
	
	for(int i=0;i<k;i++){
		cin >> s;
		stack<char> stk;

		for(int j=0;j<s.length();j++){
			if(!stk.empty() && stk.top()=='(' && s[j]== ')') stk.pop();
			else stk.push(s[j]);
		}
		if(stk.size()==0) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;	
}
