#include<bits/stdc++.h>

using namespace std;

long long n,m;

bool isPrime(long long num){
	if(num<2) return false;
	for(long long i=2;i*i<=num;i++){
		if(num %i ==0) return false;
	}	
	return true;
}


int main(void){
	
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n>> m;
    
    for(int i=n;i<m+1;i++){
    	if(isPrime(i)==true) cout << i << "\n";
    }
	
	return 0;
}  