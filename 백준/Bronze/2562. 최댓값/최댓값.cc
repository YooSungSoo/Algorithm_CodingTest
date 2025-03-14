#include<bits/stdc++.h>

using namespace std;

int n,max1,k;


int main(){

	vector<int> a(9);

	for(int i=0;i<9;i++){
		cin >> a[i];
	}
	
	max1 = a[0];
	k=1;

	for(int i=1;i<9;i++){
		if(a[i]>max1){
			max1 =a[i];
			k = i+1;
		} 
	}
	
	cout << max1 << endl;
	cout << k;
	
	return 0;
}