#include <bits/stdc++.h>
using namespace std;

int n;

bool isPrime(int k){
	if(k<2) return false;
	for(int i=2; i*i <= k;i++){
		if(k % i == 0 ) return false;
	}
	return true;
}

void dfs(int i, int j){
	if(j==n){
		cout << i << "\n";
		return;
	}
	for(int d : {1,3,5,7,9}){
		int next = i * 10 + d;
		if(isPrime(next)) dfs(next,j+1);
	}
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	
	for(auto k : {2,3,5,7}){
		
		dfs(k,1);
	}
	
    return 0;
}
