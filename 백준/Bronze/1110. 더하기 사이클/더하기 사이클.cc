#include<bits/stdc++.h>
using namespace std;

int rst, n, origin;

int main(){

	cin >> n;
	
	origin = n;

	
	while(1){
		
		int a = (n / 10) + (n % 10);
		n = (n % 10) * 10 + (a % 10);
		
		rst++;
		
		if(origin==n) break;
	}
	
	cout << rst;
	
	return 0;
}