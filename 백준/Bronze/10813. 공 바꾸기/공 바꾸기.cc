#include<bits/stdc++.h>

using namespace std;

int n,m,i,j,temp;


int main(){

	cin >> n >> m;
	
	vector<int> a(n);
	
	for(int i=0;i<n;i++){
		a[i] = i+1;
	}
	for(int q=0;q<m;q++){
		cin >> i >> j;
		temp = a[i-1];
		a[i-1] = a[j-1];
		a[j-1] = temp;
		}
		
	for(int w = 0;w<n;w++){
		cout << a[w] << " ";
	}
	
	return 0;
}