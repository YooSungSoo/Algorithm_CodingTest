#include <bits/stdc++.h>
using namespace std;

int t,n;

int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		int r = 0;
		
		for(int j=5;j<=n;j*=5){
			r += n/j;
		}
		
		cout << r << "\n";
	}

    return 0;
}
