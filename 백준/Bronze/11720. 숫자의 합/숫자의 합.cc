#include<bits/stdc++.h>

using namespace std;

int n,k,sum;
string s;

int main(){
	
	cin >> n;
	cin >> s;

	for(int i=0;i<n;i++){
		k = s[i] -'0';
		sum += k;
	}
	cout << sum;
	return 0;
}