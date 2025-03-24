#include<bits/stdc++.h> 

using namespace std; 

int n,k;

int main() {

	cin >> n >> k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	cout << a[a.size()-k];
	return 0;
}