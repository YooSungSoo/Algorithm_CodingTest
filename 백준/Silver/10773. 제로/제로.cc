#include <bits/stdc++.h>

using namespace std;

int k,n,rst;

int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	
	stack<int> stk;
	
	cin >> k;
	
	for(int i=0;i<k;i++){
		cin >> n;
		if(n==0) stk.pop();
		else stk.push(n);
	}
	
	while(stk.size()){
		rst += stk.top();
		stk.pop();
		
	}
		cout << rst;
		return 0;	
}
