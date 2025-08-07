#include <bits/stdc++.h>
using namespace std;

int n, rst;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
	while(1){
		
		
		if(n%5==0) break;
		
		n -= 2;
		rst ++;
		
		if(n<0){
			cout << -1;
			return 0;
		}
	}
	rst += (n/5);
	cout << rst;
	

    return 0;
}
