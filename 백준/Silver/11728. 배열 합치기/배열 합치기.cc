#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n >> m;
	
	vector<int> v;
	for(int i=0;i<n+m;i++){
		int a = 0;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(),v.end());
	
	for(auto k : v){
		cout << k << " ";
	}
	return 0;
}