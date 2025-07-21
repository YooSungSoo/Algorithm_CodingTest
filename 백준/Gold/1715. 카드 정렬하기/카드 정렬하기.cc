#include <bits/stdc++.h>
using namespace std;

int n,k;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	priority_queue<int,vector<int>,greater<int>> pq;

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> k;
		pq.push(k);
	}
	
	int rst = 0;
	int a = 0;
	int b = 0;
	if(pq.size()==1){
		cout << 0;
		return 0;
	}
	
	while(1){
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		rst += a+b;
		if(pq.empty()) break;
		pq.push(a+b);
	}
	
	cout << rst;
	
    return 0;
}
