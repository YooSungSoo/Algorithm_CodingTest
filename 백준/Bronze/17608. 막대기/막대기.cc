#include<bits/stdc++.h>
using namespace std;

int n;

int main(){

	stack<int> stk;
	cin >> n;
	
	for(int i=0;i<n;i++){
		int k =0;
		cin >> k;
		stk.push(k);
	}
	
	int a = stk.top();
	int rst = 1;
	stk.pop();
	while(!stk.empty()){
		if(stk.top()>a){
			rst ++;
			a = stk.top();
		}
		stk.pop();
	}
	cout << rst;

	return 0;
}