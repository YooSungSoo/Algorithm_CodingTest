#include<bits/stdc++.h>
using namespace std;

int a, n;

int cal(int n){
	if(n==0) return 1;
	else if(n<0) return 0;
	
	return cal(n-1) + cal(n-2) + cal(n-3);
}

int main(){

	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> a;
		cout << cal(a) << "\n";
		
	}
	
	return 0;
}