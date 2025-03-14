#include<bits/stdc++.h>

using namespace std;

int n,m;
double max1, avg;



int main(){
	
	cin >> n;
	vector<double> a(n);
	
	for(int i=0;i<n;i++){
		cin >> m;
		a[i] = m;
	}
	max1 = a[0];
	
	for(int i=0;i<n;i++){
		if(a[i] > max1) max1 = a[i];
	}
	
	for(int i=0;i<n;i++){
		a[i] = a[i] / max1 * 100;
	}
	
	for(int i=0;i<n;i++){
		avg += a[i];
	}
	cout << fixed << setprecision(10) << avg/n;
	return 0;
}