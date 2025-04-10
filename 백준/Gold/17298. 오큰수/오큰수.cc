#include <bits/stdc++.h>

using namespace std;

int n,a[1000001],rst[10000001];
stack<int> s;

int main(void){
	
	cin >> n;
	memset(rst,-1,sizeof(rst));
	for(int i=0;i<n;i++){
		cin >> a[i];
		while(s.size() && a[s.top()] < a[i]){
			rst[s.top()] = a[i];
			s.pop();
		}
		s.push(i);
	}
	
	for(int i = 0; i < n; i++) cout << rst[i] << " "; 
	
	return 0;
}