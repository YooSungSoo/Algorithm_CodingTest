#include<bits/stdc++.h>

using namespace std;

int a,b,s;

int main(){

	while(true){
		cin >> a >> b;
		if(a==0 && b==0) break;
		s = a + b;
		cout << s << endl;
		a=0;
		b=0;
		s=0;
	}
	
	return 0;
}