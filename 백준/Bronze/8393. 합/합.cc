#include<bits/stdc++.h>

using namespace std;

int a,sum;

int main(){

	cin >> a;
	
	for(int i=1;i<a+1;i++){
		
		sum += i;
	}
	cout << sum;
	
	return 0;
}