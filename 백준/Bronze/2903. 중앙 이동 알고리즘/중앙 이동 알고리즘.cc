#include<bits/stdc++.h>

using namespace std;

int n,r,a;

int main(){
	
	cin >> n;
	r=1;

	for(int i=0;i<n;i++){
		r = r * 2;
	}
	a = (r+1) * (r+1);
	cout << a;
	return 0;
}