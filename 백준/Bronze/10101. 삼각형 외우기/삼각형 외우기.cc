#include<bits/stdc++.h>

using namespace std;

int a,b,c;

int main() {

	cin >> a >> b >> c;
	
	if(a+b+c==180){
		if(a==c&& b==c) cout << "Equilateral";
		else if(a==b && b!=c || b==c && b!=a || a==c && a!=b)cout << "Isosceles";
		else cout << "Scalene";
	}
	else cout << "Error";
	
    return 0;
}