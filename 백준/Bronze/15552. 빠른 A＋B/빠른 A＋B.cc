#include<bits/stdc++.h>

using namespace std;

int a,b,c,sum;

int main(){

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> a;
	
	while(true){
		if(a==0) break;
		
		cin >> b >> c;
		sum = b + c;
		cout << sum << "\n";
		
		b=0;
		c=0;
		sum=0;
		a--;
		
	}
	
	
	return 0;
}