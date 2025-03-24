#include<bits/stdc++.h> 

using namespace std; 

long long a,b,c,rst;

long long go(long long a,long long b){
	if(b==1) return a%c;
	long long rst = go(a,b/2);
	rst = (rst * rst) % c;
	if(b%2) rst = (rst * a)%c;
	return rst;
}

int main() {

	cin >> a >> b >> c;
	cout << go(a,b);
	return 0;
}