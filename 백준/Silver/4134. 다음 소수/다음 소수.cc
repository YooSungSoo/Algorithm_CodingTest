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
    
    cin >> n;
    
    for(int i=0;i<n;i++){
    	cin >> m;
    	
    	while(!isPrime(m)){
    		m++;
		}
		cout << m << endl;
	}
	
	return 0;
}  