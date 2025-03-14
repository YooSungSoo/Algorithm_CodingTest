#include<bits/stdc++.h>

using namespace std;

int a,b,c;

int main(){

	cin >> a;
	
	for(int i=0;i<a;i++){
		cin >> b >> c;
		cout << b+c << endl;
		c=0;b=0;
	}
	
	return 0;
}