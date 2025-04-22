#include <bits/stdc++.h>

using namespace std;

int n, rst;
int main(void){

	cin >> n;
	rst = 1;
	for(int i=1;i<n+1;i++){
		rst *= 2;
	}
	cout << rst;
}