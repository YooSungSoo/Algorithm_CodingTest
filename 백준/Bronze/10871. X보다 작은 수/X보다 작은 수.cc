#include<bits/stdc++.h>

using namespace std;

int n,x;


int main(){

	cin >> n >> x;
	vector<int> a(n);
	string s="";
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i] < x ){
			s += to_string(a[i]) + " ";
		}
	}
	cout << s;
	return 0;
}