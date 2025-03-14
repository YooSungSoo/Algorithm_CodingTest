#include<bits/stdc++.h>

using namespace std;

int x,n,a,b,sum;

int main(){

	cin >> x >> n;
	
	for(int i=0;i<n;i++){
		
		cin >> a >> b;
		sum += a * b;
		a=0;
		b=0;
	}
	if(x == sum) cout << "Yes";
	else cout << "No";
	
	return 0;
}