#include <bits/stdc++.h>

using namespace std;

int a, rst;

int fac(int n){
	if(n<=1) return 1;
	else return n * fac(n-1);
}

int main(void){

	cin >> a;
	cout << fac(a);
	
}