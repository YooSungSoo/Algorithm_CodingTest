#include<bits/stdc++.h>

using namespace std;

int n;

int main(){
	
	cin >> n;
	for(int i=1;i<n+1;i++){
		for(int j=i;j<n;j++){
			cout << " ";
		}
		for(int j=0;j<2*i-1;j++){
			cout << "*";
		}
		cout << endl;
	}
	for(int i=n-1;i>0;i--){
		for(int j=n;j>i;j--) cout << " ";
		for(int k = 0;k<2*i-1;k++) cout << "*";
		cout << endl;
	}
	return 0;
}