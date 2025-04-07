#include<bits/stdc++.h>

using namespace std;

int a,b,c,n;

int main(void){
	vector<int> n;
	cin >> a >> b >> c;
	n.push_back(a);
	n.push_back(b);
	n.push_back(c);
	
	sort(n.begin(),n.end());
	
	for(auto it : n){
		cout << it << " ";
	}
	return 0;
}