#include<bits/stdc++.h>

using namespace std;

int n,k,a;

int main() {
 
 	cin >> n >> k;
 	
 	vector<int> a;
 	
 	for(int i=1;i<n+1;i++){
 		if(n % i==0) a.push_back(i);
	 }

	cout << a[k-1];
    return 0;
}