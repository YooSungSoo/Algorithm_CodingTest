#include<bits/stdc++.h> 

using namespace std; 

int n,k;

int main() {

	cin >> n ;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		cout << a[i] << "\n";
	}
	return 0;
}