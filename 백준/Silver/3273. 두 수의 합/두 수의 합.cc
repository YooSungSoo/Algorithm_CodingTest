#include <bits/stdc++.h>

using namespace std;

int n,x;
int cnt;
unordered_set<int> s;

int main(void){
	
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	cin >> x;
	
	for(int i=0;i<n;i++){
		if(s.count(x-v[i])) cnt++;
		s.insert(v[i]);
		
	}
	cout << cnt;
	
	return 0;
}
