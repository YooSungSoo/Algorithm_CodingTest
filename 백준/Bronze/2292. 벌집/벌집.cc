#include<bits/stdc++.h>

using namespace std;

long long n,a,b;

int main(){
	
	cin >> n;
	b=1;
	a=1;
	
	while(true){
		if(b < n){
			b = b + a*6;
			a++;
		}
		else break;
		
		
	}
	cout << a;

	return 0;
}