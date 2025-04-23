#include <bits/stdc++.h>

using namespace std;

int a,n,rst;

int main() {

	cin >> a;
	vector<int> v;
	
	for(int i=0;i<a;i++){
		cin >> n;
		if(a==1){
			cout << n * n;
			return 0;
		}else v.push_back(n);
	}

	sort(v.begin(),v.end());
	rst = v[0] * v[v.size()-1];
	cout << rst;
		
    return 0;
}
