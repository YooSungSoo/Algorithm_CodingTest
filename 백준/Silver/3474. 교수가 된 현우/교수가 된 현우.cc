#include<bits/stdc++.h>

using namespace std;

int n;
long long t;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> t;
		int rst2 = 0,rst5=0;
		for(int j=2;j<=t;j*=2){
			rst2 += t/j;
		}
		for(int j=5;j<=t;j*=5){
			rst5 += t/j;
		}
		cout << min(rst2,rst5) << "\n";
	}

	return 0;
}