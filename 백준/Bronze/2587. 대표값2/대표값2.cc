#include<bits/stdc++.h> 

using namespace std; 

int n,sum,rst;

int main() {

	vector<int> a(5);
	
	for(int i=0;i<5;i++){
		cin >> a[i];
		sum +=a[i];
	}
	
	sort(a.begin(),a.end());
	
	cout << sum / 5 << "\n";
	cout << a[2];

	
	return 0;
}