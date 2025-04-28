#include <bits/stdc++.h>

using namespace std;

int n,m,a,b;


int main() {
	ios::sync_with_stdio(false); 
    cin.tie(NULL);
	cin >> n >> m;
	vector<int> v(n+1);
	
	for(int i=1;i<=n;i++){
		cin >> v[i];
		v[i] += v[i-1];
	}
	
	while(m--){
		cin >> a >> b;
		cout << v[b] - v[a - 1] << "\n";
	}
	
	return 0;
}
