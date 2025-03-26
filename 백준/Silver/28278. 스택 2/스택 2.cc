#include <bits/stdc++.h>

using namespace std;

int a,n,x;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	
	stack<int> stk;
	cin >> a;
	for(int i=0;i<a;i++){
		cin >> n;
	if(n==1){
		cin >> x;
		stk.push(x);
	}else if(n==2){
		if(stk.size()!=0){
			cout << stk.top() << "\n";
			stk.pop();
		}
		else cout << "-1" << "\n";
	}else if(n==3){
		cout << stk.size() << "\n";
	}else if(n==4){
		if(stk.size()==0) cout << "1" << "\n";
		else cout << "0" << "\n";
	}else if(n==5){
		if(stk.size()!=0){
			cout << stk.top() << "\n";
		}
		else cout << "-1" << "\n";
	}
	}
	

    return 0;
}
