#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	
	if(next_permutation(v.begin(),v.end())){
		for(auto k : v){
			cout << k << " ";
		}
	}else cout << -1;
    return 0;
}
