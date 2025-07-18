#include<bits/stdc++.h>
using namespace std;

long long a;

long long fibo(long long n){
	if(n==0) return 0;
	else if(n == 1) return 1;
	else return fibo(n-1) + fibo(n-2);
}

int main(){

	cin >> a;
	cout << fibo(a);

	return 0;
}