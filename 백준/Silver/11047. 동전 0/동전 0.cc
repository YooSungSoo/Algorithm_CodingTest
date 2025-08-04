#include <bits/stdc++.h>
using namespace std;

int n, k, a, rst;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	
	for(int i=0;i<n;i++){
		if(k >= v[n-i -1]){
			rst = rst + (k / v[n-i -1]);
			k =  k % v[n-i -1];
		}
	}
	
	cout << rst;

    return 0;
}
