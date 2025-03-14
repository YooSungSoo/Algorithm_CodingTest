#include<bits/stdc++.h>

using namespace std;

int n,m,i,j,k;


int main(){

	cin >> n >> m;
	
	vector<int> a(n,0);
	
	for(int q=0;q<m;q++){
		cin >> i >> j >> k;
		
		for(int e = i-1;e<j;e++){
			a[e] = k;			
		}
		
	}
	
	for(int q = 0;q<n;q++){
		cout << a[q] << " ";
	}
	
	return 0;
}