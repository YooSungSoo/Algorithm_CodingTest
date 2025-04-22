#include <bits/stdc++.h>

using namespace std;

int n, rst;
int main(void){

	cin >> n;
	rst = n * (n-1);
	if(n==1) cout << 0;
	else cout << rst;
	return 0;
}