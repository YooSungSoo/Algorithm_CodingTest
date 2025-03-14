#include<bits/stdc++.h>

using namespace std;

int n,max1,min1;


int main(){

	cin >> n;
	vector<int> a(n);

	for(int i=0;i<n;i++){
		cin >> a[i];
	}
		max1 = a[0];
		min1 = a[0];
	for(int i=0;i<n;i++){

		if(a[i] > max1) max1 = a[i];
		if(a[i] < min1) min1 = a[i];
	}
	
	cout << min1 << " " << max1;
	
	return 0;
}