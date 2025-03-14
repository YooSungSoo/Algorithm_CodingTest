#include<bits/stdc++.h>

using namespace std;

int a;

int main(){

	cin >> a;
	
	for(int i=1;i<a+1;i++){
		for(int j=0;j<i;j++){
			cout << "*";
		}
		cout << "\n";
	}
	
	return 0;
}