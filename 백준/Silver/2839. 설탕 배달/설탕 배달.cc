#include <bits/stdc++.h>

using namespace std;

int n,k;
vector<int> a;

int main() {
	
	cin >> n;
	k=5000;
	
	for(int i=0;i<(n/5)+1;i++){
		for(int j=0;j<(n/3)+1;j++){
			if(i*5 + j *3 == n) a.push_back(i+j);
		}
	}
	
	for(int i=0;i<a.size();i++){
		if(a[i]<k) k=a[i];
	}
	
	if(k==5000) cout << -1;
	else cout << k;
	
    return 0;
}
