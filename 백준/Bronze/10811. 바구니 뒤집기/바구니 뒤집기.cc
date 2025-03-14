#include<bits/stdc++.h>

using namespace std;

int n,m,q,w;


int main(){
	
	cin >> n >> m;
	
	vector<int> a(n);
	
	for(int i=0;i<n;i++){
		a[i] = i+1;
	}

	for(int i=0;i<m;i++){
		cin >> q >> w;
		reverse(a.begin()+ (q-1),a.begin() + w);
	}
	
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	
	return 0;
}