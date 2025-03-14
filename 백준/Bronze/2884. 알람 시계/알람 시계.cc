#include<bits/stdc++.h>

using namespace std;

int a,b;

int main(){

	cin >> a >> b;
	
	if(b<45){
		a = a-1;
		b = 60 - 45 + b;
	}else if(b>=45){
		b = b-45;
	}
	
	if(a<0){
		a = 24 + a;
	}
	
	cout << a << " " << b;

	return 0;
}