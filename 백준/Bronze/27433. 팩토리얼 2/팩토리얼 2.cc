#include<bits/stdc++.h>
using namespace std;

long long a;

long long fac(long long n){
	if(n==0) return 1;
	else return n * fac(n-1);
}

int main(){

	cin >> a;
	cout << fac(a);

	return 0;
}